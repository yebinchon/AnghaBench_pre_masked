
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int ptrace_entry; int real_parent; int parent; scalar_t__ ptrace; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_0)
{
 FUNC_0(!VAR_0->ptrace);

 VAR_0->ptrace = 0;
 VAR_0->parent = VAR_0->real_parent;
 FUNC_1(&VAR_0->ptrace_entry);

 if (FUNC_3(VAR_0))
  FUNC_2(VAR_0);
}
