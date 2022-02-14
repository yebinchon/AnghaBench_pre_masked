
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int spinlock; } ;
struct dlm_ctxt {int dlm_thread_wq; int spinlock; } ;


 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_1 (char*,struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1)
{
 FUNC_1("dlm=%p, res=%p\n", VAR_0, VAR_1);
 if (VAR_1) {
  FUNC_2(&VAR_0->spinlock);
  FUNC_2(&VAR_1->spinlock);
  FUNC_0(VAR_0, VAR_1);
  FUNC_3(&VAR_1->spinlock);
  FUNC_3(&VAR_0->spinlock);
 }
 FUNC_4(&VAR_0->dlm_thread_wq);
}
