
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(struct timeval *VAR_0,
      u_long VAR_1,
      u_long VAR_2)
{
 VAR_0->tv_sec = (time_t)(VAR_2 == VAR_1
         ? VAR_1
         : (VAR_1 + FUNC_0(1 + VAR_2 - VAR_1)));
 VAR_0->tv_usec = FUNC_0(1000000);
}
