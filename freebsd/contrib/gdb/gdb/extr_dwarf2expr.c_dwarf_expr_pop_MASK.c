
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_context {scalar_t__ stack_len; } ;


 int FUNC_0 (char*) ;

void
FUNC_1 (struct dwarf_expr_context *VAR_0)
{
  if (VAR_0->stack_len <= 0)
    FUNC_0 ("dwarf expression stack underflow");
  VAR_0->stack_len--;
}
