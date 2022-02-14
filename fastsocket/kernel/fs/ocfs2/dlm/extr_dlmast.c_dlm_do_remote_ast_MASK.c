
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lockstatus {int flags; } ;
struct dlm_lock_resource {int dummy; } ;
struct TYPE_2__ {scalar_t__ node; } ;
struct dlm_lock {TYPE_1__ ml; struct dlm_lockstatus* lksb; } ;
struct dlm_ctxt {scalar_t__ node_num; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*) ;
 int FUNC_3 () ;

int FUNC_4(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1,
        struct dlm_lock *VAR_2)
{
 int VAR_3;
 struct dlm_lockstatus *VAR_4;
 int VAR_5;

 FUNC_3();

 VAR_4 = VAR_2->lksb;
 FUNC_0(VAR_2->ml.node == VAR_0->node_num);

 VAR_5 = VAR_4->flags;
 FUNC_2(VAR_0, VAR_1, VAR_2);



 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
 return VAR_3;
}
