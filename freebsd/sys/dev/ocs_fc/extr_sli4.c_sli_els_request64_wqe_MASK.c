
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
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_19__ {scalar_t__ sgl_pre_registered; } ;
struct TYPE_26__ {int os; int if_type; TYPE_1__ config; } ;
typedef TYPE_8__ sli4_t ;
struct TYPE_27__ {int buffer_address_high; int buffer_address_low; } ;
typedef TYPE_9__ sli4_sge_t ;
struct TYPE_21__ {int sgl_segment_address_high; int sgl_segment_address_low; } ;
struct TYPE_20__ {int buffer_address_high; int buffer_address_low; } ;
struct TYPE_22__ {TYPE_3__ blp; TYPE_2__ data; } ;
struct TYPE_23__ {int buffer_length; TYPE_4__ u; int bde_type; } ;
struct TYPE_16__ {int timer; int remote_id; scalar_t__ ct; int temporary_rpi; void* cq_id; int cmd_type; int context_tag; void* els_id; int sid; void* sp; void* qosd; int iod; void* hlm; void* request_tag; int command; int class; void* xri_tag; void* max_response_payload_length; void* els_request_payload_length; TYPE_5__ els_request_payload; void* xbl; void* dbde; } ;
typedef TYPE_10__ sli4_els_request64_wqe_t ;
struct TYPE_17__ {int fc_id; int indicator; TYPE_7__* sport; int attached; scalar_t__ node_group; } ;
typedef TYPE_11__ ocs_remote_node_t ;
struct TYPE_18__ {int phys; TYPE_9__* virt; } ;
typedef TYPE_12__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_25__ {int indicator; int fc_id; TYPE_6__* domain; } ;
struct TYPE_24__ {int fcf_indicator; } ;


 void* VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*,int ,size_t) ;

int32_t
FUNC_4(sli4_t *VAR_20, void *VAR_21, size_t VAR_22, ocs_dma_t *VAR_23, uint8_t VAR_24,
        uint32_t VAR_25, uint32_t VAR_26, uint8_t VAR_27,
        uint16_t VAR_28, uint16_t VAR_29, uint16_t VAR_30, ocs_remote_node_t *VAR_31)
{
 sli4_els_request64_wqe_t *VAR_32 = VAR_21;
 sli4_sge_t *VAR_33 = VAR_23->virt;
 uint8_t VAR_34 = VAR_0;

 FUNC_3(VAR_21, 0, VAR_22);

 if (VAR_20->config.sgl_pre_registered) {
  VAR_32->xbl = VAR_0;

  VAR_32->dbde = VAR_18;
  VAR_32->els_request_payload.bde_type = VAR_2;

  VAR_32->els_request_payload.buffer_length = VAR_25;
  VAR_32->els_request_payload.u.data.buffer_address_low = VAR_33[0].buffer_address_low;
  VAR_32->els_request_payload.u.data.buffer_address_high = VAR_33[0].buffer_address_high;
 } else {
  VAR_32->xbl = VAR_18;

  VAR_32->els_request_payload.bde_type = VAR_3;

  VAR_32->els_request_payload.buffer_length = 2 * sizeof(sli4_sge_t);
  VAR_32->els_request_payload.u.blp.sgl_segment_address_low = FUNC_1(VAR_23->phys);
  VAR_32->els_request_payload.u.blp.sgl_segment_address_high = FUNC_0(VAR_23->phys);
 }

 VAR_32->els_request_payload_length = VAR_25;
 VAR_32->max_response_payload_length = VAR_26;

 VAR_32->xri_tag = VAR_28;
 VAR_32->timer = VAR_27;
 VAR_32->class = VAR_4;

 VAR_32->command = VAR_17;

 VAR_32->request_tag = VAR_29;

 if (VAR_31->node_group) {
  VAR_32->hlm = VAR_18;
  VAR_32->remote_id = VAR_31->fc_id & 0x00ffffff;
 }

 VAR_32->iod = VAR_10;

 VAR_32->qosd = VAR_18;



 switch (VAR_24) {
 case 130:
  VAR_32->els_id = VAR_13;
  if (VAR_31->attached) {
   VAR_32->ct = VAR_8;
   VAR_32->context_tag = VAR_31->indicator;
  } else {
   VAR_32->ct = VAR_9;
   VAR_32->context_tag = VAR_31->sport->indicator;
  }
  if (VAR_1 == VAR_31->fc_id) {
   VAR_34 = VAR_18;
  }
  break;
 case 132:
  if (VAR_1 == VAR_31->fc_id) {
   VAR_34 = VAR_18;
  }
  if (0 == VAR_31->sport->fc_id) {
   VAR_32->els_id = VAR_11;
   VAR_34 = VAR_18;
  } else {
   VAR_32->els_id = VAR_14;
  }
  VAR_32->ct = VAR_9;
  VAR_32->context_tag = VAR_31->sport->indicator;
  VAR_32->sp = VAR_18;
  break;
 case 131:
  VAR_32->els_id = VAR_12;
  VAR_34 = VAR_18;
  if (VAR_16 == VAR_20->if_type) {
   if (!VAR_31->sport->domain) {
    FUNC_2(VAR_20->os, "invalid domain handle\n");
    return -1;
   }




   VAR_32->ct = VAR_7;
   VAR_32->context_tag = VAR_31->sport->domain->fcf_indicator;
   VAR_32->sp = VAR_18;
  } else {
   VAR_32->ct = VAR_9;
   VAR_32->context_tag = VAR_31->sport->indicator;
   VAR_32->sp = VAR_18;
   if (VAR_31->sport->fc_id != VAR_19) {
    VAR_32->sid = VAR_31->sport->fc_id;
   }
  }
  break;
 case 129:
  VAR_32->els_id = VAR_15;
  VAR_32->ct = VAR_9;
  VAR_32->context_tag = VAR_31->sport->indicator;
  break;
 case 128:
  VAR_32->els_id = VAR_14;
  VAR_32->ct = VAR_9;
  VAR_32->context_tag = VAR_31->sport->indicator;
  break;
 default:
  VAR_32->els_id = VAR_14;
  if (VAR_31->attached) {
   VAR_32->ct = VAR_8;
   VAR_32->context_tag = VAR_31->indicator;
  } else {
   VAR_32->ct = VAR_9;
   VAR_32->context_tag = VAR_31->sport->indicator;
  }
  break;
 }

 if (VAR_34) {
  VAR_32->cmd_type = VAR_5;
 } else {
  VAR_32->cmd_type = VAR_6;
 }

 VAR_32->cq_id = VAR_30;

 if (VAR_8 != VAR_32->ct) {
  VAR_32->remote_id = VAR_31->fc_id;
 }
 if (VAR_9 == VAR_32->ct) {
  VAR_32->temporary_rpi = VAR_31->indicator;
 }

 return 0;
}
