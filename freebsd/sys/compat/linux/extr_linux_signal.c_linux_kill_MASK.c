
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_kill_args {scalar_t__ signum; int pid; } ;
struct kill_args {int pid; scalar_t__ signum; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct thread*,struct kill_args*) ;

int
FUNC_3(struct thread *VAR_1, struct linux_kill_args *VAR_2)
{
 struct kill_args VAR_3;







 if (!FUNC_0(VAR_2->signum) && VAR_2->signum != 0)
  return (VAR_0);

 if (VAR_2->signum > 0)
  VAR_3.signum = FUNC_1(VAR_2->signum);
 else
  VAR_3.signum = 0;

 VAR_3.pid = VAR_2->pid;
 return (FUNC_2(VAR_1, &VAR_3));
}
