
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; } ;
struct proc {int p_flag; } ;


 int FUNC_0 (struct proc*) ;
 int VAR_0 ;
 struct proc* FUNC_1 (int ) ;

bool
FUNC_2(struct task_struct *VAR_1)
{
 struct proc *VAR_2;
 bool VAR_3;

 VAR_3 = 0;
 VAR_2 = FUNC_1(VAR_1->pid);
 if (VAR_2 != ((void*)0)) {
  if ((VAR_2->p_flag & VAR_0) != 0)
   VAR_3 = 1;
  FUNC_0(VAR_2);
 }
 return (VAR_3);
}
