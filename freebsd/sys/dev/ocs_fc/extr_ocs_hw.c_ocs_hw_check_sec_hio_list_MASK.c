
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


typedef int uint16_t ;
struct TYPE_23__ {int wqe_size; } ;
struct TYPE_28__ {TYPE_1__ config; } ;
struct TYPE_26__ {int os; TYPE_6__ sli; int io_inuse; int sec_hio_wait_list; } ;
typedef TYPE_4__ ocs_hw_t ;
struct TYPE_22__ {int wqebuf; } ;
struct TYPE_24__ {int app_id; int cs_ctl; int blk_size; int dif_oper; int ox_id; int offset; int timeout; int flags; } ;
struct TYPE_25__ {TYPE_2__ fcp_tgt; } ;
struct TYPE_27__ {void* xbusy; TYPE_19__ wqe; int * wq; TYPE_3__ sec_iparam; TYPE_7__* rnode; int reqtag; int indicator; int sec_len; int first_data_sge; int def_sgl; struct TYPE_27__* sec_hio; int tgt_wqe_timeout; void* quarantine; int state; } ;
typedef TYPE_5__ ocs_hw_io_t ;
struct TYPE_29__ {int indicator; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_19__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (int *) ;
 TYPE_5__* FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_7__*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_7__*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_13(ocs_hw_t *VAR_5)
{
 ocs_hw_io_t *VAR_6;
 ocs_hw_io_t *VAR_7;
 int VAR_8 = 0;

 while (!FUNC_7(&VAR_5->sec_hio_wait_list)) {
  uint16_t VAR_9;

  VAR_7 = FUNC_0(VAR_5);
  if (VAR_7 == ((void*)0)) {
   break;
  }

  VAR_6 = FUNC_8(&VAR_5->sec_hio_wait_list);
  FUNC_6(&VAR_5->io_inuse, VAR_6);
  VAR_6->state = VAR_1;
  VAR_6->sec_hio = VAR_7;


  if (VAR_6->xbusy) {
   VAR_7->quarantine = VAR_4;
  }

  VAR_9 = VAR_6->sec_iparam.fcp_tgt.flags;
  if (VAR_6->xbusy) {
   VAR_9 |= VAR_3;
  } else {
   VAR_9 &= ~VAR_3;
  }

  VAR_6->tgt_wqe_timeout = VAR_6->sec_iparam.fcp_tgt.timeout;


  if (VAR_6->xbusy) {
   if (FUNC_11(&VAR_5->sli, VAR_6->wqe.wqebuf, VAR_5->sli.config.wqe_size, &VAR_6->def_sgl,
    VAR_6->first_data_sge,
    VAR_6->sec_iparam.fcp_tgt.offset, VAR_6->sec_len, VAR_6->indicator, VAR_6->sec_hio->indicator,
    VAR_6->reqtag, VAR_2,
    VAR_6->sec_iparam.fcp_tgt.ox_id, VAR_6->rnode->indicator, VAR_6->rnode,
    VAR_9,
    VAR_6->sec_iparam.fcp_tgt.dif_oper, VAR_6->sec_iparam.fcp_tgt.blk_size, VAR_6->sec_iparam.fcp_tgt.cs_ctl, VAR_6->sec_iparam.fcp_tgt.app_id)) {
     FUNC_10(VAR_5->os, "TRECEIVE WQE error\n");
     break;
   }
  } else {
   if (FUNC_12(&VAR_5->sli, VAR_6->wqe.wqebuf, VAR_5->sli.config.wqe_size, &VAR_6->def_sgl,
    VAR_6->first_data_sge,
    VAR_6->sec_iparam.fcp_tgt.offset, VAR_6->sec_len, VAR_6->indicator,
    VAR_6->reqtag, VAR_2,
    VAR_6->sec_iparam.fcp_tgt.ox_id, VAR_6->rnode->indicator, VAR_6->rnode,
    VAR_9,
    VAR_6->sec_iparam.fcp_tgt.dif_oper, VAR_6->sec_iparam.fcp_tgt.blk_size,
    VAR_6->sec_iparam.fcp_tgt.cs_ctl, VAR_6->sec_iparam.fcp_tgt.app_id)) {
     FUNC_10(VAR_5->os, "TRECEIVE WQE error\n");
     break;
   }
  }

  if (VAR_6->wq == ((void*)0)) {
   VAR_6->wq = FUNC_4(VAR_5, VAR_6);
   FUNC_3(VAR_6->wq != ((void*)0));
  }
  VAR_6->xbusy = VAR_4;





  FUNC_2(VAR_5, VAR_6);
  VAR_8 = FUNC_1(VAR_6->wq, &VAR_6->wqe);
  if (VAR_8 >= 0) {

   VAR_8 = 0;
  } else {

   FUNC_9(VAR_5->os, "sli_queue_write failed: %d\n", VAR_8);
   VAR_6->xbusy = VAR_0;
   FUNC_5(VAR_5, VAR_6);
  }
 }
}
