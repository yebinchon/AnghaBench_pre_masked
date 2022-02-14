
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef void* uint32_t ;
typedef int sli4_abort_type_e ;
struct TYPE_20__ {int wqe_size; } ;
struct TYPE_24__ {TYPE_1__ config; } ;
struct TYPE_21__ {int io_abort_lock; int * os; TYPE_5__ sli; int state; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_19__ {int abort_wqe_submit_needed; int wqebuf; int abort_reqtag; void* id; void* send_abts; int link; } ;
struct TYPE_22__ {int abort_in_progress; int ref; TYPE_17__ wqe; TYPE_11__* wq; int abort_reqtag; void* indicator; void* abort_arg; void* abort_done; int reqtag; } ;
typedef TYPE_3__ ocs_hw_io_t ;
struct TYPE_23__ {int instance_index; } ;
typedef TYPE_4__ hw_wq_callback_t ;
struct TYPE_18__ {int queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_11__*,TYPE_17__*) ;
 int FUNC_1 (int ) ;
 TYPE_11__* FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,void*,int ) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,char*,void*,...) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_5__*,int ,int ,int ,void*,void*,void*,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

ocs_hw_rtn_e
FUNC_16(ocs_hw_t *VAR_11, ocs_hw_io_t *VAR_12, uint32_t VAR_13, void *VAR_14, void *VAR_15)
{
 sli4_abort_type_e VAR_16 = VAR_7;
 uint32_t VAR_17 = 0, VAR_18 = 0;
 ocs_hw_rtn_e VAR_19 = VAR_4;
 hw_wq_callback_t *VAR_20;

 if (!VAR_11 || !VAR_12) {
  FUNC_8(VAR_11 ? VAR_11->os : ((void*)0),
       "bad parameter hw=%p io=%p\n",
       VAR_11, VAR_12);
  return VAR_0;
 }

 if (VAR_11->state != VAR_5) {
  FUNC_8(VAR_11->os, "cannot send IO abort, HW state=%d\n",
       VAR_11->state);
  return VAR_0;
 }


 if (FUNC_10(&VAR_12->ref) == 0) {

  FUNC_9(VAR_11 ? VAR_11->os : ((void*)0),
    "io not active xri=0x%x tag=0x%x\n",
    VAR_12->indicator, VAR_12->reqtag);
  return VAR_2;
 }



 if (VAR_12->wq == ((void*)0)) {
  FUNC_9(VAR_11->os, "io_to_abort xri=0x%x not active on WQ\n",
    VAR_12->indicator);
  FUNC_11(&VAR_12->ref);
  return VAR_2;
 }


 FUNC_6(&VAR_11->io_abort_lock);
  if (VAR_12->abort_in_progress) {
   FUNC_12(&VAR_11->io_abort_lock);
   FUNC_11(&VAR_12->ref);
   FUNC_7(VAR_11 ? VAR_11->os : ((void*)0),
    "io already being aborted xri=0x%x tag=0x%x\n",
    VAR_12->indicator, VAR_12->reqtag);
   return VAR_1;
  }





  VAR_12->abort_in_progress = 1;
 FUNC_12(&VAR_11->io_abort_lock);
 VAR_12->abort_done = VAR_14;
 VAR_12->abort_arg = VAR_15;

 VAR_16 = VAR_8;
 VAR_17 = VAR_12->indicator;


 VAR_20 = FUNC_3(VAR_11, VAR_10, VAR_12);
 if (VAR_20 == ((void*)0)) {
  FUNC_8(VAR_11->os, "can't allocate request tag\n");
  return VAR_3;
 }
 VAR_12->abort_reqtag = VAR_20->instance_index;





 if (VAR_12->wq != ((void*)0)) {
  FUNC_14(VAR_12->wq->queue);
   if (FUNC_5(&VAR_12->wqe.link)) {
    VAR_12->wqe.abort_wqe_submit_needed = 1;
    VAR_12->wqe.send_abts = VAR_13;
    VAR_12->wqe.id = VAR_17;
    VAR_12->wqe.abort_reqtag = VAR_12->abort_reqtag;
    FUNC_15(VAR_12->wq->queue);
    return 0;
  }
  FUNC_15(VAR_12->wq->queue);
 }

 if (FUNC_13(&VAR_11->sli, VAR_12->wqe.wqebuf, VAR_11->sli.config.wqe_size, VAR_16, VAR_13, VAR_17, VAR_18,
     VAR_12->abort_reqtag, VAR_6)) {
  FUNC_8(VAR_11->os, "ABORT WQE error\n");
  VAR_12->abort_reqtag = VAR_9;
  FUNC_4(VAR_11, VAR_20);
  VAR_19 = VAR_0;
 }

 if (VAR_4 == VAR_19) {
  if (VAR_12->wq == ((void*)0)) {
   VAR_12->wq = FUNC_2(VAR_11, VAR_12);
   FUNC_1(VAR_12->wq != ((void*)0));
  }




  VAR_19 = FUNC_0(VAR_12->wq, &VAR_12->wqe);
  if (VAR_19 > 0) {

   VAR_19 = 0;

  }
 }

 if (VAR_4 != VAR_19) {
  FUNC_6(&VAR_11->io_abort_lock);
   VAR_12->abort_in_progress = 0;
  FUNC_12(&VAR_11->io_abort_lock);
  FUNC_11(&VAR_12->ref);
 }
 return VAR_19;
}
