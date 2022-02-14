
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int purge; int owner; TYPE_1__ lockname; int last_used; int spinlock; } ;
struct dlm_ctxt {int purge_count; int purge_list; int spinlock; } ;


 scalar_t__ FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 int FUNC_3 (struct dlm_lock_resource*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ,int ,struct dlm_lock_resource*,...) ;
 int FUNC_8 (char*,int ,int ) ;

void FUNC_9(struct dlm_ctxt *VAR_1,
         struct dlm_lock_resource *VAR_2)
{
 FUNC_8("%.*s\n", VAR_2->lockname.len, VAR_2->lockname.name);

 FUNC_1(&VAR_1->spinlock);
 FUNC_1(&VAR_2->spinlock);

 if (FUNC_0(VAR_2)){
  if (FUNC_6(&VAR_2->purge)) {
   FUNC_7(0, "putting lockres %.*s:%p onto purge list\n",
        VAR_2->lockname.len, VAR_2->lockname.name, VAR_2);

   VAR_2->last_used = VAR_0;
   FUNC_2(VAR_2);
   FUNC_4(&VAR_2->purge, &VAR_1->purge_list);
   VAR_1->purge_count++;
  }
 } else if (!FUNC_6(&VAR_2->purge)) {
  FUNC_7(0, "removing lockres %.*s:%p from purge list, owner=%u\n",
       VAR_2->lockname.len, VAR_2->lockname.name, VAR_2, VAR_2->owner);

  FUNC_5(&VAR_2->purge);
  FUNC_3(VAR_2);
  VAR_1->purge_count--;
 }
}
