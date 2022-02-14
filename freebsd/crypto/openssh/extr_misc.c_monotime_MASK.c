
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; } ;


 int FUNC_0 (struct timespec*) ;

time_t
FUNC_1(void)
{
 struct timespec VAR_0;

 FUNC_0(&VAR_0);
 return VAR_0.tv_sec;
}
