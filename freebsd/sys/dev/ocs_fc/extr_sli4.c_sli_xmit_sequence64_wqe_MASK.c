
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_14__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_15__ {TYPE_2__ data; } ;
struct TYPE_16__ {TYPE_3__ u; void* buffer_length; int bde_type; } ;
struct TYPE_17__ {int remote_n_port_id; int ls; int len_loc; int cq_id; int cmd_type; void* hlm; int iod; void* remote_xid; void* request_tag; scalar_t__ abort_tag; void* timer; scalar_t__ pu; int class; int command; scalar_t__ bs; int ct; scalar_t__ dif; int context_tag; void* xri_tag; void* r_ctl; void* type; void* df_ctl; scalar_t__ xo; scalar_t__ ft; scalar_t__ si; scalar_t__ relative_offset; void* sequence_payload_len; TYPE_4__ bde; void* xbl; void* dbde; } ;
typedef TYPE_5__ sli4_xmit_sequence64_wqe_t ;
struct TYPE_13__ {scalar_t__ sgl_pre_registered; } ;
struct TYPE_18__ {TYPE_1__ config; int os; } ;
typedef TYPE_6__ sli4_t ;
struct TYPE_19__ {int fc_id; scalar_t__ node_group; int indicator; } ;
typedef TYPE_7__ ocs_remote_node_t ;
struct TYPE_20__ {int phys; int * virt; } ;
typedef TYPE_8__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_8__*,int *) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_7, void *VAR_8, size_t VAR_9, ocs_dma_t *VAR_10,
        uint32_t VAR_11, uint8_t VAR_12, uint16_t VAR_13,
        uint16_t VAR_14, uint16_t VAR_15, ocs_remote_node_t *VAR_16,
        uint8_t VAR_17, uint8_t VAR_18, uint8_t VAR_19)
{
 sli4_xmit_sequence64_wqe_t *VAR_20 = VAR_8;

 FUNC_3(VAR_8, 0, VAR_9);

 if ((VAR_10 == ((void*)0)) || (VAR_10->virt == ((void*)0))) {
  FUNC_2(VAR_7->os, "bad parameter sgl=%p virt=%p\n",
       VAR_10, VAR_10 ? VAR_10->virt : ((void*)0));
  return -1;
 }

 if (VAR_7->config.sgl_pre_registered) {
  VAR_20->dbde = VAR_6;
 } else {
  VAR_20->xbl = VAR_6;
 }

 VAR_20->bde.bde_type = VAR_0;
 VAR_20->bde.buffer_length = VAR_11;
 VAR_20->bde.u.data.buffer_address_low = FUNC_1(VAR_10->phys);
 VAR_20->bde.u.data.buffer_address_high = FUNC_0(VAR_10->phys);
 VAR_20->sequence_payload_len = VAR_11;

 VAR_20->remote_n_port_id = VAR_16->fc_id & 0x00ffffff;

 VAR_20->relative_offset = 0;

 VAR_20->si = 0;

 VAR_20->ft = 0;
 VAR_20->xo = 0;
 VAR_20->ls = 1;
 VAR_20->df_ctl = VAR_19;
 VAR_20->type = VAR_18;
 VAR_20->r_ctl = VAR_17;

 VAR_20->xri_tag = VAR_14;
 VAR_20->context_tag = VAR_16->indicator;

 VAR_20->dif = 0;
 VAR_20->ct = VAR_3;
 VAR_20->bs = 0;

 VAR_20->command = VAR_5;
 VAR_20->class = VAR_2;
 VAR_20->pu = 0;
 VAR_20->timer = VAR_12;

 VAR_20->abort_tag = 0;
 VAR_20->request_tag = VAR_15;
 VAR_20->remote_xid = VAR_13;

 VAR_20->iod = VAR_4;

 if (VAR_16->node_group) {
  VAR_20->hlm = VAR_6;
  VAR_20->remote_n_port_id = VAR_16->fc_id & 0x00ffffff;
 }

 VAR_20->cmd_type = VAR_1;

 VAR_20->len_loc = 2;

 VAR_20->cq_id = 0xFFFF;

 return 0;
}
