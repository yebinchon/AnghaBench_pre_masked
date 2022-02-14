
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_12__ {int os; TYPE_3__** hw_wq; int sli; TYPE_5__* wq; int wq_count; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_13__ {size_t instance; void* ulp; void* class; void* entry_count; TYPE_5__* queue; int pending_list; void* free_count; int wqec_set_count; int wqec_count; int type; TYPE_4__* cq; TYPE_2__* hw; } ;
typedef TYPE_3__ hw_wq_t ;
struct TYPE_14__ {int q_list; int queue; TYPE_1__* eq; } ;
typedef TYPE_4__ hw_cq_t ;
struct TYPE_15__ {int id; } ;
struct TYPE_11__ {TYPE_2__* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,char*,size_t,int ,void*,void*,void*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_3__* FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_5__*,void*,int ,void*) ;

hw_wq_t*
FUNC_7(hw_cq_t *VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 ocs_hw_t *VAR_10 = VAR_6->eq->hw;
 hw_wq_t *VAR_11 = FUNC_5(VAR_10->os, sizeof(*VAR_11), VAR_2 | VAR_1);

 if (VAR_11 != ((void*)0)) {
  VAR_11->hw = VAR_6->eq->hw;
  VAR_11->cq = VAR_6;
  VAR_11->type = VAR_3;
  VAR_11->instance = VAR_6->eq->hw->wq_count++;
  VAR_11->entry_count = VAR_7;
  VAR_11->queue = &VAR_10->wq[VAR_11->instance];
  VAR_11->ulp = VAR_9;
  VAR_11->wqec_set_count = VAR_0;
  VAR_11->wqec_count = VAR_11->wqec_set_count;
  VAR_11->free_count = VAR_11->entry_count - 1;
  VAR_11->class = VAR_8;
  FUNC_2(&VAR_11->pending_list, VAR_5, VAR_4);

  if (FUNC_6(&VAR_10->sli, VAR_3, VAR_11->queue, VAR_11->entry_count, VAR_6->queue, VAR_9)) {
   FUNC_4(VAR_10->os, "WQ allocation failure\n");
   FUNC_0(VAR_10->os, VAR_11, sizeof(*VAR_11));
   VAR_11 = ((void*)0);
  } else {
   VAR_10->hw_wq[VAR_11->instance] = VAR_11;
   FUNC_1(&VAR_6->q_list, VAR_11);
   FUNC_3(VAR_10->os, "create wq[%2d] id %3d len %4d cls %d ulp %d\n", VAR_11->instance, VAR_11->queue->id,
    VAR_11->entry_count, VAR_11->class, VAR_11->ulp);
  }
 }
 return VAR_11;
}
