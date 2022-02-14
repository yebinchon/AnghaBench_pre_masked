
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {scalar_t__ tz_dsttime; scalar_t__ tz_minuteswest; int tv_usec; int tv_sec; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct thread {int dummy; } ;
struct linux_gettimeofday_args {int * tzp; int * tp; } ;
typedef int rtz ;
typedef struct timezone l_timeval ;
typedef int atv32 ;


 int FUNC_0 (struct timezone*,int *,int) ;
 int FUNC_1 (struct timeval*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_gettimeofday_args *VAR_1)
{
 struct timeval VAR_2;
 l_timeval VAR_3;
 struct timezone VAR_4;
 int VAR_5 = 0;

 if (VAR_1->tp) {
  FUNC_1(&VAR_2);
  VAR_3 = VAR_2.tv_sec;
  VAR_3 = VAR_2.tv_usec;
  VAR_5 = FUNC_0(&VAR_3, VAR_1->tp, sizeof(VAR_3));
 }
 if (VAR_5 == 0 && VAR_1->tzp != ((void*)0)) {
  VAR_4.tz_minuteswest = 0;
  VAR_4.tz_dsttime = 0;
  VAR_5 = FUNC_0(&VAR_4, VAR_1->tzp, sizeof(VAR_4));
 }
 return (VAR_5);
}
