
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__* td_retval; } ;
struct linux_getpriority_args {int who; int which; } ;
struct getpriority_args {int who; int which; } ;


 int FUNC_0 (struct thread*,struct getpriority_args*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_getpriority_args *VAR_1)
{
 struct getpriority_args VAR_2;
 int VAR_3;

 VAR_2.which = VAR_1->which;
 VAR_2.who = VAR_1->who;
 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 VAR_0->td_retval[0] = 20 - VAR_0->td_retval[0];
 return (VAR_3);
}
