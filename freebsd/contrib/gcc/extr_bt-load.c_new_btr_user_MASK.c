
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct btr_user_s {int dummy; } ;
typedef void* rtx ;
typedef TYPE_1__* btr_user ;
typedef TYPE_2__* basic_block ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int luid; int first_reaching_def; void* use; scalar_t__ n_reaching_defs; int * next; scalar_t__ other_use_this_block; void* insn; TYPE_2__* bb; } ;


 int FUNC_0 (void*) ;
 void* VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,void**) ;
 scalar_t__ VAR_1 ;
 void** FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,char*,int,...) ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (int *,int) ;

__attribute__((used)) static btr_user
FUNC_7 (basic_block VAR_3, int VAR_4, rtx VAR_5)
{




  rtx *VAR_6 = FUNC_4 (FUNC_1 (VAR_5));
  rtx VAR_7;
  btr_user VAR_8 = ((void*)0);

  if (VAR_6)
    {
      int VAR_9;




      VAR_9 = !FUNC_3 (FUNC_1 (VAR_5), VAR_6);
      if (!VAR_9)
 VAR_6 = ((void*)0);
    }
  VAR_7 = VAR_6 ? *VAR_6 : VAR_0;
  VAR_8 = FUNC_6 (&VAR_2, sizeof (struct btr_user_s));
  VAR_8->bb = VAR_3;
  VAR_8->luid = VAR_4;
  VAR_8->insn = VAR_5;
  VAR_8->use = VAR_7;
  VAR_8->other_use_this_block = 0;
  VAR_8->next = ((void*)0);
  VAR_8->n_reaching_defs = 0;
  VAR_8->first_reaching_def = -1;

  if (VAR_1)
    {
      FUNC_5 (VAR_1, "Uses target reg: { bb %d, insn %d }",
        VAR_3->index, FUNC_0 (VAR_5));

      if (VAR_8->use)
 FUNC_5 (VAR_1, ": unambiguous use of reg %d\n",
   FUNC_2 (VAR_8->use));
    }

  return VAR_8;
}
