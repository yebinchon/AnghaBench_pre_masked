
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_18__ {int id; } ;
typedef TYPE_5__ sli4_queue_t ;
struct TYPE_19__ {size_t* hw_rq_lookup; int os; int sli; TYPE_8__** hw_rq; TYPE_5__* rq; } ;
typedef TYPE_6__ ocs_hw_t ;
struct TYPE_20__ {TYPE_4__* payload; TYPE_2__* header; } ;
typedef TYPE_7__ ocs_hw_sequence_t ;
typedef scalar_t__ int32_t ;
struct TYPE_21__ {TYPE_7__** rq_tracker; } ;
typedef TYPE_8__ hw_rq_t ;
struct TYPE_16__ {int phys; } ;
struct TYPE_17__ {size_t rqindex; TYPE_3__ dma; } ;
struct TYPE_14__ {int phys; } ;
struct TYPE_15__ {size_t rqindex; TYPE_1__ dma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_5__*,void*) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,size_t,scalar_t__) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static int32_t
FUNC_8(ocs_hw_t *VAR_2, ocs_hw_sequence_t *VAR_3)
{
 sli4_queue_t *VAR_4 = &VAR_2->rq[VAR_3->header->rqindex];
 sli4_queue_t *VAR_5 = &VAR_2->rq[VAR_3->payload->rqindex];
 uint32_t VAR_6 = VAR_2->hw_rq_lookup[VAR_3->header->rqindex];
 hw_rq_t *VAR_7 = VAR_2->hw_rq[VAR_6];
 uint32_t VAR_8[2];
 uint32_t VAR_9[2];
 int32_t VAR_10;
 int32_t VAR_11;


 VAR_8[0] = FUNC_1(VAR_3->header->dma.phys);
 VAR_8[1] = FUNC_2(VAR_3->header->dma.phys);
 VAR_9[0] = FUNC_1(VAR_3->payload->dma.phys);
 VAR_9[1] = FUNC_2(VAR_3->payload->dma.phys);

 FUNC_6(VAR_4);
 FUNC_6(VAR_5);






 VAR_11 = FUNC_0(&VAR_2->sli, VAR_5, (void *)VAR_9);
 VAR_10 = FUNC_0(&VAR_2->sli, VAR_4, (void *)VAR_8);
 if (VAR_10 < 0 ||
     VAR_11 < 0) {
  FUNC_4(VAR_2->os, "RQ_ID=%#x write failed\n", VAR_4->id);
  FUNC_7(VAR_5);
  FUNC_7(VAR_4);
  return VAR_0;
 }


 FUNC_3(VAR_10 == VAR_11);


 if (VAR_7->rq_tracker[VAR_10] == ((void*)0)) {
  VAR_7->rq_tracker[VAR_10] = VAR_3;
 } else {
  FUNC_5(VAR_2->os, "expected rq_tracker[%d][%d] buffer to be NULL\n",
        VAR_6, VAR_10);
 }

 FUNC_7(VAR_5);
 FUNC_7(VAR_4);
 return VAR_1;
}
