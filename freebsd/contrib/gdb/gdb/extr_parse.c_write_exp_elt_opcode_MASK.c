
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union exp_element {int opcode; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;


 int FUNC_0 (union exp_element) ;

void
FUNC_1 (enum exp_opcode VAR_0)
{
  union exp_element VAR_1;

  VAR_1.opcode = VAR_0;

  FUNC_0 (VAR_1);
}
