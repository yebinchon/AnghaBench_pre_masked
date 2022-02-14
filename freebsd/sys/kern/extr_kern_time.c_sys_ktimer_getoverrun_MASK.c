
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ktimer_getoverrun_args {int timerid; } ;


 int FUNC_0 (struct thread*,int ) ;

int
FUNC_1(struct thread *VAR_0, struct ktimer_getoverrun_args *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->timerid));
}
