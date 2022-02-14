
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint16_t ;
struct TYPE_8__ {size_t length; int index; int id; } ;
typedef TYPE_1__ sli4_queue_t ;
struct TYPE_9__ {size_t* hw_rq_lookup; int os; int sli; TYPE_3__** hw_rq; TYPE_1__* rq; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_sequence_t ;
struct TYPE_10__ {int id; int ** rq_tracker; } ;
typedef TYPE_3__ hw_rq_t ;


 int FUNC_0 (int *,TYPE_1__*,size_t,int *) ;
 int FUNC_1 (int ,char*,size_t,size_t,size_t,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static ocs_hw_sequence_t *
FUNC_4(ocs_hw_t *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 sli4_queue_t *VAR_3 = &VAR_0->rq[VAR_1];
 sli4_queue_t *VAR_4 = &VAR_0->rq[VAR_1+1];
 ocs_hw_sequence_t *VAR_5 = ((void*)0);
 hw_rq_t *VAR_6 = VAR_0->hw_rq[VAR_0->hw_rq_lookup[VAR_1]];





 if (VAR_2 >= VAR_3->length) {
  FUNC_1(VAR_0->os, "RQ index %d bufindex %d exceed ring length %d for id %d\n",
       VAR_1, VAR_2, VAR_3->length, VAR_3->id);
  return ((void*)0);
 }

 FUNC_2(VAR_3);
 FUNC_2(VAR_4);







 VAR_5 = VAR_6->rq_tracker[VAR_2];
 VAR_6->rq_tracker[VAR_2] = ((void*)0);

 if (VAR_5 == ((void*)0) ) {
  FUNC_1(VAR_0->os, "RQ buffer NULL, rqindex %d, bufindex %d, current q index = %d\n",
       VAR_1, VAR_2, VAR_3->index);
 }

 FUNC_3(VAR_4);
 FUNC_3(VAR_3);
 return VAR_5;
}
