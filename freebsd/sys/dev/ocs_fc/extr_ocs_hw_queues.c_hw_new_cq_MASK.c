
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int os; TYPE_3__** hw_cq; int sli; TYPE_4__* cq; int cq_count; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_11__ {int cq_list; int entry_count; int instance; int queue; TYPE_1__* hw; } ;
typedef TYPE_2__ hw_eq_t ;
struct TYPE_12__ {size_t instance; int entry_count; TYPE_4__* queue; int q_list; int type; TYPE_2__* eq; } ;
typedef TYPE_3__ hw_cq_t ;
struct TYPE_13__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,char*,size_t,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 TYPE_3__* FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_4__*,int ,int ,int ) ;

hw_cq_t*
FUNC_7(hw_eq_t *VAR_5, uint32_t VAR_6)
{
 ocs_hw_t *VAR_7 = VAR_5->hw;
 hw_cq_t *VAR_8 = FUNC_5(VAR_7->os, sizeof(*VAR_8), VAR_1 | VAR_0);

 if (VAR_8 != ((void*)0)) {
  VAR_8->eq = VAR_5;
  VAR_8->type = VAR_2;
  VAR_8->instance = VAR_5->hw->cq_count++;
  VAR_8->entry_count = VAR_6;
  VAR_8->queue = &VAR_7->cq[VAR_8->instance];

  FUNC_2(&VAR_8->q_list, VAR_3, VAR_4);

  if (FUNC_6(&VAR_7->sli, VAR_2, VAR_8->queue, VAR_8->entry_count, VAR_5->queue, 0)) {
   FUNC_4(VAR_7->os, "CQ[%d] allocation failure len=%d\n",
    VAR_5->instance,
    VAR_5->entry_count);
   FUNC_0(VAR_7->os, VAR_8, sizeof(*VAR_8));
   VAR_8 = ((void*)0);
  } else {
   VAR_7->hw_cq[VAR_8->instance] = VAR_8;
   FUNC_1(&VAR_5->cq_list, VAR_8);
   FUNC_3(VAR_7->os, "create cq[%2d] id %3d len %4d\n", VAR_8->instance, VAR_8->queue->id,
    VAR_8->entry_count);
  }
 }
 return VAR_8;
}
