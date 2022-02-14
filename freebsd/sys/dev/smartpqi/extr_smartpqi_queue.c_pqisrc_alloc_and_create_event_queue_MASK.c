
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int q_id; int num_elem; int elem_size; int pi_dma_addr; int* pi_virt_addr; int created; scalar_t__ intr_msg_num; } ;
struct TYPE_12__ {char* tag; int size; char* virt_addr; int dma_addr; int align; } ;
struct TYPE_10__ {TYPE_2__ event_q; TYPE_8__ event_q_dma_mem; int num_elem_per_op_obq; } ;
typedef TYPE_1__ pqisrc_softstate_t ;
typedef TYPE_2__ ob_queue_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(pqisrc_softstate_t *VAR_8)
{
 int VAR_9 = VAR_7;
 uint32_t VAR_10 = 0;
 uint32_t VAR_11;
 char *VAR_12 = ((void*)0);
 dma_addr_t VAR_13 = 0;
 uint32_t VAR_14 = 0;
 uint32_t VAR_15 = 0;
 char *VAR_16 = ((void*)0);
 ob_queue_t *VAR_17 = ((void*)0);


 FUNC_2("IN\n");
 VAR_11 = VAR_1;


 VAR_10 = VAR_11 * VAR_0;
 VAR_14 = VAR_10;
 VAR_15 = VAR_10;
 VAR_10 += sizeof(uint32_t);


 VAR_8->event_q_dma_mem.tag = "event_queue";
 VAR_8->event_q_dma_mem.size = VAR_10;
 VAR_8->event_q_dma_mem.align = VAR_4;
 VAR_9 = FUNC_5(VAR_8, &VAR_8->event_q_dma_mem);
 if (VAR_9) {
  FUNC_1("Failed to Allocate Event Q ret : %d\n"
    , VAR_9);
  goto err_out;
 }


 VAR_12 = VAR_8->event_q_dma_mem.virt_addr;
 VAR_13 = VAR_8->event_q_dma_mem.dma_addr;
 VAR_14 += VAR_13;
 VAR_16 = VAR_12 + VAR_15;

 VAR_17 = &VAR_8->event_q;
 FUNC_0(!(VAR_13 & VAR_3));
 FUNC_3(VAR_17,VAR_12,VAR_13);
 VAR_17->q_id = VAR_5;
 VAR_17->num_elem = VAR_11;
 VAR_17->elem_size = VAR_0;
 VAR_17->pi_dma_addr = VAR_14;
 VAR_17->pi_virt_addr = (uint32_t *)VAR_16;
 VAR_17->intr_msg_num = 0;
 FUNC_0(!(VAR_17->pi_dma_addr & VAR_2));

 VAR_9 = FUNC_6(VAR_8,VAR_17);
 if (VAR_9) {
  FUNC_1("Failed to Create EventQ %d\n",VAR_17->q_id);
  goto err_out_create;
 }
 VAR_17->created = 1;

 FUNC_2("OUT\n");
 return VAR_9;

err_out_create:
 FUNC_7(VAR_8);
err_out:
 FUNC_2("OUT failed %d\n", VAR_9);
 return VAR_6;
}
