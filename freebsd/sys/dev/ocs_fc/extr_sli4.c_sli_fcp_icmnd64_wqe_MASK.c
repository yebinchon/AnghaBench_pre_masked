
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_19__ {scalar_t__ sgl_pre_registered; } ;
struct TYPE_24__ {TYPE_1__ config; int os; } ;
typedef TYPE_6__ sli4_t ;
struct TYPE_25__ {scalar_t__ buffer_length; int buffer_address_high; int buffer_address_low; } ;
typedef TYPE_7__ sli4_sge_t ;
struct TYPE_21__ {int sgl_segment_address_high; int sgl_segment_address_low; } ;
struct TYPE_20__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_22__ {TYPE_3__ blp; TYPE_2__ data; } ;
struct TYPE_23__ {TYPE_4__ u; scalar_t__ buffer_length; int bde_type; } ;
struct TYPE_26__ {int pu; int len_loc; int remote_n_port_id; void* cq_id; int cmd_type; void* erp; void* hlm; void* request_tag; void* abort_tag; int ct; int command; int class; int timer; int context_tag; void* xri_tag; scalar_t__ payload_offset_length; TYPE_5__ bde; void* xbl; void* dbde; } ;
typedef TYPE_8__ sli4_fcp_icmnd64_wqe_t ;
struct TYPE_27__ {int fc_id; scalar_t__ node; scalar_t__ node_group; } ;
typedef TYPE_9__ ocs_remote_node_t ;
struct TYPE_17__ {scalar_t__ fcp2device; } ;
typedef TYPE_10__ ocs_node_t ;
struct TYPE_18__ {int phys; scalar_t__ size; TYPE_7__* virt; } ;
typedef TYPE_11__ ocs_dma_t ;
typedef int int32_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_11__*,TYPE_7__*) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_8, void *VAR_9, size_t VAR_10, ocs_dma_t *VAR_11,
      uint16_t VAR_12, uint16_t VAR_13, uint16_t VAR_14,
      uint32_t VAR_15, ocs_remote_node_t *VAR_16, uint8_t VAR_17)
{
 sli4_fcp_icmnd64_wqe_t *VAR_18 = VAR_9;
 sli4_sge_t *VAR_19 = ((void*)0);

 FUNC_3(VAR_9, 0, VAR_10);

 if (!VAR_11 || !VAR_11->virt) {
  FUNC_2(VAR_8->os, "bad parameter sgl=%p virt=%p\n",
       VAR_11, VAR_11 ? VAR_11->virt : ((void*)0));
  return -1;
 }
 VAR_19 = VAR_11->virt;

 if (VAR_8->config.sgl_pre_registered) {
  VAR_18->xbl = VAR_0;

  VAR_18->dbde = VAR_7;
  VAR_18->bde.bde_type = VAR_1;

  VAR_18->bde.buffer_length = VAR_19[0].buffer_length;
  VAR_18->bde.u.data.buffer_address_low = VAR_19[0].buffer_address_low;
  VAR_18->bde.u.data.buffer_address_high = VAR_19[0].buffer_address_high;
 } else {
  VAR_18->xbl = VAR_7;

  VAR_18->bde.bde_type = VAR_2;

  VAR_18->bde.buffer_length = VAR_11->size;
  VAR_18->bde.u.blp.sgl_segment_address_low = FUNC_1(VAR_11->phys);
  VAR_18->bde.u.blp.sgl_segment_address_high = FUNC_0(VAR_11->phys);
 }

 VAR_18->payload_offset_length = VAR_19[0].buffer_length + VAR_19[1].buffer_length;
 VAR_18->xri_tag = VAR_12;
 VAR_18->context_tag = VAR_15;
 VAR_18->timer = VAR_17;

 VAR_18->pu = 2;
 VAR_18->class = VAR_4;
 VAR_18->command = VAR_6;
 VAR_18->ct = VAR_5;

 VAR_18->abort_tag = VAR_12;

 VAR_18->request_tag = VAR_13;
 VAR_18->len_loc = 3;
 if (VAR_16->node_group) {
  VAR_18->hlm = VAR_7;
  VAR_18->remote_n_port_id = VAR_16->fc_id & 0x00ffffff;
 }
 if (((ocs_node_t *)VAR_16->node)->fcp2device) {
  VAR_18->erp = VAR_7;
 }
 VAR_18->cmd_type = VAR_3;
 VAR_18->cq_id = VAR_14;

 return 0;
}
