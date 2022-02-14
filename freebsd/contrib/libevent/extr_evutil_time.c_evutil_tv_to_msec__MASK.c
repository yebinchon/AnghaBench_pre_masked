
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;

long
FUNC_0(const struct timeval *VAR_1)
{
 if (VAR_1->tv_usec > 1000000 || VAR_1->tv_sec > VAR_0)
  return -1;

 return (VAR_1->tv_sec * 1000) + ((VAR_1->tv_usec + 999) / 1000);
}
