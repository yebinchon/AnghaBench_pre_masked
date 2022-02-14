
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ,int) ;

bool
FUNC_4 (enum machine_mode VAR_7,
          enum machine_mode VAR_8, enum reg_class VAR_9)
{
  if (FUNC_2 (FUNC_0 (VAR_7), FUNC_0 (VAR_8)) <= VAR_6
      && FUNC_1 (FUNC_0 (VAR_7), FUNC_0 (VAR_8)) > VAR_6)
    {
      if (VAR_4)
 {




   if (VAR_1 > 1 && FUNC_3 (VAR_2, VAR_9))
     return 1;
 }
      else
 {






   if (FUNC_3 (VAR_0, VAR_9))
     return 1;
 }
    }




  if (VAR_5
      && VAR_7 == VAR_3
      && FUNC_0 (VAR_8) >= VAR_6
      && FUNC_3 (VAR_2, VAR_9))
    return 1;
  return 0;
}
