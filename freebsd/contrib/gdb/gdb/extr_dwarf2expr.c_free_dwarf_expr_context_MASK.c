
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_context {struct dwarf_expr_context* pieces; struct dwarf_expr_context* stack; } ;


 int FUNC_0 (struct dwarf_expr_context*) ;

void
FUNC_1 (struct dwarf_expr_context *VAR_0)
{
  FUNC_0 (VAR_0->stack);
  FUNC_0 (VAR_0->pieces);
  FUNC_0 (VAR_0);
}
