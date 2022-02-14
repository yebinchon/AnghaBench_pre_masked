
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef TYPE_1__* btr_user ;
typedef TYPE_2__* btr_def ;
typedef int bitmap ;
typedef TYPE_3__* basic_block ;
struct TYPE_14__ {int index; } ;
struct TYPE_13__ {scalar_t__ insn; int btr; int other_btr_uses_before_def; TYPE_1__* uses; int live_range; int cost; scalar_t__ luid; TYPE_3__* bb; } ;
struct TYPE_12__ {scalar_t__ use; int insn; struct TYPE_12__* next; } ;
typedef int HARD_REG_SET ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ,int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,char*,int,int) ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__,int) ;
 int* VAR_3 ;
 int FUNC_24 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__) ;

__attribute__((used)) static void
FUNC_26 (basic_block VAR_4, int VAR_5, btr_def VAR_6, bitmap VAR_7,
      HARD_REG_SET *VAR_8)
{





  basic_block VAR_9 = VAR_4;
  rtx VAR_10 = FUNC_1 (VAR_9);
  rtx VAR_11 = VAR_6->insn;
  rtx VAR_12;
  rtx VAR_13;
  rtx VAR_14;
  enum machine_mode VAR_15;
  btr_user VAR_16;
  rtx VAR_17;

  if (VAR_2)
    FUNC_20(VAR_2, "migrating to basic block %d, using reg %d\n",
     VAR_4->index, VAR_5);

  FUNC_16 (VAR_6);
  VAR_6->btr = VAR_5;
  VAR_6->bb = VAR_4;
  VAR_6->luid = 0;
  VAR_6->cost = FUNC_13 (VAR_4);
  FUNC_14 (VAR_6->live_range, VAR_7);
  FUNC_17 (VAR_6, VAR_8);
  VAR_5 = VAR_6->btr;
  VAR_6->other_btr_uses_before_def
    = FUNC_11 (VAR_1[VAR_9->index], VAR_5) ? 1 : 0;
  FUNC_12 (VAR_6, 1);
  if (FUNC_6 (VAR_10))
    VAR_10 = FUNC_7 (VAR_10);





  if (VAR_6->other_btr_uses_before_def)
    {
      VAR_10 = FUNC_0 (VAR_9);
      for (VAR_10 = FUNC_0 (VAR_9); ! FUNC_3 (VAR_10); VAR_10 = FUNC_8 (VAR_10))
 FUNC_21 (VAR_10 != FUNC_1 (VAR_9));

      if (FUNC_5 (VAR_10) || FUNC_15 (VAR_10))
 VAR_10 = FUNC_8 (VAR_10);
    }

  VAR_17 = FUNC_25 (VAR_11);
  VAR_12 = FUNC_10 (VAR_17);
  VAR_15 = FUNC_2 (FUNC_9 (VAR_17));
  VAR_13 = FUNC_23 (VAR_15, VAR_5);

  VAR_14 = FUNC_22 (VAR_13, VAR_12);


  VAR_6->insn = FUNC_19 (VAR_14, VAR_10);

  VAR_3[VAR_5] = 1;

  if (VAR_2)
    FUNC_20 (VAR_2, "New pt is insn %d, inserted after insn %d\n",
      FUNC_4 (VAR_6->insn), FUNC_4 (VAR_10));


  FUNC_18 (VAR_11);



  for (VAR_16 = VAR_6->uses; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
    {




      rtx VAR_18;
      if (FUNC_2 (VAR_16->use) == FUNC_2 (VAR_13)
   || FUNC_2 (VAR_16->use) == VAR_0)
 VAR_18 = VAR_13;
      else
 VAR_18 = FUNC_23 (FUNC_2 (VAR_16->use), VAR_5);
      FUNC_24 (VAR_16->insn, VAR_16->use, VAR_18);
      VAR_16->use = VAR_18;
    }
}
