
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct itimerval32 {int dummy; } ;
struct itimerval {int dummy; } ;
struct freebsd32_getitimer_args {int * itv; int which; } ;
typedef int i32 ;


 int FUNC_0 (struct itimerval,struct itimerval32,int ) ;
 int FUNC_1 (struct itimerval32*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct thread*,int ,struct itimerval*) ;

int
FUNC_3(struct thread *VAR_2, struct freebsd32_getitimer_args *VAR_3)
{
 struct itimerval VAR_4;
 struct itimerval32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3->which, &VAR_4);
 if (VAR_6 || VAR_3->itv == ((void*)0))
  return (VAR_6);
 FUNC_0(VAR_4, VAR_5, VAR_0);
 FUNC_0(VAR_4, VAR_5, VAR_1);
 return (FUNC_1(&VAR_5, VAR_3->itv, sizeof(VAR_5)));
}
