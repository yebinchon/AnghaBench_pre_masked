
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HOST_WIDE_INT ;



int
FUNC_0 (HOST_WIDE_INT VAR_0)
{
  int VAR_1 = 0, VAR_2;

  do
    {
      VAR_2 = (VAR_0 & 0x7f);
      VAR_0 >>= 7;
      VAR_1 += 1;
    }
  while (!((VAR_0 == 0 && (VAR_2 & 0x40) == 0)
    || (VAR_0 == -1 && (VAR_2 & 0x40) != 0)));

  return VAR_1;
}
