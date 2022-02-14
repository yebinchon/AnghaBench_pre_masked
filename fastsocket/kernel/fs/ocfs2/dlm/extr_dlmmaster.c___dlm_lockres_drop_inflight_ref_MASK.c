
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {scalar_t__ inflight_locks; int wq; TYPE_1__ lockname; int spinlock; } ;
struct dlm_ctxt {int node_num; int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct dlm_lock_resource*) ;
 int FUNC_3 (int ,char*,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dlm_ctxt *VAR_0,
       struct dlm_lock_resource *VAR_1,
       const char *VAR_2,
       int VAR_3)
{
 FUNC_1(&VAR_1->spinlock);

 FUNC_0(VAR_1->inflight_locks == 0);
 VAR_1->inflight_locks--;
 FUNC_3(0, "%s:%.*s: inflight--: now %u\n",
      VAR_0->name, VAR_1->lockname.len, VAR_1->lockname.name,
      VAR_1->inflight_locks);
 if (VAR_1->inflight_locks == 0)
  FUNC_2(VAR_0->node_num, VAR_1);
 FUNC_4(&VAR_1->wq);
}
