
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* constraint_t ;
struct TYPE_4__ {int rhs; int lhs; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1 (const constraint_t VAR_0, const constraint_t VAR_1)
{
  if (FUNC_0 (VAR_0->lhs, VAR_1->lhs))
    return 1;
  else if (FUNC_0 (VAR_1->lhs, VAR_0->lhs))
    return 0;
  else
    return FUNC_0 (VAR_0->rhs, VAR_1->rhs);
}
