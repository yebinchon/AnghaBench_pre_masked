
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct timeval {int dummy; } ;
struct timehands {scalar_t__ th_generation; struct timeval th_microtime; } ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;
 struct timehands* VAR_0 ;

void
FUNC_2(struct timeval *VAR_1)
{
 struct timehands *VAR_2;
 u_int VAR_3;

 do {
  VAR_2 = VAR_0;
  VAR_3 = FUNC_0(&VAR_2->th_generation);
  *VAR_1 = VAR_2->th_microtime;
  FUNC_1();
 } while (VAR_3 == 0 || VAR_3 != VAR_2->th_generation);
}
