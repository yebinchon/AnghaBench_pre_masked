
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_12__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_13__ {TYPE_1__ data; } ;
struct TYPE_14__ {TYPE_2__ u; void* buffer_length; int bde_type; } ;
struct TYPE_16__ {int len_loc; void* cq_id; int cmd_type; int iod; int temporary_rpi; void* request_tag; void* timer; int command; int class; int context_tag; int ct; void* xri_tag; void* r_ctl; void* type; void* df_ctl; void* sequence_payload_length; TYPE_3__ sequence_payload; int dbde; } ;
typedef TYPE_5__ sli4_xmit_bcast64_wqe_t ;
struct TYPE_17__ {int os; } ;
typedef TYPE_6__ sli4_t ;
struct TYPE_18__ {int indicator; TYPE_4__* sport; scalar_t__ attached; } ;
typedef TYPE_7__ ocs_remote_node_t ;
struct TYPE_19__ {int phys; } ;
typedef TYPE_8__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_15__ {int indicator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_7, void *VAR_8, size_t VAR_9, ocs_dma_t *VAR_10,
  uint32_t VAR_11, uint8_t VAR_12, uint16_t VAR_13, uint16_t VAR_14,
  uint16_t VAR_15, ocs_remote_node_t *VAR_16,
  uint8_t VAR_17, uint8_t VAR_18, uint8_t VAR_19)
{
 sli4_xmit_bcast64_wqe_t *VAR_20 = VAR_8;


 if (VAR_16->attached) {
  FUNC_2(VAR_7->os, "remote node %d in use\n", VAR_16->indicator);
  return -1;
 }

 FUNC_3(VAR_8, 0, VAR_9);

 VAR_20->dbde = VAR_6;
 VAR_20->sequence_payload.bde_type = VAR_0;
 VAR_20->sequence_payload.buffer_length = VAR_11;
 VAR_20->sequence_payload.u.data.buffer_address_low = FUNC_1(VAR_10->phys);
 VAR_20->sequence_payload.u.data.buffer_address_high = FUNC_0(VAR_10->phys);

 VAR_20->sequence_payload_length = VAR_11;

 VAR_20->df_ctl = VAR_19;
 VAR_20->type = VAR_18;
 VAR_20->r_ctl = VAR_17;

 VAR_20->xri_tag = VAR_13;

 VAR_20->ct = VAR_3;
 VAR_20->context_tag = VAR_16->sport->indicator;

 VAR_20->class = VAR_2;

 VAR_20->command = VAR_5;

 VAR_20->timer = VAR_12;

 VAR_20->request_tag = VAR_14;

 VAR_20->temporary_rpi = VAR_16->indicator;

 VAR_20->len_loc = 0x1;

 VAR_20->iod = VAR_4;

 VAR_20->cmd_type = VAR_1;

 VAR_20->cq_id = VAR_15;

 return 0;
}
