
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

enum reg_class
FUNC_5 (rtx VAR_8, enum reg_class VAR_9)
{
  enum machine_mode VAR_10 = FUNC_1 (VAR_8);




  VAR_10 = FUNC_1 (VAR_8);
  if (VAR_7 && FUNC_4 (VAR_10))
    return FUNC_2 (VAR_9) ? VAR_5 : VAR_4;

  if (VAR_6 && FUNC_3 (VAR_10))
    {
      if (VAR_9 == VAR_3)
 return VAR_2;
      else if (VAR_9 == VAR_1)
 return VAR_0;
      else
 return FUNC_0 (VAR_9) ? VAR_9 : VAR_4;
    }

  return VAR_9;
}
