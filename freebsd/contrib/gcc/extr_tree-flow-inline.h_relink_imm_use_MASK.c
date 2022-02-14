
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* use; TYPE_2__* prev; TYPE_1__* next; } ;
typedef TYPE_3__ ssa_use_operand_t ;
struct TYPE_7__ {TYPE_3__* next; } ;
struct TYPE_6__ {TYPE_3__* prev; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1 (ssa_use_operand_t *VAR_0, ssa_use_operand_t *VAR_1)
{

  FUNC_0 (*(VAR_1->use) == *(VAR_0->use));
  VAR_0->prev = VAR_1->prev;
  VAR_0->next = VAR_1->next;
  if (VAR_1->prev)
    {
      VAR_1->prev->next = VAR_0;
      VAR_1->next->prev = VAR_0;

      VAR_1->prev = ((void*)0);
    }
}
