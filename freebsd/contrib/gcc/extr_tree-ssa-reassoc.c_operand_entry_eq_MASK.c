
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* operand_entry_t ;
struct TYPE_2__ {scalar_t__ op; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const operand_entry_t VAR_2 = (operand_entry_t) VAR_0;
  const operand_entry_t VAR_3 = (operand_entry_t) VAR_1;
  return VAR_2->op == VAR_3->op;
}
