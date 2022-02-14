
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



__attribute__((used)) static double FUNC_0(struct timeval *VAR_0)
{
 return (double)VAR_0->tv_sec +
  (double)VAR_0->tv_usec / (double)1000000;
}
