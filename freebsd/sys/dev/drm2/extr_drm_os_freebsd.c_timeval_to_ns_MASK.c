
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

int64_t
FUNC_0(const struct timeval *VAR_2)
{
 return ((int64_t)VAR_2->tv_sec * VAR_0) +
  VAR_2->tv_usec * VAR_1;
}
