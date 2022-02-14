
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct os_time {int usec; int sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

int FUNC_1(struct os_time *VAR_0)
{
 int VAR_1;
 struct timeval VAR_2;
 VAR_1 = FUNC_0(&VAR_2, ((void*)0));
 VAR_0->sec = VAR_2.tv_sec;
 VAR_0->usec = VAR_2.tv_usec;
 return VAR_1;
}
