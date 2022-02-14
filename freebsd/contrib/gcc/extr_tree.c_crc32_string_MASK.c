
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned
FUNC_0 (unsigned VAR_0, const char *VAR_1)
{
  do
    {
      unsigned VAR_2 = *VAR_1 << 24;
      unsigned VAR_3;

      for (VAR_3 = 8; VAR_3--; VAR_2 <<= 1)
   {
     unsigned VAR_4;

     VAR_4 = (VAR_2 ^ VAR_0) & 0x80000000 ? 0x04c11db7 : 0;
    VAR_0 <<= 1;
    VAR_0 ^= VAR_4;
   }
    }
  while (*VAR_1++);
  return VAR_0;
}
