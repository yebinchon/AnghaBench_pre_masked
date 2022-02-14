
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int kthread_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct task_struct*,int ) ;

void
FUNC_3(struct task_struct *VAR_3)
{

 FUNC_0(VAR_1, &VAR_3->kthread_flags);
 if ((FUNC_1(VAR_0, &VAR_3->kthread_flags) &
     VAR_0) != 0)
  FUNC_2(VAR_3, VAR_2);
}
