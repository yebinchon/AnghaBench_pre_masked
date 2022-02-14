
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigsuspend_args {int sigmask; } ;
typedef int sigset_t ;
typedef int mask ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct thread*,int ) ;

int
FUNC_2(struct thread *VAR_0, struct sigsuspend_args *VAR_1)
{
 sigset_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->sigmask, &VAR_2, sizeof(VAR_2));
 if (VAR_3)
  return (VAR_3);
 return (FUNC_1(VAR_0, VAR_2));
}
