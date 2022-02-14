
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct constraint_expr {int dummy; } ;
typedef TYPE_1__* constraint_t ;
struct TYPE_4__ {struct constraint_expr rhs; struct constraint_expr lhs; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static constraint_t
FUNC_1 (const struct constraint_expr VAR_1,
  const struct constraint_expr VAR_2)
{
  constraint_t VAR_3 = FUNC_0 (VAR_0);
  VAR_3->lhs = VAR_1;
  VAR_3->rhs = VAR_2;
  return VAR_3;
}
