
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val32 ;
struct thread {int dummy; } ;
struct itimerspec32 {int dummy; } ;
struct itimerspec {int dummy; } ;
struct freebsd32_ktimer_gettime_args {int value; int timerid; } ;


 int FUNC_0 (struct itimerspec,struct itimerspec32) ;
 int FUNC_1 (struct itimerspec32*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct itimerspec*) ;

int
FUNC_3(struct thread *VAR_0,
    struct freebsd32_ktimer_gettime_args *VAR_1)
{
 struct itimerspec32 VAR_2;
 struct itimerspec VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1->timerid, &VAR_3);
 if (VAR_4 == 0) {
  FUNC_0(VAR_3, VAR_2);
  VAR_4 = FUNC_1(&VAR_2, VAR_1->value, sizeof(VAR_2));
 }
 return (VAR_4);
}
