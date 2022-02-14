
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_17__ {scalar_t__ sgl_pre_registered; } ;
struct TYPE_22__ {TYPE_1__ config; int os; } ;
typedef TYPE_6__ sli4_t ;
struct TYPE_23__ {int buffer_address_high; int buffer_address_low; } ;
typedef TYPE_7__ sli4_sge_t ;
struct TYPE_19__ {int sgl_segment_address_high; int sgl_segment_address_low; } ;
struct TYPE_18__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_20__ {TYPE_3__ blp; TYPE_2__ data; } ;
struct TYPE_21__ {int buffer_length; TYPE_4__ u; int bde_type; } ;
struct TYPE_24__ {int remote_n_port_id; void* cq_id; int cmd_type; void* hlm; void* qosd; int iod; void* request_tag; void* timer; int command; int class; int context_tag; int ct; void* xri_tag; void* r_ctl; void* type; void* df_ctl; void* max_response_payload_length; void* request_payload_length; TYPE_5__ bde; void* xbl; void* dbde; } ;
typedef TYPE_8__ sli4_gen_request64_wqe_t ;
struct TYPE_25__ {int fc_id; scalar_t__ node_group; int indicator; } ;
typedef TYPE_9__ ocs_remote_node_t ;
struct TYPE_16__ {int phys; TYPE_7__* virt; } ;
typedef TYPE_10__ ocs_dma_t ;
typedef int int32_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_10__*,TYPE_7__*) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_9, void *VAR_10, size_t VAR_11, ocs_dma_t *VAR_12,
        uint32_t VAR_13, uint32_t VAR_14, uint8_t VAR_15,
        uint16_t VAR_16, uint16_t VAR_17, uint16_t VAR_18, ocs_remote_node_t *VAR_19,
        uint8_t VAR_20, uint8_t VAR_21, uint8_t VAR_22)
{
 sli4_gen_request64_wqe_t *VAR_23 = VAR_10;
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

  VAR_23->bde.buffer_length = VAR_13;
  VAR_23->bde.u.data.buffer_address_low = VAR_24[0].buffer_address_low;
  VAR_23->bde.u.data.buffer_address_high = VAR_24[0].buffer_address_high;
 } else {
  VAR_23->xbl = VAR_8;

  VAR_23->bde.bde_type = VAR_2;

  VAR_23->bde.buffer_length = 2 * sizeof(sli4_sge_t);
  VAR_23->bde.u.blp.sgl_segment_address_low = FUNC_1(VAR_12->phys);
  VAR_23->bde.u.blp.sgl_segment_address_high = FUNC_0(VAR_12->phys);
 }

 VAR_23->request_payload_length = VAR_13;
 VAR_23->max_response_payload_length = VAR_14;

 VAR_23->df_ctl = VAR_22;
 VAR_23->type = VAR_21;
 VAR_23->r_ctl = VAR_20;

 VAR_23->xri_tag = VAR_16;

 VAR_23->ct = VAR_5;
 VAR_23->context_tag = VAR_19->indicator;

 VAR_23->class = VAR_4;

 VAR_23->command = VAR_7;

 VAR_23->timer = VAR_15;

 VAR_23->request_tag = VAR_17;

 VAR_23->iod = VAR_6;

 VAR_23->qosd = VAR_8;

 if (VAR_19->node_group) {
  VAR_23->hlm = VAR_8;
  VAR_23->remote_n_port_id = VAR_19->fc_id & 0x00ffffff;
 }

 VAR_23->cmd_type = VAR_3;

 VAR_23->cq_id = VAR_18;

 return 0;
}
