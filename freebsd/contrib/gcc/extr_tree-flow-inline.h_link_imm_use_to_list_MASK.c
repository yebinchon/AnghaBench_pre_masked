
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ ssa_use_operand_t ;



__attribute__((used)) static inline void
FUNC_0 (ssa_use_operand_t *VAR_0, ssa_use_operand_t *VAR_1)
{


  VAR_0->prev = VAR_1;
  VAR_0->next = VAR_1->next;
  VAR_1->next->prev = VAR_0;
  VAR_1->next = VAR_0;
}
