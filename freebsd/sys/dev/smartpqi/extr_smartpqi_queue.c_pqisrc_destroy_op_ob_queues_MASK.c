
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_op_obq; int op_obq_dma_mem; TYPE_2__* op_ob_q; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_7__ {int created; int q_id; } ;
typedef TYPE_2__ ob_queue_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(pqisrc_softstate_t *VAR_1)
{
 int VAR_2 = VAR_0;
 int VAR_3;

 FUNC_1("IN\n");

 for (VAR_3 = 0; VAR_3 < VAR_1->num_op_obq; VAR_3++) {
  ob_queue_t *VAR_4 = ((void*)0);
  VAR_4 = &VAR_1->op_ob_q[VAR_3];
  if (VAR_4->created == 1) {
   VAR_2 = FUNC_3(VAR_1, VAR_4->q_id, 0);
   if (VAR_2) {
    FUNC_0("Failed to Delete OB Q %d\n",VAR_4->q_id);
   }
   VAR_4->created = 0;
  }
 }


 FUNC_2(VAR_1, &VAR_1->op_obq_dma_mem);
 FUNC_1("OUT\n");
}
