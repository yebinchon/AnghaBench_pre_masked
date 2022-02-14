
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct task_struct* parent; int ptraced; int ptrace_entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct task_struct *VAR_0, struct task_struct *VAR_1)
{
 FUNC_0(!FUNC_2(&VAR_0->ptrace_entry));
 FUNC_1(&VAR_0->ptrace_entry, &VAR_1->ptraced);
 VAR_0->parent = VAR_1;
}
