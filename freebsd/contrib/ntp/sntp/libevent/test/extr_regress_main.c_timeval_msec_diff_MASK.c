
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; int tv_usec; } ;



long
FUNC_0(const struct timeval *VAR_0, const struct timeval *VAR_1)
{
 long VAR_2 = VAR_1->tv_sec - VAR_0->tv_sec;
 VAR_2 *= 1000;
 VAR_2 += ((VAR_1->tv_usec - VAR_0->tv_usec)+500) / 1000;
 return VAR_2;
}
