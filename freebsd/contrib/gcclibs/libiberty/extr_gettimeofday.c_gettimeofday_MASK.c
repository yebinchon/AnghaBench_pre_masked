
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2 (struct timeval *VAR_0, void *VAR_1)
{
  if (VAR_1)
    FUNC_0 ();
  VAR_0->tv_usec = 0;
  if (FUNC_1 (&VAR_0->tv_sec) == (time_t) -1)
    return -1;
  return 0;
}
