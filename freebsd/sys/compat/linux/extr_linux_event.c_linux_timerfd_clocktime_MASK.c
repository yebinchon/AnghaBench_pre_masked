
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct timerfd {scalar_t__ tfd_clockid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*) ;

__attribute__((used)) static void
FUNC_2(struct timerfd *VAR_1, struct timespec *VAR_2)
{

 if (VAR_1->tfd_clockid == VAR_0)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
}
