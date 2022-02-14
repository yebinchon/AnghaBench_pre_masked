
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct linux_sigsuspend_args {int mask; } ;
typedef int sigset_t ;
struct TYPE_4__ {int __mask; } ;
typedef TYPE_1__ l_sigset_t ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

int
FUNC_3(struct thread *VAR_0, struct linux_sigsuspend_args *VAR_1)
{
 sigset_t VAR_2;
 l_sigset_t VAR_3;

 FUNC_0(VAR_3);
 VAR_3.__mask = VAR_1->mask;
 FUNC_2(&VAR_3, &VAR_2);
 return (FUNC_1(VAR_0, VAR_2));
}
