
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

unsigned int
FUNC_2 (enum machine_mode VAR_3, enum machine_mode VAR_4)
{
  unsigned int VAR_5 = 0;
  int VAR_6 = (FUNC_0 (VAR_4) - FUNC_0 (VAR_3));

  FUNC_1 (FUNC_0 (VAR_4) >= FUNC_0 (VAR_3));

  if (VAR_6 > 0)
    {
      if (! VAR_2)
 VAR_5 += (VAR_6 / VAR_1) * VAR_1;
      if (! VAR_0)
 VAR_5 += VAR_6 % VAR_1;
    }

  return VAR_5;
}
