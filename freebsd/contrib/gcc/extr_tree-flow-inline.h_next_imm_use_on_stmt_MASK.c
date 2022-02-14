
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* use_operand_p ;
struct TYPE_8__ {TYPE_1__* imm_use; TYPE_1__* next_imm_name; } ;
typedef TYPE_2__ imm_use_iterator ;
struct TYPE_7__ {struct TYPE_7__* next; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline use_operand_p
FUNC_1 (imm_use_iterator *VAR_1)
{
  VAR_1->imm_use = VAR_1->next_imm_name;
  if (FUNC_0 (VAR_1))
    return VAR_0;
  else
    {
      VAR_1->next_imm_name = VAR_1->imm_use->next;
      return VAR_1->imm_use;
    }
}
