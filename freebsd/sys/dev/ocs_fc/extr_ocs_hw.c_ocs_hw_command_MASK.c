
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {void* virt; } ;
struct TYPE_17__ {TYPE_1__ bmbx; } ;
struct TYPE_15__ {int expiration_logged; scalar_t__ state; int cmd_lock; int cmd_pending; int os; TYPE_4__ sli; TYPE_6__* mq; int watchdog_timeout; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_16__ {TYPE_2__* ctx; void* buf; void* arg; void* cb; } ;
typedef TYPE_3__ ocs_command_ctx_t ;
struct TYPE_18__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_3__* FUNC_6 (int ,int,int) ;
 int FUNC_7 (void*,void*,int ) ;
 int FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_4__*,int ) ;

ocs_hw_rtn_e
FUNC_14(ocs_hw_t *VAR_12, uint8_t *VAR_13, uint32_t VAR_14, void *VAR_15, void *VAR_16)
{
 ocs_hw_rtn_e VAR_17 = VAR_2;





 if (FUNC_11(&VAR_12->sli) > 0) {
  uint32_t VAR_18 = FUNC_13(&VAR_12->sli, VAR_9);
  uint32_t VAR_19 = FUNC_13(&VAR_12->sli, VAR_10);
  if (VAR_12->expiration_logged == 0 && VAR_18 == 0x2 && VAR_19 == 0x10) {
   VAR_12->expiration_logged = 1;
   FUNC_4(VAR_12->os,"Emulex: Heartbeat expired after %d seconds\n",
     VAR_12->watchdog_timeout);
  }
  FUNC_4(VAR_12->os, "Chip is in an error state - reset needed\n");
  FUNC_4(VAR_12->os, "status=%#x error1=%#x error2=%#x\n",
   FUNC_13(&VAR_12->sli, VAR_11),
   VAR_18, VAR_19);

  return VAR_2;
 }

 if (VAR_1 == VAR_14) {

  FUNC_3(&VAR_12->cmd_lock);
  if (VAR_12->mq->length && !FUNC_12(&VAR_12->sli, VAR_12->mq)) {





   VAR_17 = VAR_2;
  } else {
   void *VAR_20 = VAR_12->sli.bmbx.virt;

   FUNC_8(VAR_20, 0, VAR_8);
   FUNC_7(VAR_20, VAR_13, VAR_8);

   if (FUNC_10(&VAR_12->sli) == 0) {
    VAR_17 = VAR_4;
    FUNC_7(VAR_13, VAR_20, VAR_8);
   }
  }
  FUNC_9(&VAR_12->cmd_lock);
 } else if (VAR_0 == VAR_14) {
  ocs_command_ctx_t *VAR_21 = ((void*)0);

  VAR_21 = FUNC_6(VAR_12->os, sizeof(ocs_command_ctx_t), VAR_7 | VAR_6);
  if (!VAR_21) {
   FUNC_5(VAR_12->os, "can't allocate command context\n");
   return VAR_3;
  }

  if (VAR_12->state != VAR_5) {
   FUNC_5(VAR_12->os, "Can't send command, HW state=%d\n", VAR_12->state);
   FUNC_0(VAR_12->os, VAR_21, sizeof(*VAR_21));
   return VAR_2;
  }

  if (VAR_15) {
   VAR_21->cb = VAR_15;
   VAR_21->arg = VAR_16;
  }
  VAR_21->buf = VAR_13;
  VAR_21->ctx = VAR_12;

  FUNC_3(&VAR_12->cmd_lock);


   FUNC_2(&VAR_12->cmd_pending, VAR_21);


   if (FUNC_1(VAR_12) == 0) {
    VAR_17 = VAR_4;
   }

  FUNC_9(&VAR_12->cmd_lock);
 }

 return VAR_17;
}
