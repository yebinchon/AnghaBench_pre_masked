
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_14__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_15__ {TYPE_2__ data; } ;
struct TYPE_16__ {int buffer_length; TYPE_3__ u; int bde_type; } ;
struct TYPE_18__ {int els_response_payload_length; int remote_id; int s_id; void* cq_id; int cmd_type; void* hlm; void* sp; int temporary_rpi; int context_tag; int ct; void* xc; void* qosd; int iod; void* ox_id; void* request_tag; int command; int class; void* xri_tag; TYPE_4__ els_response_payload; void* xbl; void* dbde; } ;
typedef TYPE_6__ sli4_xmit_els_rsp64_wqe_t ;
struct TYPE_13__ {scalar_t__ sgl_pre_registered; } ;
struct TYPE_19__ {TYPE_1__ config; } ;
typedef TYPE_7__ sli4_t ;
struct TYPE_20__ {int fc_id; scalar_t__ node_group; int indicator; TYPE_5__* sport; scalar_t__ attached; } ;
typedef TYPE_8__ ocs_remote_node_t ;
struct TYPE_21__ {int phys; } ;
typedef TYPE_9__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_17__ {int indicator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,size_t) ;

int32_t
FUNC_3(sli4_t *VAR_10, void *VAR_11, size_t VAR_12, ocs_dma_t *VAR_13,
         uint32_t VAR_14, uint16_t VAR_15, uint16_t VAR_16, uint16_t VAR_17,
         uint16_t VAR_18, ocs_remote_node_t *VAR_19, uint32_t VAR_20, uint32_t VAR_21)
{
 sli4_xmit_els_rsp64_wqe_t *VAR_22 = VAR_11;

 FUNC_2(VAR_11, 0, VAR_12);

 if (VAR_10->config.sgl_pre_registered) {
  VAR_22->dbde = VAR_8;
 } else {
  VAR_22->xbl = VAR_8;
 }

 VAR_22->els_response_payload.bde_type = VAR_0;
 VAR_22->els_response_payload.buffer_length = VAR_14;
 VAR_22->els_response_payload.u.data.buffer_address_low = FUNC_1(VAR_13->phys);
 VAR_22->els_response_payload.u.data.buffer_address_high = FUNC_0(VAR_13->phys);

 VAR_22->els_response_payload_length = VAR_14;

 VAR_22->xri_tag = VAR_15;

 VAR_22->class = VAR_1;

 VAR_22->command = VAR_7;

 VAR_22->request_tag = VAR_16;

 VAR_22->ox_id = VAR_18;

 VAR_22->iod = VAR_5;

 VAR_22->qosd = VAR_8;

 if (VAR_20 & VAR_6) {
  VAR_22->xc = VAR_8;
 }

 if (VAR_19->attached) {
  VAR_22->ct = VAR_3;
  VAR_22->context_tag = VAR_19->indicator;
 } else {
  VAR_22->ct = VAR_4;
  VAR_22->context_tag = VAR_19->sport->indicator;
  VAR_22->remote_id = VAR_19->fc_id & 0x00ffffff;
  VAR_22->temporary_rpi = VAR_19->indicator;
  if (VAR_9 != VAR_21) {
   VAR_22->sp = VAR_8;
   VAR_22->s_id = VAR_21 & 0x00ffffff;
  }
 }

 if (VAR_19->node_group) {
  VAR_22->hlm = VAR_8;
  VAR_22->remote_id = VAR_19->fc_id & 0x00ffffff;
 }

 VAR_22->cmd_type = VAR_2;

 VAR_22->cq_id = VAR_17;

 return 0;
}
