
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_op_raid_ibq; int op_ibq_dma_mem; TYPE_2__* op_aio_ib_q; TYPE_2__* op_raid_ib_q; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_7__ {int created; int lockcreated; int lock; int q_id; } ;
typedef TYPE_2__ ib_queue_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(pqisrc_softstate_t *VAR_1)
{
 int VAR_2 = VAR_0;
 ib_queue_t *VAR_3 = ((void*)0);
 int VAR_4;

 FUNC_1("IN\n");

 for (VAR_4 = 0; VAR_4 < VAR_1->num_op_raid_ibq; VAR_4++) {

  VAR_3 = &VAR_1->op_raid_ib_q[VAR_4];
  if (VAR_3->created == 1) {
   VAR_2 = FUNC_4(VAR_1, VAR_3->q_id, 1);
   if (VAR_2) {
    FUNC_0("Failed to Delete Raid IB Q %d\n",VAR_3->q_id);
   }
   VAR_3->created = 0;
  }

        if(VAR_3->lockcreated==1){
  FUNC_2(&VAR_3->lock);
             VAR_3->lockcreated = 0;
        }


  VAR_3 = &VAR_1->op_aio_ib_q[VAR_4];
  if (VAR_3->created == 1) {
   VAR_2 = FUNC_4(VAR_1, VAR_3->q_id, 1);
   if (VAR_2) {
    FUNC_0("Failed to Delete AIO IB Q %d\n",VAR_3->q_id);
   }
   VAR_3->created = 0;
  }

        if(VAR_3->lockcreated==1){
  FUNC_2(&VAR_3->lock);
  VAR_3->lockcreated = 0;
        }
 }


 FUNC_3(VAR_1, &VAR_1->op_ibq_dma_mem);
 FUNC_1("OUT\n");
}
