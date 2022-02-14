
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_11__ {int seq_id_last; int seq_id_validity; int low_seq_cnt; int high_seq_cnt; } ;
struct TYPE_12__ {int rjt; TYPE_1__ acc; } ;
struct TYPE_14__ {scalar_t__ type; int rx_id; int ox_id; TYPE_2__ u; } ;
typedef TYPE_4__ sli_bls_payload_t ;
struct TYPE_15__ {int payload_word0; scalar_t__ context_tag; int local_n_port_id; int remote_id; scalar_t__ temporary_rpi; int cmd_type; void* cq_id; void* hlm; void* qosd; void* request_tag; int command; int class; void* xri_tag; int ct; int rx_id; int ox_id; void* ar; int low_seq_cnt; int high_seq_cnt; } ;
typedef TYPE_5__ sli4_xmit_bls_rsp_wqe_t ;
struct TYPE_16__ {int os; } ;
typedef TYPE_6__ sli4_t ;
struct TYPE_17__ {scalar_t__ indicator; int fc_id; scalar_t__ node_group; TYPE_3__* sport; scalar_t__ attached; } ;
typedef TYPE_7__ ocs_remote_node_t ;
typedef int int32_t ;
struct TYPE_13__ {scalar_t__ indicator; int fc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (void*,int ,size_t) ;

int32_t
FUNC_2(sli4_t *VAR_9, void *VAR_10, size_t VAR_11, sli_bls_payload_t *VAR_12,
         uint16_t VAR_13, uint16_t VAR_14, uint16_t VAR_15, ocs_remote_node_t *VAR_16, uint32_t VAR_17)
{
 sli4_xmit_bls_rsp_wqe_t *VAR_18 = VAR_10;




 if (VAR_16->attached && (VAR_17 != VAR_8)) {
  FUNC_0(VAR_9->os, "S_ID specified for attached remote node %d\n",
        VAR_16->indicator);
  return -1;
 }

 FUNC_1(VAR_10, 0, VAR_11);

 if (VAR_5 == VAR_12->type) {
  VAR_18->payload_word0 = (VAR_12->u.acc.seq_id_last << 16) |
   (VAR_12->u.acc.seq_id_validity << 24);
  VAR_18->high_seq_cnt = VAR_12->u.acc.high_seq_cnt;
  VAR_18->low_seq_cnt = VAR_12->u.acc.low_seq_cnt;
 } else if (VAR_6 == VAR_12->type) {
  VAR_18->payload_word0 = *((uint32_t *)&VAR_12->u.rjt);
  VAR_18->ar = VAR_7;
 } else {
  FUNC_0(VAR_9->os, "bad BLS type %#x\n",
    VAR_12->type);
  return -1;
 }

 VAR_18->ox_id = VAR_12->ox_id;
 VAR_18->rx_id = VAR_12->rx_id;

 if (VAR_16->attached) {
  VAR_18->ct = VAR_2;
  VAR_18->context_tag = VAR_16->indicator;
 } else {
  VAR_18->ct = VAR_3;
  VAR_18->context_tag = VAR_16->sport->indicator;

  if (VAR_8 != VAR_17) {
   VAR_18->local_n_port_id = VAR_17 & 0x00ffffff;
  } else {
   VAR_18->local_n_port_id = VAR_16->sport->fc_id & 0x00ffffff;
  }
  VAR_18->remote_id = VAR_16->fc_id & 0x00ffffff;

  VAR_18->temporary_rpi = VAR_16->indicator;
 }

 VAR_18->xri_tag = VAR_13;

 VAR_18->class = VAR_1;

 VAR_18->command = VAR_4;

 VAR_18->request_tag = VAR_14;

 VAR_18->qosd = VAR_7;

 if (VAR_16->node_group) {
  VAR_18->hlm = VAR_7;
  VAR_18->remote_id = VAR_16->fc_id & 0x00ffffff;
 }

 VAR_18->cq_id = VAR_15;

 VAR_18->cmd_type = VAR_0;

 return 0;
}
