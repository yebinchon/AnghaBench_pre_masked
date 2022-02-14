
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int os; TYPE_3__** hw_mq; int sli; TYPE_5__* mq; int mq_count; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_13__ {size_t instance; int entry_count; TYPE_5__* queue; int entry_size; int type; TYPE_4__* cq; } ;
typedef TYPE_3__ hw_mq_t ;
struct TYPE_14__ {int q_list; int queue; TYPE_1__* eq; } ;
typedef TYPE_4__ hw_cq_t ;
struct TYPE_15__ {int id; } ;
struct TYPE_11__ {TYPE_2__* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int ,char*,size_t,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 TYPE_3__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_5__*,int ,int ,int ) ;

hw_mq_t*
FUNC_6(hw_cq_t *VAR_4, uint32_t VAR_5)
{
 ocs_hw_t *VAR_6 = VAR_4->eq->hw;
 hw_mq_t *VAR_7 = FUNC_4(VAR_6->os, sizeof(*VAR_7), VAR_2 | VAR_1);

 if (VAR_7 != ((void*)0)) {
  VAR_7->cq = VAR_4;
  VAR_7->type = VAR_3;
  VAR_7->instance = VAR_4->eq->hw->mq_count++;
  VAR_7->entry_count = VAR_5;
  VAR_7->entry_size = VAR_0;
  VAR_7->queue = &VAR_6->mq[VAR_7->instance];

  if (FUNC_5(&VAR_6->sli, VAR_3,
        VAR_7->queue,
        VAR_7->entry_size,
        VAR_4->queue, 0)) {
   FUNC_3(VAR_6->os, "MQ allocation failure\n");
   FUNC_0(VAR_6->os, VAR_7, sizeof(*VAR_7));
   VAR_7 = ((void*)0);
  } else {
   VAR_6->hw_mq[VAR_7->instance] = VAR_7;
   FUNC_1(&VAR_4->q_list, VAR_7);
   FUNC_2(VAR_6->os, "create mq[%2d] id %3d len %4d\n", VAR_7->instance, VAR_7->queue->id,
    VAR_7->entry_count);
  }
 }
 return VAR_7;
}
