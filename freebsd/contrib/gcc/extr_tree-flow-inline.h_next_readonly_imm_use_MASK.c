
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* use_operand_p ;
struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_9__ {TYPE_2__* imm_use; TYPE_1__ iter_node; } ;
typedef TYPE_3__ imm_use_iterator ;
struct TYPE_8__ {struct TYPE_8__* next; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline use_operand_p
FUNC_2 (imm_use_iterator *VAR_0)
{
  use_operand_p VAR_1 = VAR_0->imm_use;
  VAR_0->imm_use = VAR_1->next;
  if (FUNC_0 (VAR_0))
    return VAR_1;
  return VAR_0->imm_use;
}
