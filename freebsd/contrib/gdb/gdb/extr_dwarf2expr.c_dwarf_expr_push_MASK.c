
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_context {int stack_len; int * stack; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct dwarf_expr_context*,int) ;

void
FUNC_1 (struct dwarf_expr_context *VAR_0, CORE_ADDR VAR_1)
{
  FUNC_0 (VAR_0, 1);
  VAR_0->stack[VAR_0->stack_len++] = VAR_1;
}
