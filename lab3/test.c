void test() {
  unsigned long long *p = 0x602308;
  *p = 0x6593396b4d979b7b;
  p = (unsigned long long *)malloc(sizeof(int));
  return ;
}
