
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_timer_gettime_args {int setting; int timerid; } ;
struct l_itimerspec {int dummy; } ;
struct itimerspec {int dummy; } ;
typedef int l_val ;


 int FUNC_0 (struct itimerspec,struct l_itimerspec) ;
 int FUNC_1 (struct l_itimerspec*,int ,int) ;
 int FUNC_2 (struct thread*,int ,struct itimerspec*) ;

int
FUNC_3(struct thread *VAR_0, struct linux_timer_gettime_args *VAR_1)
{
 struct l_itimerspec VAR_2;
 struct itimerspec VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1->timerid, &VAR_3);
 if (VAR_4 == 0) {
  FUNC_0(VAR_3, VAR_2);
  VAR_4 = FUNC_1(&VAR_2, VAR_1->setting, sizeof(VAR_2));
 }
 return (VAR_4);
}
