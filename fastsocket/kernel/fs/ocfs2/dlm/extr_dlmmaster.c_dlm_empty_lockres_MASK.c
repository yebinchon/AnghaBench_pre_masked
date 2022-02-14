
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {scalar_t__ owner; TYPE_1__ lockname; int spinlock; } ;
struct dlm_ctxt {scalar_t__ node_num; int spinlock; int name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,int*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*,int ) ;
 int FUNC_4 (int ,char*,int ,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dlm_ctxt *VAR_4, struct dlm_lock_resource *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_6(&VAR_5->spinlock);
 if (VAR_5->owner != VAR_4->node_num) {
  if (!FUNC_1(VAR_5)) {
   FUNC_4(VAR_2, "%s:%.*s: this node is not master, "
        "trying to free this but locks remain\n",
        VAR_4->name, VAR_5->lockname.len, VAR_5->lockname.name);
  }
  FUNC_7(&VAR_5->spinlock);
  goto leave;
 }


 VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_8);
 if (VAR_6 >= 0 && VAR_8 == 0) {
  FUNC_7(&VAR_5->spinlock);
  goto leave;
 }
 FUNC_7(&VAR_5->spinlock);


 FUNC_7(&VAR_4->spinlock);
 VAR_7 = 1;
 while (1) {
  VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_3);
  if (VAR_6 >= 0)
   break;
  if (VAR_6 == -VAR_1) {
   FUNC_4(VAR_2, "lockres %.*s still has local locks!\n",
         VAR_5->lockname.len, VAR_5->lockname.name);
   FUNC_0();
  }

  FUNC_4(0, "lockres %.*s: migrate failed, "
       "retrying\n", VAR_5->lockname.len,
       VAR_5->lockname.name);
  FUNC_5(VAR_0);
 }
 FUNC_6(&VAR_4->spinlock);
leave:
 return VAR_7;
}
