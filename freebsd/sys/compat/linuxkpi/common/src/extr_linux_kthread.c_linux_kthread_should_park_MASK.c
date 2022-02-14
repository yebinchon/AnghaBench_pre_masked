
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int kthread_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct task_struct* VAR_1 ;

bool
FUNC_1(void)
{
 struct task_struct *VAR_2;

 VAR_2 = VAR_1;
 return (FUNC_0(&VAR_2->kthread_flags) & VAR_0);
}
