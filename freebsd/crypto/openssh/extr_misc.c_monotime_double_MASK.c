
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; scalar_t__ tv_nsec; } ;


 int FUNC_0 (struct timespec*) ;

double
FUNC_1(void)
{
 struct timespec VAR_0;

 FUNC_0(&VAR_0);
 return VAR_0.tv_sec + ((double)VAR_0.tv_nsec / 1000000000);
}
