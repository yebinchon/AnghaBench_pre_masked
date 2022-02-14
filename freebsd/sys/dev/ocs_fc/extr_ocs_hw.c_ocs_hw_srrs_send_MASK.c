
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_62__ TYPE_9__ ;
typedef struct TYPE_61__ TYPE_8__ ;
typedef struct TYPE_60__ TYPE_7__ ;
typedef struct TYPE_59__ TYPE_6__ ;
typedef struct TYPE_58__ TYPE_5__ ;
typedef struct TYPE_57__ TYPE_4__ ;
typedef struct TYPE_56__ TYPE_43__ ;
typedef struct TYPE_55__ TYPE_3__ ;
typedef struct TYPE_54__ TYPE_36__ ;
typedef struct TYPE_53__ TYPE_2__ ;
typedef struct TYPE_52__ TYPE_1__ ;
typedef struct TYPE_51__ TYPE_17__ ;
typedef struct TYPE_50__ TYPE_16__ ;
typedef struct TYPE_49__ TYPE_15__ ;
typedef struct TYPE_48__ TYPE_14__ ;
typedef struct TYPE_47__ TYPE_13__ ;
typedef struct TYPE_46__ TYPE_12__ ;
typedef struct TYPE_45__ TYPE_11__ ;
typedef struct TYPE_44__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_59__ {int acc; int rjt; } ;
struct TYPE_44__ {int rx_id; int ox_id; TYPE_6__ u; void* type; } ;
typedef TYPE_10__ sli_bls_payload_t ;
struct TYPE_45__ {void* last; int buffer_length; void* sge_type; void* buffer_address_low; void* buffer_address_high; } ;
typedef TYPE_11__ sli4_sge_t ;
typedef int ocs_remote_node_t ;
struct TYPE_61__ {int wqe_size; } ;
struct TYPE_50__ {TYPE_8__ config; } ;
struct TYPE_46__ {scalar_t__ state; int os; TYPE_16__ sli; } ;
typedef TYPE_12__ ocs_hw_t ;
typedef int ocs_hw_srrs_cb_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_io_type_e ;
struct TYPE_56__ {int wqebuf; } ;
struct TYPE_47__ {int type; void* xbusy; TYPE_43__ wqe; TYPE_36__* wq; int reqtag; int indicator; TYPE_17__* sgl; void* arg; int done; int * rnode; } ;
typedef TYPE_13__ ocs_hw_io_t ;
struct TYPE_62__ {int df_ctl; int type; int r_ctl; int timeout; } ;
struct TYPE_60__ {int s_id; int rx_id; int ox_id; int payload; } ;
struct TYPE_58__ {int rx_id; int ox_id; int payload; } ;
struct TYPE_57__ {int df_ctl; int type; int r_ctl; int ox_id; int timeout; } ;
struct TYPE_55__ {int df_ctl; int type; int r_ctl; int timeout; } ;
struct TYPE_53__ {int s_id; int ox_id; } ;
struct TYPE_52__ {int ox_id; int timeout; } ;
struct TYPE_48__ {TYPE_9__ bcast; TYPE_7__ bls_sid; TYPE_5__ bls; TYPE_4__ fc_ct_rsp; TYPE_3__ fc_ct; TYPE_2__ els_sid; TYPE_1__ els; } ;
typedef TYPE_14__ ocs_hw_io_param_t ;
struct TYPE_49__ {int size; scalar_t__ virt; int phys; } ;
typedef TYPE_15__ ocs_dma_t ;
struct TYPE_54__ {int use_count; } ;
struct TYPE_51__ {TYPE_11__* virt; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_36__*,TYPE_43__*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_12__*,int ) ;
 TYPE_36__* FUNC_7 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_8 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (TYPE_11__*,int ,int) ;
 int FUNC_13 (TYPE_16__*,int ,int ,TYPE_17__*,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_14 (TYPE_16__*,int ,int ,TYPE_17__*,int ,int ,int ,int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_15 (TYPE_16__*,int ,int ,TYPE_15__*,int ,int ,int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_16 (TYPE_16__*,int ,int ,TYPE_10__*,int ,int ,int ,int *,int ) ;
 int FUNC_17 (TYPE_16__*,int ,int ,TYPE_15__*,int ,int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_18 (TYPE_16__*,int ,int ,TYPE_17__*,int ,int ,int ,int ,int ,int *,int ,int ,int ) ;

ocs_hw_rtn_e
FUNC_19(ocs_hw_t *VAR_11, ocs_hw_io_type_e VAR_12, ocs_hw_io_t *VAR_13,
    ocs_dma_t *VAR_14, uint32_t VAR_15, ocs_dma_t *VAR_16,
    ocs_remote_node_t *VAR_17, ocs_hw_io_param_t *VAR_18,
    ocs_hw_srrs_cb_t VAR_19, void *VAR_20)
{
 sli4_sge_t *VAR_21 = ((void*)0);
 ocs_hw_rtn_e VAR_22 = VAR_2;
 uint16_t VAR_23 = 0;

 if (!VAR_11 || !VAR_13 || !VAR_17 || !VAR_18) {
  FUNC_9(((void*)0), "bad parm hw=%p io=%p send=%p receive=%p rnode=%p iparam=%p\n",
       VAR_11, VAR_13, VAR_14, VAR_16, VAR_17, VAR_18);
  return VAR_1;
 }

 if (VAR_11->state != VAR_3) {
  FUNC_10(VAR_11->os, "cannot send SRRS, HW state=%d\n", VAR_11->state);
  return VAR_1;
 }

 if (FUNC_6(VAR_11, VAR_13->indicator)) {

  VAR_23 |= VAR_5;
 }
 VAR_13->rnode = VAR_17;
 VAR_13->type = VAR_12;
 VAR_13->done = VAR_19;
 VAR_13->arg = VAR_20;

 VAR_21 = VAR_13->sgl->virt;


 FUNC_12(VAR_13->sgl->virt, 0, 2 * sizeof(sli4_sge_t));

 if (VAR_14) {
  VAR_21[0].buffer_address_high = FUNC_2(VAR_14->phys);
  VAR_21[0].buffer_address_low = FUNC_3(VAR_14->phys);
  VAR_21[0].sge_type = VAR_6;
  VAR_21[0].buffer_length = VAR_15;
 }

 if ((132 == VAR_12) || (129 == VAR_12)) {
  VAR_21[1].buffer_address_high = FUNC_2(VAR_16->phys);
  VAR_21[1].buffer_address_low = FUNC_3(VAR_16->phys);
  VAR_21[1].sge_type = VAR_6;
  VAR_21[1].buffer_length = VAR_16->size;
  VAR_21[1].last = VAR_9;
 } else {
  VAR_21[0].last = VAR_9;
 }

 switch (VAR_12) {
 case 132:
  if ( (!VAR_14) || FUNC_13(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_13->sgl,
       *((uint8_t *)(VAR_14->virt)),
       VAR_15, VAR_16->size,
       VAR_18->els.timeout, VAR_13->indicator, VAR_13->reqtag, VAR_4, VAR_17)) {
   FUNC_9(VAR_11->os, "REQ WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 case 131:
  if ( (!VAR_14) || FUNC_17(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_14, VAR_15,
        VAR_13->indicator, VAR_13->reqtag, VAR_4,
        VAR_18->els.ox_id,
       VAR_17, VAR_23, VAR_10)) {
   FUNC_9(VAR_11->os, "RSP WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 case 130:
  if ( (!VAR_14) || FUNC_17(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_14, VAR_15,
        VAR_13->indicator, VAR_13->reqtag, VAR_4,
        VAR_18->els_sid.ox_id,
       VAR_17, VAR_23, VAR_18->els_sid.s_id)) {
   FUNC_9(VAR_11->os, "RSP (SID) WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 case 129:
  if ( (!VAR_14) || FUNC_14(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_13->sgl, VAR_15,
       VAR_16->size, VAR_18->fc_ct.timeout, VAR_13->indicator,
       VAR_13->reqtag, VAR_4, VAR_17, VAR_18->fc_ct.r_ctl,
       VAR_18->fc_ct.type, VAR_18->fc_ct.df_ctl)) {
   FUNC_9(VAR_11->os, "GEN WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 case 128:
  if ( (!VAR_14) || FUNC_18(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_13->sgl, VAR_15,
       VAR_18->fc_ct_rsp.timeout, VAR_18->fc_ct_rsp.ox_id, VAR_13->indicator,
       VAR_13->reqtag, VAR_17, VAR_18->fc_ct_rsp.r_ctl,
       VAR_18->fc_ct_rsp.type, VAR_18->fc_ct_rsp.df_ctl)) {
   FUNC_9(VAR_11->os, "XMIT SEQ WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 case 135:
 case 133:
 {
  sli_bls_payload_t VAR_24;

  if (135 == VAR_12) {
   VAR_24.type = VAR_7;
   FUNC_11(&VAR_24.u.acc, VAR_18->bls.payload, sizeof(VAR_24.u.acc));
  } else {
   VAR_24.type = VAR_8;
   FUNC_11(&VAR_24.u.rjt, VAR_18->bls.payload, sizeof(VAR_24.u.rjt));
  }

  VAR_24.ox_id = VAR_18->bls.ox_id;
  VAR_24.rx_id = VAR_18->bls.rx_id;

  if (FUNC_16(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, &VAR_24,
        VAR_13->indicator, VAR_13->reqtag,
        VAR_4,
        VAR_17, VAR_10)) {
   FUNC_9(VAR_11->os, "XMIT_BLS_RSP64 WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 }
 case 134:
 {
  sli_bls_payload_t VAR_25;

  VAR_25.type = VAR_7;
  FUNC_11(&VAR_25.u.acc, VAR_18->bls_sid.payload, sizeof(VAR_25.u.acc));

  VAR_25.ox_id = VAR_18->bls_sid.ox_id;
  VAR_25.rx_id = VAR_18->bls_sid.rx_id;

  if (FUNC_16(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, &VAR_25,
        VAR_13->indicator, VAR_13->reqtag,
        VAR_4,
        VAR_17, VAR_18->bls_sid.s_id)) {
   FUNC_9(VAR_11->os, "XMIT_BLS_RSP64 WQE SID error\n");
   VAR_22 = VAR_1;
  }
  break;
 }
 case 136:
  if ( (!VAR_14) || FUNC_15(&VAR_11->sli, VAR_13->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_14, VAR_15,
     VAR_18->bcast.timeout, VAR_13->indicator, VAR_13->reqtag,
     VAR_4, VAR_17,
     VAR_18->bcast.r_ctl, VAR_18->bcast.type, VAR_18->bcast.df_ctl)) {
   FUNC_9(VAR_11->os, "XMIT_BCAST64 WQE error\n");
   VAR_22 = VAR_1;
  }
  break;
 default:
  FUNC_9(VAR_11->os, "bad SRRS type %#x\n", VAR_12);
  VAR_22 = VAR_1;
 }

 if (VAR_2 == VAR_22) {
  if (VAR_13->wq == ((void*)0)) {
   VAR_13->wq = FUNC_7(VAR_11, VAR_13);
   FUNC_5(VAR_13->wq != ((void*)0));
  }
  VAR_13->xbusy = VAR_9;





  FUNC_0(VAR_13->wq->use_count++);
  FUNC_4(VAR_11, VAR_13);
  VAR_22 = FUNC_1(VAR_13->wq, &VAR_13->wqe);
  if (VAR_22 >= 0) {

   VAR_22 = 0;
  } else {

   FUNC_9(VAR_11->os, "sli_queue_write failed: %d\n", VAR_22);
   VAR_13->xbusy = VAR_0;
   FUNC_8(VAR_11, VAR_13);
  }
 }

 return VAR_22;
}
