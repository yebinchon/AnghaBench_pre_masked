
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_print {scalar_t__ opcode; char* string; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
struct TYPE_2__ {struct op_print* la_op_print_tab; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

char *
FUNC_0 (enum exp_opcode VAR_2)
{
  int VAR_3;
  const struct op_print *VAR_4;

  VAR_4 = VAR_1->la_op_print_tab;
  for (VAR_3 = 0; VAR_4[VAR_3].opcode != VAR_0; VAR_3++)
    if (VAR_4[VAR_3].opcode == VAR_2)
      return VAR_4[VAR_3].string;
  return ((void*)0);
}
