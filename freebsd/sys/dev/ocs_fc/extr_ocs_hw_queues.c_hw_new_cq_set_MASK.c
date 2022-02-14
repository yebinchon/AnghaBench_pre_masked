
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int sli4_t ;
typedef int sli4_queue_t ;
struct TYPE_9__ {int os; TYPE_3__** hw_cq; int * cq; int cq_count; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_10__ {int cq_list; int * queue; TYPE_1__* hw; } ;
typedef TYPE_2__ hw_eq_t ;
struct TYPE_11__ {size_t instance; size_t entry_count; TYPE_2__* eq; int q_list; int * queue; int type; } ;
typedef TYPE_3__ hw_cq_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_3__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,int **,size_t,size_t,int **) ;

uint32_t
FUNC_6(hw_eq_t *VAR_6[], hw_cq_t *VAR_7[], uint32_t VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10;
 ocs_hw_t *VAR_11 = VAR_6[0]->hw;
 sli4_t *VAR_12 = &VAR_11->sli;
 hw_cq_t *VAR_13 = ((void*)0);
 sli4_queue_t *VAR_14[VAR_2], *VAR_15[VAR_2];


 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_7[VAR_10] = ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_13 = FUNC_4(VAR_11->os, sizeof(*VAR_13), VAR_1 | VAR_0);
  if (VAR_13 == ((void*)0))
   goto error;

  VAR_7[VAR_10] = VAR_13;
  VAR_13->eq = VAR_6[VAR_10];
  VAR_13->type = VAR_3;
  VAR_13->instance = VAR_11->cq_count++;
  VAR_13->entry_count = VAR_9;
  VAR_13->queue = &VAR_11->cq[VAR_13->instance];
  VAR_14[VAR_10] = VAR_13->queue;
  VAR_15[VAR_10] = VAR_6[VAR_10]->queue;
  FUNC_2(&VAR_13->q_list, VAR_4, VAR_5);
 }

 if (FUNC_5(VAR_12, VAR_14, VAR_8, VAR_9, VAR_15)) {
  FUNC_3(((void*)0), "Failed to create CQ Set. \n");
  goto error;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_11->hw_cq[VAR_7[VAR_10]->instance] = VAR_7[VAR_10];
  FUNC_1(&VAR_7[VAR_10]->eq->cq_list, VAR_7[VAR_10]);
 }

 return 0;

error:
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  if (VAR_7[VAR_10]) {
   FUNC_0(VAR_11->os, VAR_7[VAR_10], sizeof(*VAR_7[VAR_10]));
   VAR_7[VAR_10] = ((void*)0);
  }
 }
 return -1;
}
