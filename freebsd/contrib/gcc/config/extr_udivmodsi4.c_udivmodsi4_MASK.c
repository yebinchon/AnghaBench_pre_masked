
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(unsigned long VAR_0, unsigned long VAR_1, int VAR_2)
{
  unsigned long VAR_3 = 1;
  unsigned long VAR_4 = 0;

  while (VAR_1 < VAR_0 && VAR_3 && !(VAR_1 & (1L<<31)))
    {
      VAR_1 <<=1;
      VAR_3 <<=1;
    }
  while (VAR_3)
    {
      if (VAR_0 >= VAR_1)
 {
   VAR_0 -= VAR_1;
   VAR_4 |= VAR_3;
 }
      VAR_3 >>=1;
      VAR_1 >>=1;
    }
  if (VAR_2) return VAR_0;
  return VAR_4;
}
