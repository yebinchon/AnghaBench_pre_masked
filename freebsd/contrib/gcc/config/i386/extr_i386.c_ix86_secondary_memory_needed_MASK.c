
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int) ;
 int VAR_5 ;

int
FUNC_8 (enum reg_class VAR_6, enum reg_class VAR_7,
         enum machine_mode VAR_8, int VAR_9)
{
  if (FUNC_2 (VAR_6) != FUNC_0 (VAR_6)
      || FUNC_2 (VAR_7) != FUNC_0 (VAR_7)
      || FUNC_4 (VAR_6) != FUNC_6 (VAR_6)
      || FUNC_4 (VAR_7) != FUNC_6 (VAR_7)
      || FUNC_3 (VAR_6) != FUNC_5 (VAR_6)
      || FUNC_3 (VAR_7) != FUNC_5 (VAR_7))
    {
      FUNC_7 (!VAR_9);
      return 1;
    }

  if (FUNC_0 (VAR_6) != FUNC_0 (VAR_7))
    return 1;




  if (FUNC_5 (VAR_6) != FUNC_5 (VAR_7))
    return 1;

  if (FUNC_6 (VAR_6) != FUNC_6 (VAR_7))
    {

      if (!VAR_3)
 return 1;



      if (!VAR_2 && !VAR_5)
 return 1;


      if (FUNC_1 (VAR_8) > VAR_4)
 return 1;




      if (VAR_8 == VAR_1 || VAR_8 == VAR_0)
 return 1;
    }

  return 0;
}
