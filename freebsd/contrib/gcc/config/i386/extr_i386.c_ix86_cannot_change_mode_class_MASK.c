
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

bool
FUNC_4 (enum machine_mode VAR_0, enum machine_mode VAR_1,
          enum reg_class VAR_2)
{
  if (VAR_0 == VAR_1)
    return 0;



  if (FUNC_1 (VAR_2))
    return 1;

  if (FUNC_3 (VAR_2) || FUNC_2 (VAR_2))
    {




      if (FUNC_0 (VAR_0) < 4)
 return 1;





      if (FUNC_0 (VAR_1) < FUNC_0 (VAR_0))
 return 1;
    }

  return 0;
}
