
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct thread {int dummy; } ;
struct ktimer_gettime_args {int value; int timerid; } ;
struct itimerspec {int dummy; } ;


 int FUNC_0 (struct itimerspec*,int ,int) ;
 int FUNC_1 (struct thread*,int ,struct itimerspec*) ;

int
FUNC_2(struct thread *VAR_0, struct ktimer_gettime_args *VAR_1)
{
 struct itimerspec VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->timerid, &VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(&VAR_2, VAR_1->value, sizeof(VAR_2));
 return (VAR_3);
}
