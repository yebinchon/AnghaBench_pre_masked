
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ time_t ;
typedef int sli4_qentry_e ;
typedef int sli4_mcqe_t ;
struct TYPE_21__ {int sli; int os; TYPE_2__** hw_wq; int wq_hash; int mq; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int int32_t ;
struct TYPE_22__ {int wqec_set_count; } ;
typedef TYPE_2__ hw_wq_t ;
struct TYPE_23__ {TYPE_4__* queue; } ;
typedef TYPE_3__ hw_cq_t ;
struct TYPE_24__ {scalar_t__ proc_limit; scalar_t__ n_posted; scalar_t__ posted_limit; scalar_t__ max_num_processed; scalar_t__ max_process_time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,int *,int,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,int *,scalar_t__) ;
 int FUNC_9 (int ,char*,int,scalar_t__) ;
 int FUNC_10 (int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *,TYPE_4__*,int *,int*,scalar_t__*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,TYPE_4__*,int ) ;
 int FUNC_15 (int *,TYPE_4__*,int *) ;
 int FUNC_16 (int) ;

void
FUNC_17(ocs_hw_t *VAR_3, hw_cq_t *VAR_4)
{
 uint8_t VAR_5[sizeof(sli4_mcqe_t)];
 uint16_t VAR_6 = VAR_2;
 sli4_qentry_e VAR_7;
 int32_t VAR_8;
 uint32_t VAR_9 = 0;
 time_t VAR_10;
 time_t VAR_11;

 VAR_10 = FUNC_11();

 while (!FUNC_15(&VAR_3->sli, VAR_4->queue, VAR_5)) {
  VAR_8 = FUNC_12(&VAR_3->sli, VAR_4->queue, VAR_5, &VAR_7, &VAR_6);






  if (VAR_8 < 0) {
   if (VAR_8 == -2) {

    continue;
   }

   break;
  }

  switch (VAR_7) {
  case 135:
   FUNC_0("async");
   FUNC_13(&VAR_3->sli, VAR_5);
   break;
  case 134:




   FUNC_0("mq");
   FUNC_2(VAR_3, VAR_8, VAR_3->mq);
   break;
  case 133:
   FUNC_4(VAR_3, VAR_4, VAR_5);
   break;
  case 132:
   FUNC_5(VAR_3, VAR_4, VAR_5);
   break;
  case 130:
   FUNC_0("wq");
   FUNC_7(VAR_3, VAR_4, VAR_5, VAR_8, VAR_6);
   break;
  case 129: {
   uint32_t VAR_12 = VAR_6;
   int32_t VAR_13 = FUNC_3(VAR_3->wq_hash, VAR_12);

   if (FUNC_16(VAR_13 < 0)) {
    FUNC_9(VAR_3->os, "unknown idx=%#x rid=%#x\n",
         VAR_13, VAR_6);
    break;
   }

   hw_wq_t *VAR_14 = VAR_3->hw_wq[VAR_13];


   FUNC_1(VAR_14, VAR_14->wqec_set_count);

   break;
  }

  case 131:
   FUNC_0("rq");
   FUNC_6(VAR_3, VAR_4, VAR_5);
   break;
  case 128: {
   FUNC_0("xabt");
   FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6);
   break;

  }
  default:
   FUNC_10(VAR_3->os, "unhandled ctype=%#x rid=%#x\n", VAR_7, VAR_6);
   break;
  }

  VAR_9++;
  if (VAR_9 == VAR_4->queue->proc_limit) {
   break;
  }

  if (VAR_4->queue->n_posted >= (VAR_4->queue->posted_limit)) {
   FUNC_14(&VAR_3->sli, VAR_4->queue, VAR_0);
  }
 }

 FUNC_14(&VAR_3->sli, VAR_4->queue, VAR_1);

 if (VAR_9 > VAR_4->queue->max_num_processed) {
  VAR_4->queue->max_num_processed = VAR_9;
 }
 VAR_11 = FUNC_11() - VAR_10;
 if (VAR_11 > VAR_4->queue->max_process_time) {
  VAR_4->queue->max_process_time = VAR_11;
 }
}
