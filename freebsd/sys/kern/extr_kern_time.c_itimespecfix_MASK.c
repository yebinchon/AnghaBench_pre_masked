
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct timespec *VAR_2)
{

 if (VAR_2->tv_sec < 0 || VAR_2->tv_nsec < 0 || VAR_2->tv_nsec >= 1000000000)
  return (VAR_0);
 if (VAR_2->tv_sec == 0 && VAR_2->tv_nsec != 0 && VAR_2->tv_nsec < VAR_1 * 1000)
  VAR_2->tv_nsec = VAR_1 * 1000;
 return (0);
}
