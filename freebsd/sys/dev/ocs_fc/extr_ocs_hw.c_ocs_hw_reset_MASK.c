
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_13__ {scalar_t__ state; size_t wq_count; size_t rq_count; size_t hw_rq_count; size_t mq_count; size_t cq_count; size_t eq_count; int * eq; int sli; int * cq; int * mq; TYPE_2__** hw_rq; int * rq; int * wq; int io_lock; int io_wait_free; int io_free; int io_timed_wqe; int fcf_index_fcfi; int domains; int os; int cmd_head; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_state_e ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_reset_e ;
struct TYPE_14__ {size_t entry_count; int ** rq_tracker; } ;
typedef TYPE_2__ hw_rq_t ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;

ocs_hw_rtn_e
FUNC_21(ocs_hw_t *VAR_6, ocs_hw_reset_e VAR_7)
{
 uint32_t VAR_8;
 ocs_hw_rtn_e VAR_9 = VAR_1;
 uint32_t VAR_10;
 ocs_hw_state_e VAR_11 = VAR_6->state;

 if (VAR_6->state != VAR_2) {
  FUNC_13(VAR_6->os, "HW state %d is not active\n", VAR_6->state);
 }

 VAR_6->state = VAR_4;


 FUNC_17(VAR_6);

 FUNC_2(VAR_6);






 VAR_10 = 10;
 while (!FUNC_8(&VAR_6->cmd_head) && VAR_10) {
  FUNC_15(10000);
  FUNC_2(VAR_6);
  VAR_10--;
 }

 if (FUNC_8(&VAR_6->cmd_head)) {
  FUNC_11(VAR_6->os, "All commands completed on MQ queue\n");
 } else {
  FUNC_11(VAR_6->os, "Some commands still pending on MQ queue\n");
 }


 switch(VAR_7) {
 case 128:
  FUNC_11(VAR_6->os, "issuing function level reset\n");
  if (FUNC_20(&VAR_6->sli)) {
   FUNC_12(VAR_6->os, "sli_reset failed\n");
   VAR_9 = VAR_0;
  }
  break;
 case 129:
  FUNC_11(VAR_6->os, "issuing firmware reset\n");
  if (FUNC_18(&VAR_6->sli)) {
   FUNC_12(VAR_6->os, "sli_soft_reset failed\n");
   VAR_9 = VAR_0;
  }




  FUNC_11(VAR_6->os, "issuing function level reset\n");
  if (FUNC_20(&VAR_6->sli)) {
   FUNC_12(VAR_6->os, "sli_reset failed\n");
   VAR_9 = VAR_0;
  }
  break;
 default:
  FUNC_13(VAR_6->os, "unknown reset type - no reset performed\n");
  VAR_6->state = VAR_11;
  return VAR_0;
 }


 if (VAR_11 != VAR_5) {
  FUNC_1(VAR_6);


  FUNC_3(VAR_6);

  FUNC_14(VAR_6->domains, 0, sizeof(VAR_6->domains));
  FUNC_14(VAR_6->fcf_index_fcfi, 0, sizeof(VAR_6->fcf_index_fcfi));

  FUNC_4(VAR_6);

  FUNC_10(&VAR_6->io_lock);

   while (!FUNC_8(&VAR_6->io_timed_wqe)) {
    FUNC_9(&VAR_6->io_timed_wqe);
   }


   while (!FUNC_8(&VAR_6->io_free)) {
    FUNC_9(&VAR_6->io_free);
   }
   while (!FUNC_8(&VAR_6->io_wait_free)) {
    FUNC_9(&VAR_6->io_wait_free);
   }


   FUNC_5(VAR_6);

  FUNC_16(&VAR_6->io_lock);
 }

 if (VAR_11 != VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_6->wq_count; VAR_8++) {
   FUNC_19(&VAR_6->sli, &VAR_6->wq[VAR_8]);
  }

  for (VAR_8 = 0; VAR_8 < VAR_6->rq_count; VAR_8++) {
   FUNC_19(&VAR_6->sli, &VAR_6->rq[VAR_8]);
  }

  for (VAR_8 = 0; VAR_8 < VAR_6->hw_rq_count; VAR_8++) {
   hw_rq_t *VAR_12 = VAR_6->hw_rq[VAR_8];
   if (VAR_12->rq_tracker != ((void*)0)) {
    uint32_t VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_12->entry_count; VAR_13++) {
     VAR_12->rq_tracker[VAR_13] = ((void*)0);
    }
   }
  }

  for (VAR_8 = 0; VAR_8 < VAR_6->mq_count; VAR_8++) {
   FUNC_19(&VAR_6->sli, &VAR_6->mq[VAR_8]);
  }

  for (VAR_8 = 0; VAR_8 < VAR_6->cq_count; VAR_8++) {
   FUNC_19(&VAR_6->sli, &VAR_6->cq[VAR_8]);
  }

  for (VAR_8 = 0; VAR_8 < VAR_6->eq_count; VAR_8++) {
   FUNC_19(&VAR_6->sli, &VAR_6->eq[VAR_8]);
  }


  FUNC_6(VAR_6);


  FUNC_0(VAR_6);
 } else {


  FUNC_6(VAR_6);
 }





 FUNC_7(VAR_6);
 VAR_6->state = VAR_3;

 return VAR_9;
}
