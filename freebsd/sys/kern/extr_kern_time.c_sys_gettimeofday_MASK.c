
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {scalar_t__ tz_dsttime; scalar_t__ tz_minuteswest; } ;
struct timeval {scalar_t__ tz_dsttime; scalar_t__ tz_minuteswest; } ;
struct thread {int dummy; } ;
struct gettimeofday_args {int * tzp; int * tp; } ;
typedef int rtz ;
typedef int atv ;


 int FUNC_0 (struct timezone*,int *,int) ;
 int FUNC_1 (struct timezone*) ;

int
FUNC_2(struct thread *VAR_0, struct gettimeofday_args *VAR_1)
{
 struct timeval VAR_2;
 struct timezone VAR_3;
 int VAR_4 = 0;

 if (VAR_1->tp) {
  FUNC_1(&VAR_2);
  VAR_4 = FUNC_0(&VAR_2, VAR_1->tp, sizeof (VAR_2));
 }
 if (VAR_4 == 0 && VAR_1->tzp != ((void*)0)) {
  VAR_3.tz_minuteswest = 0;
  VAR_3.tz_dsttime = 0;
  VAR_4 = FUNC_0(&VAR_3, VAR_1->tzp, sizeof (VAR_3));
 }
 return (VAR_4);
}
