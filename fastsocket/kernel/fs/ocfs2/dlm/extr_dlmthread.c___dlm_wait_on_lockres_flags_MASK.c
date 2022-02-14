
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int state; int wq; int spinlock; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

void FUNC_9(struct dlm_lock_resource *VAR_4, int VAR_5)
{
 FUNC_0(VAR_3, VAR_2);

 FUNC_3(&VAR_4->spinlock);

 FUNC_2(&VAR_4->wq, &VAR_3);
repeat:
 FUNC_6(VAR_1);
 if (VAR_4->state & VAR_5) {
  FUNC_8(&VAR_4->spinlock);
  FUNC_5();
  FUNC_7(&VAR_4->spinlock);
  goto repeat;
 }
 FUNC_4(&VAR_4->wq, &VAR_3);
 FUNC_1(VAR_0);
}
