
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HOST_WIDE_INT ;



__attribute__((used)) static int
FUNC_0 (HOST_WIDE_INT VAR_0, int VAR_1)
{
  HOST_WIDE_INT VAR_2;
  int VAR_3 = 0;
  do
    {
      int VAR_4;

      if (VAR_1 <= 0)
 VAR_1 += 32;
      if (VAR_0 & (3 << (VAR_1 - 2)))
 {
   VAR_4 = VAR_1 - 8;
   if (VAR_4 < 0)
     VAR_4 += 32;
   VAR_2 = VAR_0 & ((0x0ff << VAR_4)
        | ((VAR_1 < VAR_4) ? (0xff >> (32 - VAR_4)) : 0));
   VAR_0 &= ~VAR_2;
   VAR_3++;
   VAR_1 -= 6;
 }
      VAR_1 -= 2;
    } while (VAR_0);
  return VAR_3;
}
