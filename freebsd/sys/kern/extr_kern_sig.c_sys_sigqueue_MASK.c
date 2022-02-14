
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sigval {int sival_ptr; } ;
struct thread {int dummy; } ;
struct sigqueue_args {int signum; int pid; int value; } ;


 int FUNC_0 (struct thread*,int ,int ,union sigval*) ;

int
FUNC_1(struct thread *VAR_0, struct sigqueue_args *VAR_1)
{
 union sigval VAR_2;

 VAR_2.sival_ptr = VAR_1->value;

 return (FUNC_0(VAR_0, VAR_1->pid, VAR_1->signum, &VAR_2));
}
