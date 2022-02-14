
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int kthread_flags; int parked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 struct task_struct* VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*,int) ;

void
FUNC_6(void)
{
 struct task_struct *VAR_5;

 VAR_5 = VAR_4;
 FUNC_5(VAR_5, VAR_1 | VAR_3);
 while (FUNC_3()) {
  while ((FUNC_1(VAR_0,
      &VAR_5->kthread_flags) & VAR_0) == 0)
   FUNC_2(&VAR_5->parked);
  FUNC_4();
  FUNC_5(VAR_5, VAR_1 | VAR_3);
 }
 FUNC_0(VAR_0, &VAR_5->kthread_flags);
 FUNC_5(VAR_5, VAR_2);
}
