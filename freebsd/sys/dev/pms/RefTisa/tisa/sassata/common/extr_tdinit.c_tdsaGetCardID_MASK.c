
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tiRoot_t ;
typedef size_t bit32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__* VAR_3 ;

bit32 FUNC_0(tiRoot_t * VAR_4)
{
  bit32 VAR_5;
  bit32 VAR_6 = 0xFFFFFFFF;

  for (VAR_5 = 0 ; VAR_5 < VAR_2 ; VAR_5++)
  {
    if (VAR_3[VAR_5] == VAR_1)
    {
      VAR_3[VAR_5] = VAR_0;
      VAR_6 = VAR_5;
      break;
    }
  }

  return VAR_6;

}
