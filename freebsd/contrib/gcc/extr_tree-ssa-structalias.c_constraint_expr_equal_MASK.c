
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constraint_expr {scalar_t__ type; scalar_t__ var; scalar_t__ offset; } ;



__attribute__((used)) static bool
FUNC_0 (struct constraint_expr VAR_0, struct constraint_expr VAR_1)
{
  return VAR_0.type == VAR_1.type && VAR_0.var == VAR_1.var && VAR_0.offset == VAR_1.offset;
}
