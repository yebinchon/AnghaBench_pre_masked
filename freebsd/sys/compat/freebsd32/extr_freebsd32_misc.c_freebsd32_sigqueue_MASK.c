
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sigval {int sival_int; } ;
typedef int sv ;
struct thread {int dummy; } ;
struct freebsd32_sigqueue_args {int signum; int pid; int value; } ;


 int FUNC_0 (union sigval*,int) ;
 int FUNC_1 (struct thread*,int ,int ,union sigval*) ;

int
FUNC_2(struct thread *VAR_0, struct freebsd32_sigqueue_args *VAR_1)
{
 union sigval VAR_2;
 FUNC_0(&VAR_2, sizeof(VAR_2));
 VAR_2.sival_int = VAR_1->value;

 return (FUNC_1(VAR_0, VAR_1->pid, VAR_1->signum, &VAR_2));
}
