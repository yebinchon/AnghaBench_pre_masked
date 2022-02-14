
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* u8 ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int migration_pending; int state; int spinlock; TYPE_1__ lockname; } ;
struct dlm_ctxt {int spinlock; int domain_map; int migration_wq; int ast_wq; int node_num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct dlm_ctxt *VAR_5,
           struct dlm_lock_resource *VAR_6,
           u8 VAR_7)
{
 int VAR_8 = 0;

 FUNC_6(0, "dlm_mark_lockres_migrating: %.*s, from %u to %u\n",
        VAR_6->lockname.len, VAR_6->lockname.name, VAR_5->node_num,
        VAR_7);


 FUNC_8(&VAR_6->spinlock);
 FUNC_0(VAR_6->migration_pending);
 VAR_6->migration_pending = 1;


 FUNC_1(VAR_6);
 FUNC_9(&VAR_6->spinlock);


 FUNC_2(VAR_5, VAR_6);


 FUNC_8(&VAR_6->spinlock);
 FUNC_0(VAR_6->state & VAR_0);
 VAR_6->state |= VAR_0;
 FUNC_9(&VAR_6->spinlock);

 FUNC_11(VAR_5->ast_wq, !FUNC_3(VAR_5, VAR_6));
 FUNC_4(VAR_5, VAR_6);

 FUNC_6(0, "about to wait on migration_wq, dirty=%s\n",
        VAR_6->state & VAR_1 ? "yes" : "no");



again:
 VAR_8 = FUNC_12(VAR_5->migration_wq,
     FUNC_5(VAR_5, VAR_6, VAR_7),
     FUNC_7(1000));
 if (VAR_8 < 0) {
  FUNC_6(0, "woken again: migrating? %s, dead? %s\n",
         VAR_6->state & VAR_2 ? "yes":"no",
         FUNC_10(VAR_7, VAR_5->domain_map) ? "no":"yes");
 } else {
  FUNC_6(0, "all is well: migrating? %s, dead? %s\n",
         VAR_6->state & VAR_2 ? "yes":"no",
         FUNC_10(VAR_7, VAR_5->domain_map) ? "no":"yes");
 }
 if (!FUNC_5(VAR_5, VAR_6, VAR_7)) {
  FUNC_6(0, "trying again...\n");
  goto again;
 }


 FUNC_8(&VAR_6->spinlock);
 FUNC_0(!(VAR_6->state & VAR_0));
 FUNC_0(!(VAR_6->state & VAR_2));
 VAR_6->state &= ~VAR_0;
 FUNC_9(&VAR_6->spinlock);


 FUNC_8(&VAR_5->spinlock);
 if (!FUNC_10(VAR_7, VAR_5->domain_map)) {
  FUNC_6(VAR_4, "aha. migration target %u just went down\n",
       VAR_7);
  VAR_8 = -VAR_3;
 }
 FUNC_9(&VAR_5->spinlock);
 return VAR_8;
}
