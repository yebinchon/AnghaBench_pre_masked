
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_1__ it_value; } ;
struct timerfd {struct itimerspec tfd_time; } ;


 int FUNC_0 (struct timerfd*,struct timespec*) ;
 int FUNC_1 (TYPE_1__*,struct timespec*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct timerfd *VAR_0, struct itimerspec *VAR_1)
{
 struct timespec VAR_2;

 FUNC_0(VAR_0, &VAR_2);
 *VAR_1 = VAR_0->tfd_time;
 if (VAR_1->it_value.tv_sec != 0 || VAR_1->it_value.tv_nsec != 0) {
  FUNC_1(&VAR_1->it_value, &VAR_2, &VAR_1->it_value);
  if (VAR_1->it_value.tv_sec < 0 ||
      (VAR_1->it_value.tv_sec == 0 &&
       VAR_1->it_value.tv_nsec == 0)) {
   VAR_1->it_value.tv_sec = 0;
   VAR_1->it_value.tv_nsec = 1;
  }
 }
}
