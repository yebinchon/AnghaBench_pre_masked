
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct deps {int dummy; } ;
typedef scalar_t__ rtx ;
typedef TYPE_2__* basic_block ;
struct TYPE_14__ {int queue_must_finish_empty; scalar_t__ tail; scalar_t__ head; int next_tail; int prev_head; scalar_t__ sched_max_insns_priority; } ;
struct TYPE_11__ {int (* dependencies_evaluation_hook ) (scalar_t__,scalar_t__) ;} ;
struct TYPE_13__ {TYPE_1__ sched; } ;
struct TYPE_12__ {int next_bb; struct TYPE_12__* prev_bb; int succs; int preds; int index; } ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 TYPE_9__* VAR_2 ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int FUNC_12 () ;
 int FUNC_13 (struct deps*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct deps*) ;
 int FUNC_16 () ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (scalar_t__,scalar_t__) ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 int FUNC_22 (int ,scalar_t__,scalar_t__) ;
 int FUNC_23 (struct deps*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_24 (TYPE_2__**,scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,scalar_t__) ;
 int FUNC_26 (scalar_t__,scalar_t__) ;
 TYPE_5__ VAR_7 ;
 int FUNC_27 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static basic_block
FUNC_28 (rtx VAR_9, rtx VAR_10)
{
  basic_block VAR_11, VAR_12;
  struct deps VAR_13;

  VAR_11 = FUNC_0 (VAR_9);
  VAR_4 = FUNC_0 (VAR_10);

  if (FUNC_17 (VAR_9, VAR_10))
    return FUNC_0 (VAR_10);

  FUNC_14 (FUNC_2 (VAR_9) && FUNC_2 (VAR_10));

  if (!FUNC_9 (&VAR_3, VAR_11->index))
    {
      FUNC_16 ();


      FUNC_15 (&VAR_13);
      FUNC_23 (&VAR_13, VAR_9, VAR_10);
      FUNC_13 (&VAR_13);


      FUNC_10 (VAR_9, VAR_10);

      FUNC_8 (VAR_9, VAR_10);

      if (VAR_7.sched.dependencies_evaluation_hook)
        VAR_7.sched.dependencies_evaluation_hook (VAR_9, VAR_10);

      FUNC_12 ();
    }
  else


    FUNC_14 (VAR_11 == VAR_4);


  VAR_2->sched_max_insns_priority = 0;
  VAR_5 = FUNC_25 (VAR_9, VAR_10);
  VAR_2->sched_max_insns_priority++;

  VAR_2->prev_head = FUNC_4 (VAR_9);
  VAR_2->next_tail = FUNC_3 (VAR_10);

  if (VAR_8 != VAR_0)
    {
      FUNC_22 (VAR_11->index, VAR_9, VAR_10);
      FUNC_20 (VAR_9, VAR_10);
    }







  if (FUNC_2 (VAR_9))
    {
      rtx VAR_14;

      for (VAR_14 = FUNC_5 (VAR_9); VAR_14; VAR_14 = FUNC_7 (VAR_14, 1))
 if (FUNC_6 (VAR_14) == VAR_1)
   FUNC_18 (VAR_9, VAR_14);
    }




  FUNC_21 (VAR_9, VAR_10);

  FUNC_27 (VAR_11, VAR_4);

  VAR_2->queue_must_finish_empty = 1;

  VAR_12 = VAR_11;
  FUNC_24 (&VAR_12, VAR_5);





  FUNC_14 (VAR_6 == VAR_5);
  VAR_9 = VAR_2->head;
  VAR_10 = VAR_2->tail;

  if (VAR_8 != VAR_0)
    FUNC_19 (VAR_9, VAR_10);

  if (FUNC_1 (VAR_4->preds) == 0)

    {
      FUNC_14 (VAR_11 != VAR_4
    && FUNC_1 (VAR_4->succs) == 0);
      VAR_4 = VAR_4->prev_bb;
      FUNC_11 (VAR_4->next_bb);
    }

  return VAR_4;
}
