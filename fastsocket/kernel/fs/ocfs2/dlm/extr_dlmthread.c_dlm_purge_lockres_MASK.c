
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dlm_lock_resource* name; struct dlm_lock_resource* len; } ;
struct dlm_lock_resource {int state; scalar_t__ owner; int wq; int spinlock; int purge; TYPE_1__ lockname; } ;
struct dlm_ctxt {scalar_t__ node_num; int purge_count; int spinlock; struct dlm_lock_resource* name; int purge_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 int FUNC_4 (struct dlm_lock_resource*,int ) ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct dlm_lock_resource*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,struct dlm_lock_resource*,struct dlm_lock_resource*,...) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct dlm_ctxt *VAR_3,
        struct dlm_lock_resource *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 FUNC_13(&VAR_4->spinlock);
 if (!FUNC_1(VAR_4)) {
  FUNC_11(0, "%s:%.*s: tried to purge but not unused\n",
       VAR_3->name, VAR_4->lockname.len, VAR_4->lockname.name);
  FUNC_2(VAR_4);
  FUNC_14(&VAR_4->spinlock);
  FUNC_0();
 }

 if (VAR_4->state & VAR_1) {
  FUNC_11(0, "%s:%.*s: Delay dropref as this lockres is "
       "being remastered\n", VAR_3->name, VAR_4->lockname.len,
       VAR_4->lockname.name);

  if (!FUNC_10(&VAR_4->purge)) {
   FUNC_9(&VAR_4->purge);
   FUNC_8(&VAR_4->purge, &VAR_3->purge_list);
  }
  FUNC_14(&VAR_4->spinlock);
  return 0;
 }

 VAR_5 = (VAR_4->owner == VAR_3->node_num);

 if (!VAR_5)
  VAR_4->state |= VAR_0;
 FUNC_14(&VAR_4->spinlock);

 FUNC_11(0, "purging lockres %.*s, master = %d\n", VAR_4->lockname.len,
      VAR_4->lockname.name, VAR_5);

 if (!VAR_5) {

  FUNC_14(&VAR_3->spinlock);

  FUNC_13(&VAR_4->spinlock);

  FUNC_4(VAR_4, VAR_2);
  FUNC_14(&VAR_4->spinlock);


  VAR_6 = FUNC_5(VAR_3, VAR_4);
  if (VAR_6 < 0) {
   FUNC_12(VAR_6);
   if (!FUNC_6(VAR_6))
    FUNC_0();
  }
  FUNC_11(0, "%s:%.*s: dlm_deref_lockres returned %d\n",
       VAR_3->name, VAR_4->lockname.len, VAR_4->lockname.name, VAR_6);
  FUNC_13(&VAR_3->spinlock);
 }

 FUNC_13(&VAR_4->spinlock);
 if (!FUNC_10(&VAR_4->purge)) {
  FUNC_11(0, "removing lockres %.*s:%p from purgelist, "
       "master = %d\n", VAR_4->lockname.len, VAR_4->lockname.name,
       VAR_4, VAR_5);
  FUNC_9(&VAR_4->purge);
  FUNC_14(&VAR_4->spinlock);
  FUNC_7(VAR_4);
  VAR_3->purge_count--;
 } else
  FUNC_14(&VAR_4->spinlock);

 FUNC_3(VAR_4);



 if (!VAR_5) {
  FUNC_13(&VAR_4->spinlock);
  VAR_4->state &= ~VAR_0;
  FUNC_14(&VAR_4->spinlock);
  FUNC_15(&VAR_4->wq);
 }
 return 0;
}
