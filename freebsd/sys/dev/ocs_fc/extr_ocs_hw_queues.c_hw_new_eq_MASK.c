
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int os; int eq_list; TYPE_2__** hw_eq; int sli; TYPE_3__* eq; int eq_count; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_11__ {size_t instance; int entry_count; TYPE_3__* queue; int * wq_array; int cq_list; TYPE_1__* hw; int type; } ;
typedef TYPE_2__ hw_eq_t ;
struct TYPE_12__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,char*,size_t,int ,int ) ;
 int FUNC_4 (int ,char*,size_t) ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,TYPE_3__*,int,int ,int) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_3__*,int ,int *,int ) ;

hw_eq_t*
FUNC_9(ocs_hw_t *VAR_6, uint32_t VAR_7)
{
 hw_eq_t *VAR_8 = FUNC_5(VAR_6->os, sizeof(*VAR_8), VAR_2 | VAR_1);

 if (VAR_8 != ((void*)0)) {
  VAR_8->type = VAR_3;
  VAR_8->hw = VAR_6;
  VAR_8->entry_count = VAR_7;
  VAR_8->instance = VAR_6->eq_count++;
  VAR_8->queue = &VAR_6->eq[VAR_8->instance];
  FUNC_2(&VAR_8->cq_list, VAR_4, VAR_5);

  VAR_8->wq_array = FUNC_6(VAR_6->os, VAR_0);
  if (VAR_8->wq_array == ((void*)0)) {
   FUNC_0(VAR_6->os, VAR_8, sizeof(*VAR_8));
   VAR_8 = ((void*)0);
  } else {
   if (FUNC_8(&VAR_6->sli, VAR_3, VAR_8->queue, VAR_7, ((void*)0), 0)) {
    FUNC_4(VAR_6->os, "EQ[%d] allocation failure\n", VAR_8->instance);
    FUNC_0(VAR_6->os, VAR_8, sizeof(*VAR_8));
    VAR_8 = ((void*)0);
   } else {
    FUNC_7(&VAR_6->sli, VAR_8->queue, 1, 0, 8);
    VAR_6->hw_eq[VAR_8->instance] = VAR_8;
    FUNC_1(&VAR_6->eq_list, VAR_8);
    FUNC_3(VAR_6->os, "create eq[%2d] id %3d len %4d\n", VAR_8->instance, VAR_8->queue->id,
     VAR_8->entry_count);
   }
  }
 }
 return VAR_8;
}
