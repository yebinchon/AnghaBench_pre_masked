
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

bool
FUNC_2 (enum reg_class VAR_2, enum machine_mode VAR_3)
{
  switch (VAR_2)
    {
    case 128:
      if (FUNC_0 (VAR_3) == VAR_0)
 return 2 * ((FUNC_1 (VAR_3) / 2 + 8 - 1) / 8);
      else
 return (FUNC_1 (VAR_3) + 8 - 1) / 8;
    case 129:
      return (FUNC_1 (VAR_3) + 4 - 1) / 4;
    default:
      break;
    }
  return (FUNC_1 (VAR_3) + VAR_1 - 1) / VAR_1;
}
