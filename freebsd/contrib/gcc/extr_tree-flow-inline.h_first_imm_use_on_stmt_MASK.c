
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* use_operand_p ;
struct TYPE_6__ {TYPE_1__* imm_use; int next_imm_name; } ;
typedef TYPE_2__ imm_use_iterator ;
struct TYPE_5__ {int next; } ;



__attribute__((used)) static inline use_operand_p
FUNC_0 (imm_use_iterator *VAR_0)
{
  VAR_0->next_imm_name = VAR_0->imm_use->next;
  return VAR_0->imm_use;
}
