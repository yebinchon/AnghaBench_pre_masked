
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {size_t instance; TYPE_3__* cq; } ;
typedef TYPE_4__ hw_mq_t ;
struct TYPE_10__ {TYPE_1__* eq; int q_list; } ;
struct TYPE_9__ {int os; int ** hw_mq; } ;
struct TYPE_8__ {TYPE_2__* hw; } ;


 int FUNC_0 (int ,TYPE_4__*,int) ;
 int FUNC_1 (int *,TYPE_4__*) ;

void
FUNC_2(hw_mq_t *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_1(&VAR_0->cq->q_list, VAR_0);
  VAR_0->cq->eq->hw->hw_mq[VAR_0->instance] = ((void*)0);
  FUNC_0(VAR_0->cq->eq->hw->os, VAR_0, sizeof(*VAR_0));
 }
}
