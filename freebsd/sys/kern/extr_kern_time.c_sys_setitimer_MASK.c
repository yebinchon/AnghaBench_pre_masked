
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct setitimer_args {int * oitv; int which; int * itv; } ;
struct itimerval {int dummy; } ;
struct getitimer_args {int dummy; } ;


 int FUNC_0 (int *,struct itimerval*,int) ;
 int FUNC_1 (struct itimerval*,int *,int) ;
 int FUNC_2 (struct thread*,int ,struct itimerval*,struct itimerval*) ;
 int FUNC_3 (struct thread*,struct getitimer_args*) ;

int
FUNC_4(struct thread *VAR_0, struct setitimer_args *VAR_1)
{
 struct itimerval VAR_2, VAR_3;
 int VAR_4;

 if (VAR_1->itv == ((void*)0)) {
  VAR_1->itv = VAR_1->oitv;
  return (FUNC_3(VAR_0, (struct getitimer_args *)VAR_1));
 }

 if ((VAR_4 = FUNC_0(VAR_1->itv, &VAR_2, sizeof(struct itimerval))))
  return (VAR_4);
 VAR_4 = FUNC_2(VAR_0, VAR_1->which, &VAR_2, &VAR_3);
 if (VAR_4 != 0 || VAR_1->oitv == ((void*)0))
  return (VAR_4);
 return (FUNC_1(&VAR_3, VAR_1->oitv, sizeof(struct itimerval)));
}
