
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct itimerval {int dummy; } ;
struct getitimer_args {int itv; int which; } ;


 int FUNC_0 (struct itimerval*,int ,int) ;
 int FUNC_1 (struct thread*,int ,struct itimerval*) ;

int
FUNC_2(struct thread *VAR_0, struct getitimer_args *VAR_1)
{
 struct itimerval VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->which, &VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);
 return (FUNC_0(&VAR_2, VAR_1->itv, sizeof (struct itimerval)));
}
