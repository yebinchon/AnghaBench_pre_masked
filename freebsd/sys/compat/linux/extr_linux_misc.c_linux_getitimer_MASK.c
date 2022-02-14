
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_getitimer_args {int itv; int which; } ;
struct l_itimerval {int dummy; } ;
struct itimerval {int dummy; } ;
typedef int ls ;


 int FUNC_0 (struct l_itimerval*,struct itimerval*) ;
 int FUNC_1 (struct l_itimerval*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct itimerval*) ;

int
FUNC_3(struct thread *VAR_0, struct linux_getitimer_args *VAR_1)
{
 int VAR_2;
 struct l_itimerval VAR_3;
 struct itimerval VAR_4;

 VAR_2 = FUNC_2(VAR_0, VAR_1->which, &VAR_4);
 if (VAR_2 != 0)
  return (VAR_2);
 FUNC_0(&VAR_3, &VAR_4);
 return (FUNC_1(&VAR_3, VAR_1->itv, sizeof(VAR_3)));
}
