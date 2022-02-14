
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_context {size_t stack_len; size_t stack_allocated; int stack; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static void
FUNC_1 (struct dwarf_expr_context *VAR_0, size_t VAR_1)
{
  if (VAR_0->stack_len + VAR_1 > VAR_0->stack_allocated)
    {
      size_t VAR_2 = VAR_0->stack_len + VAR_1 + 10;
      VAR_0->stack = FUNC_0 (VAR_0->stack,
        VAR_2 * sizeof (CORE_ADDR));
      VAR_0->stack_allocated = VAR_2;
    }
}
