
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct btr_def_s {int dummy; } ;
typedef int rtx ;
typedef int fibheap_t ;
typedef int btr_def_group ;
typedef TYPE_1__* btr_def ;
typedef TYPE_2__* basic_block ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int luid; unsigned int btr; int cost; int other_btr_uses_before_def; scalar_t__ group; int * live_range; int * uses; int * next_this_group; int * next_this_bb; scalar_t__ other_btr_uses_after_use; scalar_t__ has_ambiguous_use; int insn; TYPE_2__* bb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,char*,unsigned int,int,int,char*,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int *,int) ;

__attribute__((used)) static btr_def
FUNC_6 (fibheap_t VAR_2, basic_block VAR_3, int VAR_4, rtx VAR_5,
      unsigned int VAR_6, int VAR_7,
      btr_def_group *VAR_8)
{
  btr_def VAR_9
    = FUNC_5 (&VAR_1, sizeof (struct btr_def_s));
  VAR_9->bb = VAR_3;
  VAR_9->luid = VAR_4;
  VAR_9->insn = VAR_5;
  VAR_9->btr = VAR_6;
  VAR_9->cost = FUNC_1 (VAR_3);
  VAR_9->has_ambiguous_use = 0;
  VAR_9->other_btr_uses_before_def = VAR_7;
  VAR_9->other_btr_uses_after_use = 0;
  VAR_9->next_this_bb = ((void*)0);
  VAR_9->next_this_group = ((void*)0);
  VAR_9->uses = ((void*)0);
  VAR_9->live_range = ((void*)0);
  FUNC_3 (VAR_8, VAR_9);

  FUNC_2 (VAR_2, -VAR_9->cost, VAR_9);

  if (VAR_0)
    FUNC_4 (VAR_0,
      "Found target reg definition: sets %u { bb %d, insn %d }%s priority %d\n",
      VAR_6, VAR_3->index, FUNC_0 (VAR_5), (VAR_9->group ? "" : ":not const"),
      VAR_9->cost);

  return VAR_9;
}
