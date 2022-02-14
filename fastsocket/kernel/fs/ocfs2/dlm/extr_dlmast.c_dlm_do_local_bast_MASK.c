
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lock_resource {int dummy; } ;
struct TYPE_2__ {scalar_t__ node; } ;
struct dlm_lock {int astdata; TYPE_1__ ml; int (* bast ) (int ,int) ;} ;
struct dlm_ctxt {scalar_t__ node_num; } ;
typedef int (* dlm_bastlockfunc_t ) (int ,int) ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1,
         struct dlm_lock *VAR_2, int VAR_3)
{
 dlm_bastlockfunc_t *VAR_4 = &VAR_2->bast;

 FUNC_1();
 FUNC_0(VAR_2->ml.node != VAR_0->node_num);

 (*VAR_4)(VAR_2->astdata, VAR_3);
}
