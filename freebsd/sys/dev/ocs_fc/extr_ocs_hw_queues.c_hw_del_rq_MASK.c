
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int os; int ** hw_rq; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_sequence_t ;
struct TYPE_11__ {int entry_count; size_t instance; TYPE_2__* cq; struct TYPE_11__* rq_tracker; } ;
typedef TYPE_4__ hw_rq_t ;
struct TYPE_9__ {int q_list; TYPE_1__* eq; } ;
struct TYPE_8__ {TYPE_3__* hw; } ;


 int FUNC_0 (int ,TYPE_4__*,int) ;
 int FUNC_1 (int *,TYPE_4__*) ;

void
FUNC_2(hw_rq_t *VAR_0)
{

 if (VAR_0 != ((void*)0)) {
  ocs_hw_t *VAR_1 = VAR_0->cq->eq->hw;

  if (VAR_0->rq_tracker != ((void*)0)) {
   FUNC_0(VAR_1->os, VAR_0->rq_tracker, sizeof(ocs_hw_sequence_t*) * VAR_0->entry_count);
   VAR_0->rq_tracker = ((void*)0);
  }
  FUNC_1(&VAR_0->cq->q_list, VAR_0);
  VAR_1->hw_rq[VAR_0->instance] = ((void*)0);
  FUNC_0(VAR_1->os, VAR_0, sizeof(*VAR_0));
 }
}
