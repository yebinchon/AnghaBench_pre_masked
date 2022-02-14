
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0(void *VAR_0, size_t VAR_1)
{
 unsigned char *VAR_2;
 size_t VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = VAR_0;
 if (VAR_1 < 0x80) {
  if (VAR_2 != ((void*)0)) {
   *VAR_2 = VAR_1;
  }
  return 1;
 }
 VAR_4 = 0;
 for (VAR_3 = VAR_1; VAR_3 != 0; VAR_3 >>= 8) {
  VAR_4 ++;
 }
 if (VAR_2 != ((void*)0)) {
  *VAR_2 ++ = 0x80 + VAR_4;
  for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5 --) {
   *VAR_2 ++ = VAR_1 >> (VAR_5 << 3);
  }
 }
 return VAR_4 + 1;
}
