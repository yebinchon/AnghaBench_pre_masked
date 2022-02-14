
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int lockcreated; int lock; } ;
struct TYPE_17__ {int devlist_lockcreated; int num_op_raid_ibq; int admin_queue_dma_mem; TYPE_3__ admin_ib_queue; int taglist; scalar_t__ max_outstanding_io; int event_q_dma_mem; int op_obq_dma_mem; int op_ibq_dma_mem; TYPE_2__* op_aio_ib_q; TYPE_1__* op_raid_ib_q; int devlist_lock; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
struct TYPE_15__ {int lockcreated; int lock; } ;
struct TYPE_14__ {int lockcreated; int lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,scalar_t__) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;

void FUNC_12(pqisrc_softstate_t *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_1("IN\n");


 FUNC_11(VAR_1);


 VAR_3 = FUNC_10(VAR_1);


 if(VAR_3 != VAR_0) {
  FUNC_6(VAR_1);
  FUNC_3(VAR_1);
 }

    if(VAR_1->devlist_lockcreated==1){
        FUNC_5(&VAR_1->devlist_lock);
        VAR_1->devlist_lockcreated = 0;
    }

 for (VAR_2 = 0; VAR_2 < VAR_1->num_op_raid_ibq; VAR_2++) {

        if(VAR_1->op_raid_ib_q[VAR_2].lockcreated==1){
  FUNC_2(&VAR_1->op_raid_ib_q[VAR_2].lock);
  VAR_1->op_raid_ib_q[VAR_2].lockcreated = 0;
        }


        if(VAR_1->op_aio_ib_q[VAR_2].lockcreated==1){
  FUNC_2(&VAR_1->op_aio_ib_q[VAR_2].lock);
  VAR_1->op_aio_ib_q[VAR_2].lockcreated = 0;
        }
 }


 FUNC_4(VAR_1, &VAR_1->op_ibq_dma_mem);
 FUNC_4(VAR_1, &VAR_1->op_obq_dma_mem);
 FUNC_4(VAR_1, &VAR_1->event_q_dma_mem);


 FUNC_9(VAR_1, VAR_1->max_outstanding_io + 1);


 FUNC_7(VAR_1,&VAR_1->taglist);

 if(VAR_1->admin_ib_queue.lockcreated==1){
  FUNC_2(&VAR_1->admin_ib_queue.lock);
         VAR_1->admin_ib_queue.lockcreated = 0;
 }


 FUNC_4(VAR_1, &VAR_1->admin_queue_dma_mem);


 if (FUNC_8(VAR_1)) {
  FUNC_0("Failed to switch back the adapter to SIS mode!\n");
 }

 FUNC_1("OUT\n");
}
