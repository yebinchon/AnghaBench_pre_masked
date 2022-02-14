
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cl_option {int var_type; int var_value; scalar_t__ flag_var; } ;







 struct cl_option* VAR_0 ;

int
FUNC_0 (int VAR_1)
{
  const struct cl_option *VAR_2 = &(VAR_0[VAR_1]);
  if (VAR_2->flag_var)
    switch (VAR_2->var_type)
      {
      case 130:
 return *(int *) VAR_2->flag_var != 0;

      case 129:
 return *(int *) VAR_2->flag_var == VAR_2->var_value;

      case 132:
 return (*(int *) VAR_2->flag_var & VAR_2->var_value) == 0;

      case 131:
 return (*(int *) VAR_2->flag_var & VAR_2->var_value) != 0;

      case 128:
 break;
      }
  return -1;
}
