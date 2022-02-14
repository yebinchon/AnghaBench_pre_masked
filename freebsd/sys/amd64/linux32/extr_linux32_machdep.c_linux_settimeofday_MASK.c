
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int tv_usec; int tv_sec; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct thread {int dummy; } ;
struct linux_settimeofday_args {scalar_t__ tzp; scalar_t__ tp; } ;
typedef struct timezone l_timeval ;
typedef int atz ;
typedef int atv32 ;


 int FUNC_0 (scalar_t__,struct timezone*,int) ;
 int FUNC_1 (struct thread*,struct timeval*,struct timezone*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_settimeofday_args *VAR_1)
{
 l_timeval VAR_2;
 struct timeval VAR_3, *VAR_4;
 struct timezone VAR_5, *VAR_6;
 int VAR_7;

 if (VAR_1->tp) {
  VAR_7 = FUNC_0(VAR_1->tp, &VAR_2, sizeof(VAR_2));
  if (VAR_7)
   return (VAR_7);
  VAR_3.tv_sec = VAR_2;
  VAR_3.tv_usec = VAR_2;
  VAR_4 = &VAR_3;
 } else
  VAR_4 = ((void*)0);
 if (VAR_1->tzp) {
  VAR_7 = FUNC_0(VAR_1->tzp, &VAR_5, sizeof(VAR_5));
  if (VAR_7)
   return (VAR_7);
  VAR_6 = &VAR_5;
 } else
  VAR_6 = ((void*)0);
 return (FUNC_1(VAR_0, VAR_4, VAR_6));
}
