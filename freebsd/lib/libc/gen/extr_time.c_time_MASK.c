
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;

time_t
FUNC_1(time_t *VAR_1)
{
 struct timespec VAR_2;
 time_t VAR_3;

 if (FUNC_0(VAR_0, &VAR_2) < 0)
  VAR_3 = -1;
 else
  VAR_3 = VAR_2.tv_sec;
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_3;
 return (VAR_3);
}
