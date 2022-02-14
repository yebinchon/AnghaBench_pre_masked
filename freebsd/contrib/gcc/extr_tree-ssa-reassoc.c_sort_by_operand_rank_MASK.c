
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* operand_entry_t ;
struct TYPE_2__ {scalar_t__ rank; int op; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (const void *VAR_1, const void *VAR_2)
{
  const operand_entry_t VAR_3 = *(const operand_entry_t *)VAR_1;
  const operand_entry_t VAR_4 = *(const operand_entry_t *)VAR_2;




  if (VAR_4->rank == 0 && VAR_3->rank == 0)
    return FUNC_2 (VAR_4->op) - FUNC_2 (VAR_3->op);



  if ((VAR_4->rank - VAR_3->rank == 0)
      && FUNC_1 (VAR_3->op) == VAR_0
      && FUNC_1 (VAR_4->op) == VAR_0)
    return FUNC_0 (VAR_4->op) - FUNC_0 (VAR_3->op);

  return VAR_4->rank - VAR_3->rank;
}
