
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_61__ TYPE_9__ ;
typedef struct TYPE_60__ TYPE_8__ ;
typedef struct TYPE_59__ TYPE_7__ ;
typedef struct TYPE_58__ TYPE_6__ ;
typedef struct TYPE_57__ TYPE_5__ ;
typedef struct TYPE_56__ TYPE_4__ ;
typedef struct TYPE_55__ TYPE_46__ ;
typedef struct TYPE_54__ TYPE_41__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_32__ ;
typedef struct TYPE_51__ TYPE_2__ ;
typedef struct TYPE_50__ TYPE_1__ ;
typedef struct TYPE_49__ TYPE_12__ ;
typedef struct TYPE_48__ TYPE_11__ ;
typedef struct TYPE_47__ TYPE_10__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_59__ {scalar_t__ indicator; } ;
typedef TYPE_7__ ocs_remote_node_t ;
struct TYPE_57__ {int wqe_size; } ;
struct TYPE_49__ {TYPE_5__ config; } ;
struct TYPE_56__ {scalar_t__ unregistered_rid; int retain_tsend_io_length; int use_dif_sec_xri; int use_dif_quarantine; scalar_t__ use_unregistered_rpi; } ;
struct TYPE_53__ {int dif_mode; } ;
struct TYPE_60__ {int state; int os; int * tcmd_wq_submit; TYPE_12__ sli; int auto_xfer_rdy_enabled; TYPE_4__ workaround; int io_lock; int sec_hio_wait_count; int sec_hio_wait_list; int io_inuse; TYPE_3__ config; } ;
typedef TYPE_8__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_io_type_e ;
struct TYPE_55__ {int wqebuf; } ;
struct TYPE_58__ {scalar_t__ offset; int app_id; int cs_ctl; int ox_id; int timeout; int flags; int blk_size; int dif_oper; } ;
struct TYPE_50__ {int timeout; int rsp; int cmnd_size; int cmnd; int blk_size; int dif_oper; int first_burst; } ;
struct TYPE_47__ {TYPE_6__ fcp_tgt; TYPE_1__ fcp_ini; } ;
struct TYPE_51__ {TYPE_11__* virt; } ;
struct TYPE_61__ {int type; void* xbusy; TYPE_46__ wqe; TYPE_32__* wq; int is_port_owned; int reqtag; int indicator; int def_sgl; int tgt_wqe_timeout; int auto_xfer_rdy_dnrx; scalar_t__ length; int first_data_sge; TYPE_41__* sec_hio; int state; scalar_t__ sec_len; TYPE_10__ sec_iparam; TYPE_41__* ovfl_io; void* quarantine; TYPE_2__ xfer_rdy; void* arg; void* done; TYPE_7__* rnode; } ;
typedef TYPE_9__ ocs_hw_io_t ;
typedef TYPE_10__ ocs_hw_io_param_t ;
struct TYPE_48__ {scalar_t__ rsvd; scalar_t__ fcp_burst_len; scalar_t__ fcp_data_ro; } ;
typedef TYPE_11__ fcp_xfer_rdy_iu_t ;
struct TYPE_54__ {int indicator; void* quarantine; } ;
struct TYPE_52__ {size_t instance; int use_count; } ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_32__*,TYPE_46__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_5 (int ) ;
 TYPE_41__* FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,TYPE_9__*,int ,int ,int ) ;
 TYPE_32__* FUNC_8 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_9 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_10 (TYPE_8__*,TYPE_9__*,int) ;
 int FUNC_11 (int *,TYPE_9__*) ;
 int FUNC_12 (int *,TYPE_9__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,char*,scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_12__*,int ,int ,int *,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,scalar_t__,TYPE_7__*,int ,int ,int ,int ,int ) ;
 int FUNC_18 (TYPE_12__*,int ,int ,int *,int ,int ,int ,scalar_t__,TYPE_7__*,int ) ;
 int FUNC_19 (TYPE_12__*,int ,int ,int *,int ,scalar_t__,int ,int ,int ,scalar_t__,TYPE_7__*,int ,int ,int ) ;
 int FUNC_20 (TYPE_12__*,int ,int ,int *,int ,scalar_t__,int ,int ,int ,int ,scalar_t__,TYPE_7__*,int ,int ,int ) ;
 int FUNC_21 (TYPE_12__*,int ,int ,int *,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,TYPE_7__*,int ,int ,int ,int ,int ) ;
 int FUNC_22 (TYPE_12__*,int ,int ,int *,scalar_t__,int ,int ,int ,int ,scalar_t__,TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_23 (TYPE_12__*,int ,int ,int *,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,TYPE_7__*,int ,int ,int ,int ,int ) ;

ocs_hw_rtn_e
FUNC_24(ocs_hw_t *VAR_12, ocs_hw_io_type_e VAR_13, ocs_hw_io_t *VAR_14,
  uint32_t VAR_15, ocs_hw_io_param_t *VAR_16, ocs_remote_node_t *VAR_17,
  void *VAR_18, void *VAR_19)
{
 ocs_hw_rtn_e VAR_20 = VAR_5;
 uint32_t VAR_21;
 uint8_t VAR_22 = VAR_10;

 FUNC_0("");

 if (!VAR_12 || !VAR_14 || !VAR_17 || !VAR_16) {
  FUNC_14(((void*)0), "bad parm hw=%p io=%p iparam=%p rnode=%p\n",
       VAR_12, VAR_14, VAR_16, VAR_17);
  return VAR_4;
 }

 if (VAR_12->state != VAR_6) {
  FUNC_14(VAR_12->os, "cannot send IO, HW state=%d\n", VAR_12->state);
  return VAR_4;
 }

 VAR_21 = VAR_17->indicator;

 if (VAR_12->workaround.use_unregistered_rpi && (VAR_21 == VAR_11)) {
  VAR_21 = VAR_12->workaround.unregistered_rid;
  FUNC_15(VAR_12->os, "using unregistered RPI: %d\n", VAR_21);
 }




 VAR_14->rnode = VAR_17;
 VAR_14->type = VAR_13;
 VAR_14->done = VAR_18;
 VAR_14->arg = VAR_19;




 switch (VAR_13) {
 case 132:




  if (VAR_12->workaround.use_dif_quarantine && (VAR_12->config.dif_mode == VAR_1) &&
      (VAR_16->fcp_tgt.dif_oper != VAR_2)) {
   VAR_14->quarantine = VAR_10;
  }

  FUNC_7(VAR_12, VAR_14, VAR_16->fcp_ini.cmnd, VAR_16->fcp_ini.cmnd_size,
    VAR_16->fcp_ini.rsp);

  if (FUNC_19(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size, &VAR_14->def_sgl, VAR_14->first_data_sge, VAR_15,
     VAR_14->indicator, VAR_14->reqtag, VAR_7, VAR_21, VAR_17,
     VAR_16->fcp_ini.dif_oper, VAR_16->fcp_ini.blk_size,
     VAR_16->fcp_ini.timeout)) {
   FUNC_14(VAR_12->os, "IREAD WQE error\n");
   VAR_20 = VAR_4;
  }
  break;
 case 131:
  FUNC_7(VAR_12, VAR_14, VAR_16->fcp_ini.cmnd, VAR_16->fcp_ini.cmnd_size,
    VAR_16->fcp_ini.rsp);

  if (FUNC_20(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size, &VAR_14->def_sgl, VAR_14->first_data_sge,
      VAR_15, VAR_16->fcp_ini.first_burst,
      VAR_14->indicator, VAR_14->reqtag,
     VAR_7, VAR_21, VAR_17,
     VAR_16->fcp_ini.dif_oper, VAR_16->fcp_ini.blk_size,
     VAR_16->fcp_ini.timeout)) {
   FUNC_14(VAR_12->os, "IWRITE WQE error\n");
   VAR_20 = VAR_4;
  }
  break;
 case 133:
  FUNC_7(VAR_12, VAR_14, VAR_16->fcp_ini.cmnd, VAR_16->fcp_ini.cmnd_size,
    VAR_16->fcp_ini.rsp);

  if (FUNC_18(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size, &VAR_14->def_sgl,
     VAR_14->indicator, VAR_14->reqtag, VAR_7,
     VAR_21, VAR_17, VAR_16->fcp_ini.timeout)) {
   FUNC_14(VAR_12->os, "ICMND WQE error\n");
   VAR_20 = VAR_4;
  }
  break;
 case 128: {
  uint16_t VAR_23 = VAR_16->fcp_tgt.flags;
  fcp_xfer_rdy_iu_t *VAR_24 = VAR_14->xfer_rdy.virt;




  *((uint32_t *)VAR_24->fcp_data_ro) = FUNC_3(VAR_16->fcp_tgt.offset);
  *((uint32_t *)VAR_24->fcp_burst_len) = FUNC_3(VAR_15);
  *((uint32_t *)VAR_24->rsvd) = 0;

  if (VAR_14->xbusy) {
   VAR_23 |= VAR_8;
  } else {
   VAR_23 &= ~VAR_8;
  }

  VAR_14->tgt_wqe_timeout = VAR_16->fcp_tgt.timeout;





  if (VAR_12->workaround.use_dif_quarantine && (VAR_12->config.dif_mode == VAR_1) &&
      (VAR_16->fcp_tgt.dif_oper != VAR_2)) {
   VAR_14->quarantine = VAR_10;
  }
  if (VAR_12->workaround.use_dif_sec_xri && (VAR_16->fcp_tgt.dif_oper != VAR_2)) {





   if (VAR_14->ovfl_io != ((void*)0)) {
    VAR_14->sec_hio = VAR_14->ovfl_io;
    VAR_14->sec_hio->quarantine = VAR_10;
   } else {
    VAR_14->sec_hio = FUNC_6(VAR_12);
   }
   if (VAR_14->sec_hio == ((void*)0)) {



    VAR_14->sec_iparam = *VAR_16;
    VAR_14->sec_len = VAR_15;
    FUNC_13(&VAR_12->io_lock);
     FUNC_12(&VAR_12->io_inuse, VAR_14);
     FUNC_11(&VAR_12->sec_hio_wait_list, VAR_14);
     VAR_14->state = VAR_3;
     VAR_12->sec_hio_wait_count++;
    FUNC_16(&VAR_12->io_lock);
    VAR_22 = VAR_0;

    break;
   }

   if (VAR_14->xbusy) {
    VAR_14->sec_hio->quarantine = VAR_10;
   }
  }





  if (VAR_14->xbusy && (VAR_14->sec_hio != ((void*)0))) {
   if (FUNC_17(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size, &VAR_14->def_sgl, VAR_14->first_data_sge,
         VAR_16->fcp_tgt.offset, VAR_15, VAR_14->indicator, VAR_14->sec_hio->indicator,
         VAR_14->reqtag, VAR_7,
         VAR_16->fcp_tgt.ox_id, VAR_21, VAR_17,
         VAR_23,
         VAR_16->fcp_tgt.dif_oper, VAR_16->fcp_tgt.blk_size,
         VAR_16->fcp_tgt.cs_ctl, VAR_16->fcp_tgt.app_id)) {
    FUNC_14(VAR_12->os, "TRECEIVE WQE error\n");
    VAR_20 = VAR_4;
   }
  } else {
   if (FUNC_21(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size, &VAR_14->def_sgl, VAR_14->first_data_sge,
         VAR_16->fcp_tgt.offset, VAR_15, VAR_14->indicator, VAR_14->reqtag,
         VAR_7,
         VAR_16->fcp_tgt.ox_id, VAR_21, VAR_17,
         VAR_23,
         VAR_16->fcp_tgt.dif_oper, VAR_16->fcp_tgt.blk_size,
         VAR_16->fcp_tgt.cs_ctl, VAR_16->fcp_tgt.app_id)) {
    FUNC_14(VAR_12->os, "TRECEIVE WQE error\n");
    VAR_20 = VAR_4;
   }
  }
  break;
 }
 case 130: {
  uint16_t VAR_25 = VAR_16->fcp_tgt.flags;

  if (VAR_14->xbusy) {
   VAR_25 |= VAR_8;
  } else {
   VAR_25 &= ~VAR_8;
  }

  VAR_14->tgt_wqe_timeout = VAR_16->fcp_tgt.timeout;
  if (FUNC_23(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size, &VAR_14->def_sgl, VAR_14->first_data_sge,
     VAR_16->fcp_tgt.offset, VAR_15, VAR_14->indicator, VAR_14->reqtag,
     VAR_7,
     VAR_16->fcp_tgt.ox_id, VAR_21, VAR_17,
     VAR_25,
     VAR_16->fcp_tgt.dif_oper,
     VAR_16->fcp_tgt.blk_size,
     VAR_16->fcp_tgt.cs_ctl,
     VAR_16->fcp_tgt.app_id)) {
   FUNC_14(VAR_12->os, "TSEND WQE error\n");
   VAR_20 = VAR_4;
  } else if (VAR_12->workaround.retain_tsend_io_length) {
   VAR_14->length = VAR_15;
  }
  break;
 }
 case 129: {
  uint16_t VAR_26 = VAR_16->fcp_tgt.flags;

  if (VAR_14->xbusy) {
   VAR_26 |= VAR_8;
  } else {
   VAR_26 &= ~VAR_8;
  }


  if (VAR_12->auto_xfer_rdy_enabled && VAR_14->is_port_owned) {
   if ((VAR_14->auto_xfer_rdy_dnrx = FUNC_10(VAR_12, VAR_14, 1))) {
    VAR_26 |= VAR_9;
   }
  }

  VAR_14->tgt_wqe_timeout = VAR_16->fcp_tgt.timeout;
  if (FUNC_22(&VAR_12->sli, VAR_14->wqe.wqebuf, VAR_12->sli.config.wqe_size,
     &VAR_14->def_sgl,
     VAR_15,
     VAR_14->indicator, VAR_14->reqtag,
     VAR_7,
     VAR_16->fcp_tgt.ox_id,
     VAR_21, VAR_17,
     VAR_26, VAR_16->fcp_tgt.cs_ctl,
     VAR_14->is_port_owned,
     VAR_16->fcp_tgt.app_id)) {
   FUNC_14(VAR_12->os, "TRSP WQE error\n");
   VAR_20 = VAR_4;
  }

  break;
 }
 default:
  FUNC_14(VAR_12->os, "unsupported IO type %#x\n", VAR_13);
  VAR_20 = VAR_4;
 }

 if (VAR_22 && (VAR_5 == VAR_20)) {
  if (VAR_14->wq == ((void*)0)) {
   VAR_14->wq = FUNC_8(VAR_12, VAR_14);
   FUNC_5(VAR_14->wq != ((void*)0));
  }

  VAR_14->xbusy = VAR_10;





  FUNC_1(VAR_12->tcmd_wq_submit[VAR_14->wq->instance]++);
  FUNC_1(VAR_14->wq->use_count++);
  FUNC_4(VAR_12, VAR_14);
  VAR_20 = FUNC_2(VAR_14->wq, &VAR_14->wqe);
  if (VAR_20 >= 0) {

   VAR_20 = 0;
  } else {

   FUNC_14(VAR_12->os, "sli_queue_write failed: %d\n", VAR_20);
   VAR_14->xbusy = VAR_0;
   FUNC_9(VAR_12, VAR_14);
  }
 }

 return VAR_20;
}
