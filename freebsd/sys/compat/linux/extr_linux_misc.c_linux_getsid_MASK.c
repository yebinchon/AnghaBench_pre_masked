
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_getsid_args {int pid; } ;
struct getsid_args {int pid; } ;


 int FUNC_0 (struct thread*,struct getsid_args*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_getsid_args *VAR_1)
{
 struct getsid_args VAR_2;

 VAR_2.pid = VAR_1->pid;
 return (FUNC_0(VAR_0, &VAR_2));
}
