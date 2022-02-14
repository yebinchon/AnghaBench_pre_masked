
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lockstatus {struct dlm_lock* lockid; } ;
struct dlm_lock_resource {scalar_t__ owner; int spinlock; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct dlm_lock {TYPE_1__ ml; struct dlm_lock_resource* lockres; } ;
struct dlm_ctxt {scalar_t__ node_num; int ast_wq; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
typedef int (* dlm_astunlockfunc_t ) (void*,int) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock*) ;
 int FUNC_4 (struct dlm_lock*) ;
 int FUNC_5 (struct dlm_lock*) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_7 (struct dlm_lock_resource*) ;
 int FUNC_8 (struct dlm_lock_resource*) ;
 int FUNC_9 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,struct dlm_lockstatus*,int,int*) ;
 int FUNC_10 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,struct dlm_lockstatus*,int,int*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (int ,int ) ;

enum dlm_status FUNC_18(struct dlm_ctxt *VAR_11, struct dlm_lockstatus *VAR_12,
     int VAR_13, dlm_astunlockfunc_t *VAR_14, void *VAR_15)
{
 enum dlm_status VAR_16;
 struct dlm_lock_resource *VAR_17;
 struct dlm_lock *VAR_18 = ((void*)0);
 int VAR_19, VAR_20;

 FUNC_12();

 if (!VAR_12) {
  FUNC_1(VAR_0);
  return VAR_0;
 }

 if (VAR_13 & ~(VAR_7 | VAR_10 | VAR_9)) {
  FUNC_1(VAR_1);
  return VAR_1;
 }

 if ((VAR_13 & (VAR_10 | VAR_7)) == (VAR_10 | VAR_7)) {
  FUNC_11(0, "VALBLK given with CANCEL: ignoring VALBLK\n");
  VAR_13 &= ~VAR_10;
 }

 if (!VAR_12->lockid || !VAR_12->lockid->lockres) {
  FUNC_1(VAR_1);
  return VAR_1;
 }

 VAR_18 = VAR_12->lockid;
 FUNC_0(!VAR_18);
 FUNC_4(VAR_18);

 VAR_17 = VAR_18->lockres;
 FUNC_0(!VAR_17);
 FUNC_7(VAR_17);
retry:
 VAR_19 = 0;

 FUNC_11(0, "lock=%p res=%p\n", VAR_18, VAR_17);

 FUNC_14(&VAR_17->spinlock);
 VAR_20 = (VAR_17->owner == VAR_11->node_num);
 if (VAR_13 & VAR_10 && VAR_18->ml.type != VAR_8)
  VAR_13 &= ~VAR_10;
 FUNC_15(&VAR_17->spinlock);

 if (VAR_20) {
  VAR_16 = FUNC_9(VAR_11, VAR_17, VAR_18, VAR_12, VAR_13,
       &VAR_19);
  FUNC_11(0, "done calling dlmunlock_master: returned %d, "
       "call_ast is %d\n", VAR_16, VAR_19);
 } else {
  VAR_16 = FUNC_10(VAR_11, VAR_17, VAR_18, VAR_12, VAR_13,
       &VAR_19);
  FUNC_11(0, "done calling dlmunlock_remote: returned %d, "
       "call_ast is %d\n", VAR_16, VAR_19);
 }

 if (VAR_16 == VAR_6 ||
     VAR_16 == VAR_4 ||
     VAR_16 == VAR_3) {
  FUNC_13(50);

  FUNC_11(0, "retrying unlock due to pending recovery/"
       "migration/in-progress\n");
  goto retry;
 }

 if (VAR_19) {
  FUNC_11(0, "calling unlockast(%p, %d)\n", VAR_15, VAR_16);
  if (VAR_20) {






   FUNC_2(VAR_11, ((void*)0));
   FUNC_17(VAR_11->ast_wq,
       FUNC_3(VAR_11, VAR_18));
  }
  (*VAR_14)(VAR_15, VAR_16);
 }

 if (VAR_16 == VAR_2)
  VAR_16 = VAR_5;

 if (VAR_16 == VAR_5) {
  FUNC_11(0, "kicking the thread\n");
  FUNC_2(VAR_11, VAR_17);
 } else
  FUNC_1(VAR_16);

 FUNC_6(VAR_11, VAR_17);
 FUNC_8(VAR_17);
 FUNC_5(VAR_18);

 FUNC_11(0, "returning status=%d!\n", VAR_16);
 return VAR_16;
}
