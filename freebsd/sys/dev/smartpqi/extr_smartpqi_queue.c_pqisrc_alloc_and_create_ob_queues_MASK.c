
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {char* tag; int size; char* virt_addr; int dma_addr; int align; } ;
struct TYPE_10__ {int num_op_obq; int num_elem_per_op_obq; int obq_elem_size; int share_opq_and_eventq; TYPE_2__* op_ob_q; TYPE_8__ op_obq_dma_mem; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
struct TYPE_11__ {int q_id; int intr_msg_num; int num_elem; int elem_size; int pi_dma_addr; int* pi_virt_addr; int created; } ;
typedef TYPE_2__ ob_queue_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(pqisrc_softstate_t *VAR_6)
{
 int VAR_7 = VAR_5;
 uint32_t VAR_8 = 0;
 char *VAR_9 = ((void*)0);
 dma_addr_t VAR_10 = 0;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = 0;
 char *VAR_14 = ((void*)0);
 uint32_t VAR_15 = VAR_2;
 ob_queue_t *VAR_16 = ((void*)0);
  uint32_t VAR_17 = VAR_6->num_op_obq;
 int VAR_18 = 0;

 FUNC_3("IN\n");
 FUNC_0(VAR_6->num_elem_per_op_obq, 4);
 VAR_11 = VAR_6->num_elem_per_op_obq * VAR_6->obq_elem_size;
 VAR_8 += VAR_17 * VAR_11;

 VAR_12 = VAR_8;
 VAR_13 = VAR_8;
 VAR_8 += VAR_17 * sizeof(uint32_t);


 VAR_6->op_obq_dma_mem.tag = "op_ob_queue";
 VAR_6->op_obq_dma_mem.size = VAR_8;
 VAR_6->op_obq_dma_mem.align = VAR_3;
 VAR_7 = FUNC_6(VAR_6, &VAR_6->op_obq_dma_mem);
 if (VAR_7) {
  FUNC_2("Failed to Allocate Operational OBQ memory ret : %d\n",
      VAR_7);
  goto err_out;
 }


 VAR_9 = VAR_6->op_obq_dma_mem.virt_addr;
 VAR_10 = VAR_6->op_obq_dma_mem.dma_addr;
 VAR_12 += VAR_10;
 VAR_14 = VAR_9 + VAR_13;

 FUNC_4("softs->num_op_obq %d\n",VAR_6->num_op_obq);

 for (VAR_18 = 0; VAR_18 < VAR_6->num_op_obq; VAR_18++) {
  VAR_16 = &VAR_6->op_ob_q[VAR_18];
  FUNC_1(!(VAR_10 & VAR_1));
  FUNC_5(VAR_16,VAR_9,VAR_10);
  VAR_16->q_id = VAR_15++;
  if(VAR_6->share_opq_and_eventq == 1)
   VAR_16->intr_msg_num = VAR_18;
  else
   VAR_16->intr_msg_num = VAR_18 + 1;
  VAR_16->num_elem = VAR_6->num_elem_per_op_obq;
  VAR_16->elem_size = VAR_6->obq_elem_size;
  VAR_16->pi_dma_addr = VAR_12 +
     (VAR_18 * sizeof(uint32_t));
  VAR_16->pi_virt_addr = (uint32_t*)(VAR_14 +
     (VAR_18 * sizeof(uint32_t)));
  FUNC_1(!(VAR_16->pi_dma_addr & VAR_0));

  VAR_7 = FUNC_7(VAR_6,VAR_16);
  if (VAR_7) {
   FUNC_2("Failed to Create OP OBQ %d\n",VAR_16->q_id);
   goto err_out_create;
  }
  VAR_16->created = 1;
  VAR_9 += VAR_11;
  VAR_10 += VAR_11;
 }

 FUNC_3("OUT\n");
 return VAR_7;

err_out_create:
 FUNC_8(VAR_6);
err_out:
 FUNC_3("OUT failed %d\n", VAR_7);
 return VAR_4;
}
