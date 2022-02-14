
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
typedef int time_t ;
struct timeval {int tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct timeval*,int ,int) ;

time_t
FUNC_2(time_t *VAR_0)
{
 struct timeval VAR_1;

 FUNC_1(&VAR_1, 0, sizeof(VAR_1));
 FUNC_0(&VAR_1, ((void*)0));

 if (VAR_0)
  *VAR_0 = VAR_1.tv_sec;
 return (VAR_1.tv_sec);
}
