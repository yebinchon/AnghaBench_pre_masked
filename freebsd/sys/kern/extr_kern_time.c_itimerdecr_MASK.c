
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_1__ it_interval; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int
FUNC_1(struct itimerval *VAR_0, int VAR_1)
{

 if (VAR_0->it_value.tv_usec < VAR_1) {
  if (VAR_0->it_value.tv_sec == 0) {

   VAR_1 -= VAR_0->it_value.tv_usec;
   goto expire;
  }
  VAR_0->it_value.tv_usec += 1000000;
  VAR_0->it_value.tv_sec--;
 }
 VAR_0->it_value.tv_usec -= VAR_1;
 VAR_1 = 0;
 if (FUNC_0(&VAR_0->it_value))
  return (1);

expire:
 if (FUNC_0(&VAR_0->it_interval)) {
  VAR_0->it_value = VAR_0->it_interval;
  VAR_0->it_value.tv_usec -= VAR_1;
  if (VAR_0->it_value.tv_usec < 0) {
   VAR_0->it_value.tv_usec += 1000000;
   VAR_0->it_value.tv_sec--;
  }
 } else
  VAR_0->it_value.tv_usec = 0;
 return (0);
}
