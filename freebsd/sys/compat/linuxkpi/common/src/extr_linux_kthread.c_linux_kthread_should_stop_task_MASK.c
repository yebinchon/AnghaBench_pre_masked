
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int kthread_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool
FUNC_1(struct task_struct *VAR_1)
{

 return (FUNC_0(&VAR_1->kthread_flags) & VAR_0);
}
