
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef void* uint16_t ;
struct TYPE_29__ {scalar_t__ perf_hint; scalar_t__ sgl_pre_registered; } ;
struct TYPE_33__ {TYPE_5__ config; int os; } ;
typedef TYPE_9__ sli4_t ;
struct TYPE_20__ {int buffer_address_high; int buffer_address_low; scalar_t__ buffer_length; int sge_type; } ;
typedef TYPE_10__ sli4_sge_t ;
struct TYPE_30__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_31__ {TYPE_6__ data; } ;
struct TYPE_32__ {TYPE_7__ u; scalar_t__ buffer_length; void* bde_type; } ;
struct TYPE_26__ {int sgl_segment_address_high; int sgl_segment_address_low; } ;
struct TYPE_25__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_27__ {TYPE_2__ blp; TYPE_1__ data; } ;
struct TYPE_28__ {TYPE_3__ u; scalar_t__ buffer_length; void* bde_type; } ;
struct TYPE_21__ {size_t total_transfer_length; size_t context_tag; int pu; int len_loc; int remote_n_port_id; int iod; TYPE_8__ first_data_bde; void* cq_id; int cmd_type; void* erp; void* hlm; void* request_tag; void* abort_tag; void* bs; void* dif; int ct; int command; int class; void* timer; void* xri_tag; scalar_t__ payload_offset_length; scalar_t__ fcp_cmd_buffer_length; TYPE_4__ bde; void* xbl; void* dbde; } ;
typedef TYPE_11__ sli4_fcp_iread64_wqe_t ;
struct TYPE_22__ {int fc_id; scalar_t__ node; scalar_t__ node_group; } ;
typedef TYPE_12__ ocs_remote_node_t ;
struct TYPE_23__ {scalar_t__ fcp2device; } ;
typedef TYPE_13__ ocs_node_t ;
struct TYPE_24__ {int phys; scalar_t__ size; TYPE_10__* virt; } ;
typedef TYPE_14__ ocs_dma_t ;
typedef int int32_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_14__*,TYPE_10__*) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_9, void *VAR_10, size_t VAR_11, ocs_dma_t *VAR_12, uint32_t VAR_13,
      uint32_t VAR_14, uint16_t VAR_15, uint16_t VAR_16, uint16_t VAR_17,
      uint32_t VAR_18, ocs_remote_node_t *VAR_19,
      uint8_t VAR_20, uint8_t VAR_21, uint8_t VAR_22)
{
 sli4_fcp_iread64_wqe_t *VAR_23 = VAR_10;
 sli4_sge_t *VAR_24 = ((void*)0);

 FUNC_3(VAR_10, 0, VAR_11);

 if (!VAR_12 || !VAR_12->virt) {
  FUNC_2(VAR_9->os, "bad parameter sgl=%p virt=%p\n",
       VAR_12, VAR_12 ? VAR_12->virt : ((void*)0));
  return -1;
 }
 VAR_24 = VAR_12->virt;

 if (VAR_9->config.sgl_pre_registered) {
  VAR_23->xbl = VAR_0;

  VAR_23->dbde = VAR_8;
  VAR_23->bde.bde_type = VAR_1;

  VAR_23->bde.buffer_length = VAR_24[0].buffer_length;
  VAR_23->bde.u.data.buffer_address_low = VAR_24[0].buffer_address_low;
  VAR_23->bde.u.data.buffer_address_high = VAR_24[0].buffer_address_high;
 } else {
  VAR_23->xbl = VAR_8;

  VAR_23->bde.bde_type = VAR_2;

  VAR_23->bde.buffer_length = VAR_12->size;
  VAR_23->bde.u.blp.sgl_segment_address_low = FUNC_1(VAR_12->phys);
  VAR_23->bde.u.blp.sgl_segment_address_high = FUNC_0(VAR_12->phys);



  VAR_23->fcp_cmd_buffer_length = VAR_24[0].buffer_length;
  VAR_24[1].sge_type = VAR_6;
 }

 VAR_23->payload_offset_length = VAR_24[0].buffer_length + VAR_24[1].buffer_length;
 VAR_23->total_transfer_length = VAR_14;

 VAR_23->xri_tag = VAR_15;
 VAR_23->context_tag = VAR_18;

 VAR_23->timer = VAR_22;

 VAR_23->pu = 2;
 VAR_23->class = VAR_4;
 VAR_23->command = VAR_7;
 VAR_23->ct = VAR_5;
 VAR_23->dif = VAR_20;
 VAR_23->bs = VAR_21;

 VAR_23->abort_tag = VAR_15;

 VAR_23->request_tag = VAR_16;
 VAR_23->len_loc = 3;
 if (VAR_19->node_group) {
  VAR_23->hlm = VAR_8;
  VAR_23->remote_n_port_id = VAR_19->fc_id & 0x00ffffff;
 }
 if (((ocs_node_t *)VAR_19->node)->fcp2device) {
  VAR_23->erp = VAR_8;
 }
 VAR_23->iod = 1;
 VAR_23->cmd_type = VAR_3;
 VAR_23->cq_id = VAR_17;

 if (VAR_9->config.perf_hint) {
  VAR_23->first_data_bde.bde_type = VAR_1;
  VAR_23->first_data_bde.buffer_length = VAR_24[VAR_13].buffer_length;
  VAR_23->first_data_bde.u.data.buffer_address_low = VAR_24[VAR_13].buffer_address_low;
  VAR_23->first_data_bde.u.data.buffer_address_high = VAR_24[VAR_13].buffer_address_high;
 }

 return 0;
}
