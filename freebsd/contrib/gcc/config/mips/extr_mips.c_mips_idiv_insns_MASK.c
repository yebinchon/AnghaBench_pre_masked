
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_0 (void)
{
  int VAR_4;

  VAR_4 = 1;
  if (VAR_1)
    {
      if (VAR_0)
        VAR_4++;
      else
        VAR_4 += 2;
    }

  if (VAR_2 || VAR_3)
    VAR_4++;
  return VAR_4;
}
