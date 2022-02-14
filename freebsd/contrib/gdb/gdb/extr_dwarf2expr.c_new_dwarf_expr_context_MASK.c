
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_context {int stack_allocated; scalar_t__ pieces; scalar_t__ num_pieces; int stack; scalar_t__ stack_len; } ;
typedef int CORE_ADDR ;


 struct dwarf_expr_context* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

struct dwarf_expr_context *
FUNC_2 (void)
{
  struct dwarf_expr_context *VAR_0;
  VAR_0 = FUNC_0 (1, sizeof (struct dwarf_expr_context));
  VAR_0->stack_len = 0;
  VAR_0->stack_allocated = 10;
  VAR_0->stack = FUNC_1 (VAR_0->stack_allocated * sizeof (CORE_ADDR));
  VAR_0->num_pieces = 0;
  VAR_0->pieces = 0;
  return VAR_0;
}
