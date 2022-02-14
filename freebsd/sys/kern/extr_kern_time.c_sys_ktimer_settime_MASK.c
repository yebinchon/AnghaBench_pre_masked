
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct thread {int dummy; } ;
struct ktimer_settime_args {int * ovalue; int flags; int timerid; int value; } ;
struct itimerspec {int dummy; } ;


 int FUNC_0 (int ,struct itimerspec*,int) ;
 int FUNC_1 (struct itimerspec*,int *,int) ;
 int FUNC_2 (struct thread*,int ,int ,struct itimerspec*,struct itimerspec*) ;

int
FUNC_3(struct thread *VAR_0, struct ktimer_settime_args *VAR_1)
{
 struct itimerspec VAR_2, VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->value, &VAR_2, sizeof(VAR_2));
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_4 = VAR_1->ovalue != ((void*)0) ? &VAR_3 : ((void*)0);
 VAR_5 = FUNC_2(VAR_0, VAR_1->timerid, VAR_1->flags, &VAR_2, VAR_4);
 if (VAR_5 == 0 && VAR_1->ovalue != ((void*)0))
  VAR_5 = FUNC_1(VAR_4, VAR_1->ovalue, sizeof(*VAR_4));
 return (VAR_5);
}
