
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 scalar_t__ FUNC_0 (struct timespec*,int *) ;
 int FUNC_1 (char*) ;

int
FUNC_2(void)
{
 struct timespec VAR_0;

 VAR_0.tv_sec = 0;
 VAR_0.tv_nsec = 100000000;

 if (FUNC_0(&VAR_0, ((void*)0))) {
  FUNC_1("nanosleep");
  return 1;
 }
 return 0;
}
