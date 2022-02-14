
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int wq; int spinlock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(int VAR_1, void *VAR_2, void *VAR_3)
{
 struct dlm_lock_resource *VAR_4 = (struct dlm_lock_resource *)VAR_3;

 if (VAR_3) {
  FUNC_1(&VAR_4->spinlock);
  VAR_4->state &= ~VAR_0;
  FUNC_2(&VAR_4->spinlock);
  FUNC_3(&VAR_4->wq);
  FUNC_0(VAR_4);
 }
 return;
}
