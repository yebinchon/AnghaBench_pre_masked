
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;



void
FUNC_0(struct timeval *VAR_0, int VAR_1)
{
 if (VAR_1 < 0)
  VAR_1 = 0;
 VAR_0->tv_sec = VAR_1 / 1000;
 VAR_0->tv_usec = (VAR_1 % 1000) * 1000;
}
