
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axs_value {int kind; void* type; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (char*) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3 (struct agent_expr *VAR_1, struct axs_value *VAR_2)
{



  if (FUNC_0 (VAR_2->type) == VAR_0)


    VAR_2->type = FUNC_2 (VAR_2->type);
  else
    switch (VAR_2->kind)
      {
      case 128:
 FUNC_1 ("Operand of `&' is an rvalue, which has no address.");

      case 129:
 FUNC_1 ("Operand of `&' is in a register, and has no address.");

      case 130:
 VAR_2->kind = 128;
 VAR_2->type = FUNC_2 (VAR_2->type);
 break;
      }
}
