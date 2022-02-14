
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int tz_dsttime; int tz_minuteswest; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timeb {int millitm; int dstflag; int timezone; int time; } ;


 scalar_t__ FUNC_0 (struct timeval*,struct timezone*) ;

int
FUNC_1(struct timeb *VAR_0)
{
 struct timezone VAR_1;
 struct timeval VAR_2;

 if (FUNC_0(&VAR_2, &VAR_1) < 0)
  return (-1);
 VAR_0->millitm = VAR_2.tv_usec / 1000;
 VAR_0->time = VAR_2.tv_sec;
 VAR_0->timezone = VAR_1.tz_minuteswest;
 VAR_0->dstflag = VAR_1.tz_dsttime;

 return (0);
}
