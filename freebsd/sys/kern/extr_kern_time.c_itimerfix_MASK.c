
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct timeval *VAR_2)
{

 if (VAR_2->tv_sec < 0 || VAR_2->tv_usec < 0 || VAR_2->tv_usec >= 1000000)
  return (VAR_0);
 if (VAR_2->tv_sec == 0 && VAR_2->tv_usec != 0 &&
     VAR_2->tv_usec < (u_int)VAR_1 / 16)
  VAR_2->tv_usec = (u_int)VAR_1 / 16;
 return (0);
}
