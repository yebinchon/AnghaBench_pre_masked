
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int name; } ;
struct dlm_lock_resource {int owner; int wq; int spinlock; int granted; TYPE_2__ lockname; int state; int blocked; } ;
struct TYPE_3__ {int type; } ;
struct dlm_lock {int lock_pending; int list; TYPE_1__ ml; } ;
struct dlm_ctxt {int node_num; int name; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dlm_lock*) ;
 int FUNC_4 (struct dlm_lock*) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_lock_resource*,struct dlm_lock*) ;
 int FUNC_7 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*,int ,int,...) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static enum dlm_status FUNC_15(struct dlm_ctxt *VAR_5,
          struct dlm_lock_resource *VAR_6,
          struct dlm_lock *VAR_7, int VAR_8)
{
 enum dlm_status VAR_9 = VAR_0;
 int VAR_10 = 1;

 FUNC_11("type=%d\n", VAR_7->ml.type);
 FUNC_10(0, "lockres %.*s, flags = 0x%x\n", VAR_6->lockname.len,
      VAR_6->lockname.name, VAR_8);

 FUNC_12(&VAR_6->spinlock);


 FUNC_0(VAR_6);
 VAR_6->state |= VAR_1;


 FUNC_3(VAR_7);
 FUNC_8(&VAR_7->list, &VAR_6->blocked);
 VAR_7->lock_pending = 1;
 FUNC_13(&VAR_6->spinlock);



 VAR_9 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_12(&VAR_6->spinlock);
 VAR_6->state &= ~VAR_1;
 VAR_7->lock_pending = 0;
 if (VAR_9 != VAR_2) {
  if (VAR_9 == VAR_4 &&
      FUNC_2(VAR_6->lockname.name,
      VAR_6->lockname.len)) {



   FUNC_10(0, "%s: recovery lock was owned by "
        "dead node %u, remaster it now.\n",
        VAR_5->name, VAR_6->owner);
  } else if (VAR_9 != VAR_3) {






   VAR_10 = 0;
   FUNC_1(VAR_9);
  }
  FUNC_6(VAR_6, VAR_7);
  FUNC_4(VAR_7);
 } else if (FUNC_2(VAR_6->lockname.name,
     VAR_6->lockname.len)) {




  FUNC_10(0, "%s: $RECOVERY lock for this node (%u) is "
       "mastered by %u; got lock, manually granting (no ast)\n",
       VAR_5->name, VAR_5->node_num, VAR_6->owner);
  FUNC_9(&VAR_7->list, &VAR_6->granted);
 }
 FUNC_13(&VAR_6->spinlock);

 if (VAR_10)
  FUNC_5(VAR_5, VAR_6);

 FUNC_14(&VAR_6->wq);
 return VAR_9;
}
