
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int rq_default_buffer_size; } ;
struct TYPE_15__ {size_t rq_count; size_t* hw_rq_lookup; int os; TYPE_4__** hw_rq; int sli; TYPE_2__ config; TYPE_6__* rq; int hw_rq_count; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_sequence_t ;
struct TYPE_16__ {size_t instance; int entry_count; int * rq_tracker; int ulp; int data_entry_size; TYPE_6__* data; int hdr_entry_size; TYPE_6__* hdr; int type; TYPE_5__* cq; } ;
typedef TYPE_4__ hw_rq_t ;
struct TYPE_17__ {int q_list; int queue; TYPE_1__* eq; } ;
typedef TYPE_5__ hw_cq_t ;
struct TYPE_18__ {int id; } ;
struct TYPE_13__ {TYPE_3__* hw; } ;


 size_t FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,TYPE_4__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int ,char*,size_t,int ,int,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (int ,int,int) ;
 scalar_t__ FUNC_9 (int *,TYPE_6__*,int,int ,int ,int ,int ) ;

hw_rq_t*
FUNC_10(hw_cq_t *VAR_8, uint32_t VAR_9, uint32_t VAR_10)
{
 ocs_hw_t *VAR_11 = VAR_8->eq->hw;
 hw_rq_t *VAR_12 = FUNC_8(VAR_11->os, sizeof(*VAR_12), VAR_5 | VAR_4);
 uint32_t VAR_13;

 FUNC_4(VAR_11, VAR_1, &VAR_13);


 if (VAR_12 != ((void*)0)) {
  VAR_12->instance = VAR_11->hw_rq_count++;
  VAR_12->cq = VAR_8;
  VAR_12->type = VAR_6;
  VAR_12->ulp = VAR_10;

  VAR_12->entry_count = FUNC_1(VAR_9, FUNC_1(VAR_13, VAR_3));


  FUNC_3(VAR_11->rq_count < FUNC_0(VAR_11->rq));
  VAR_12->hdr = &VAR_11->rq[VAR_11->rq_count];
  VAR_12->hdr_entry_size = VAR_2;

  if (FUNC_9(&VAR_11->sli, VAR_12->hdr,
        VAR_12->entry_count,
        VAR_12->hdr_entry_size,
        VAR_8->queue,
        VAR_10, VAR_7)) {
   FUNC_7(VAR_11->os, "RQ allocation failure - header\n");
   FUNC_2(VAR_11->os, VAR_12, sizeof(*VAR_12));
   return ((void*)0);
  }
  VAR_11->hw_rq_lookup[VAR_11->rq_count] = VAR_12->instance;
  VAR_11->rq_count++;
  FUNC_6(VAR_11->os, "create rq[%2d] id %3d len %4d hdr  size %4d ulp %d\n",
   VAR_12->instance, VAR_12->hdr->id, VAR_12->entry_count, VAR_12->hdr_entry_size, VAR_12->ulp);


  FUNC_3(VAR_11->rq_count < FUNC_0(VAR_11->rq));
  VAR_12->data = &VAR_11->rq[VAR_11->rq_count];
  VAR_12->data_entry_size = VAR_11->config.rq_default_buffer_size;

  if (FUNC_9(&VAR_11->sli, VAR_12->data,
        VAR_12->entry_count,
        VAR_12->data_entry_size,
        VAR_8->queue,
        VAR_10, VAR_0)) {
   FUNC_7(VAR_11->os, "RQ allocation failure - first burst\n");
   FUNC_2(VAR_11->os, VAR_12, sizeof(*VAR_12));
   return ((void*)0);
  }
  VAR_11->hw_rq_lookup[VAR_11->rq_count] = VAR_12->instance;
  VAR_11->rq_count++;
  FUNC_6(VAR_11->os, "create rq[%2d] id %3d len %4d data size %4d ulp %d\n", VAR_12->instance,
   VAR_12->data->id, VAR_12->entry_count, VAR_12->data_entry_size, VAR_12->ulp);

  VAR_11->hw_rq[VAR_12->instance] = VAR_12;
  FUNC_5(&VAR_8->q_list, VAR_12);

  VAR_12->rq_tracker = FUNC_8(VAR_11->os, sizeof(ocs_hw_sequence_t*) *
         VAR_12->entry_count, VAR_5 | VAR_4);
  if (VAR_12->rq_tracker == ((void*)0)) {
   FUNC_7(VAR_11->os, "RQ tracker buf allocation failure\n");
   return ((void*)0);
  }
 }
 return VAR_12;
}
