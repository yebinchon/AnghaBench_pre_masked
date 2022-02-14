
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_17__ {int wqe_size; } ;
struct TYPE_20__ {TYPE_1__ config; } ;
struct TYPE_18__ {int os; int * tcmd_wq_submit; int io_port_dnrx; int auto_xfer_rdy_buf_pool; TYPE_4__ sli; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_16__ {int wqebuf; } ;
struct TYPE_19__ {TYPE_14__ wqe; TYPE_10__* wq; int * axr_buf; int indicator; int type; scalar_t__ auto_xfer_rdy_dnrx; } ;
typedef TYPE_3__ ocs_hw_io_t ;
typedef int int32_t ;
struct TYPE_15__ {size_t instance; int use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_10__*,TYPE_14__*) ;
 int FUNC_2 (int ) ;
 TYPE_10__* FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ,int ,int ,int ,int ) ;

int32_t
FUNC_9( ocs_hw_t *VAR_3, ocs_hw_io_t *VAR_4 )
{
 int32_t VAR_5 = 0;

 VAR_5 = FUNC_4(VAR_3, VAR_4, 1);
 if (VAR_5) {
  FUNC_5(&VAR_3->io_port_dnrx, VAR_4);
  VAR_5 = -1;
  goto exit_ocs_hw_reque_xri;
 }

 VAR_4->auto_xfer_rdy_dnrx = 0;
 VAR_4->type = VAR_0;
 if (FUNC_8(&VAR_3->sli, VAR_4->wqe.wqebuf, VAR_3->sli.config.wqe_size, VAR_4->indicator, VAR_1, VAR_2)) {

  FUNC_7(VAR_3->auto_xfer_rdy_buf_pool, VAR_4->axr_buf);
  VAR_4->axr_buf = ((void*)0);

  FUNC_6(VAR_3->os, "requeue_xri WQE error\n");
  FUNC_5(&VAR_3->io_port_dnrx, VAR_4);

  VAR_5 = -1;
  goto exit_ocs_hw_reque_xri;
 }

 if (VAR_4->wq == ((void*)0)) {
  VAR_4->wq = FUNC_3(VAR_3, VAR_4);
  FUNC_2(VAR_4->wq != ((void*)0));
 }





 FUNC_0(VAR_3->tcmd_wq_submit[VAR_4->wq->instance]++);
 FUNC_0(VAR_4->wq->use_count++);

 VAR_5 = FUNC_1(VAR_4->wq, &VAR_4->wqe);
 if (VAR_5 < 0) {
  FUNC_6(VAR_3->os, "sli_queue_write reque xri failed: %d\n", VAR_5);
  VAR_5 = -1;
 }

exit_ocs_hw_reque_xri:
 return 0;
}
