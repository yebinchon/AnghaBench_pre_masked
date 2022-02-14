
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; } ;
struct linux_getppid_args {int dummy; } ;


 int FUNC_0 (struct thread*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_getppid_args *VAR_1)
{

 VAR_0->td_retval[0] = FUNC_0(VAR_0);
 return (0);
}
