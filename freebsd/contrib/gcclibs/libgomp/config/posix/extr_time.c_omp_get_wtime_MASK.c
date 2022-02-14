
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; int tv_usec; } ;
struct timespec {double tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

double
FUNC_2 (void)
{
  struct timeval VAR_2;
  FUNC_1 (&VAR_2, ((void*)0));
  return VAR_2.tv_sec + VAR_2.tv_usec / 1e6;

}
