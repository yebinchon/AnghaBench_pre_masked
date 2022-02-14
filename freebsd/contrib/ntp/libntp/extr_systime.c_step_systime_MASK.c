
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int l_fp ;


 int FUNC_0 (double,int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct timespec*) ;
 int VAR_5 ;
 struct timeval FUNC_6 (int ,int*) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct timeval*,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 double VAR_6 ;
 int FUNC_11 (struct timespec) ;
 int FUNC_12 (struct timeval,struct timeval) ;

int
FUNC_13(
 double VAR_7
 )
{
 time_t VAR_8;
 struct timeval VAR_9, VAR_10;
 struct timespec VAR_11;
 l_fp VAR_12, VAR_13;
 VAR_8 = 0x7FFFFFFF;



 FUNC_0(VAR_6, &VAR_13);
 FUNC_0(VAR_7, &VAR_12);
 FUNC_2(&VAR_12, &VAR_13);




 FUNC_5(&VAR_11);
 VAR_13 = FUNC_11(VAR_11);
 VAR_10.tv_sec = VAR_11.tv_sec;
 VAR_10.tv_usec = (VAR_11.tv_nsec + 500) / 1000;


 FUNC_2(&VAR_13, &VAR_12);


 VAR_9 = FUNC_6(VAR_13, &VAR_8);


 if (FUNC_8(&VAR_9, ((void*)0)) != 0) {
  FUNC_7(VAR_1, "step-systime: %m");
  if (VAR_4 && VAR_3) {
   FUNC_7(VAR_1, "step_systime: allow_panic is TRUE!");
  }
  return VAR_0;
 }



 VAR_6 = 0;
 VAR_5 = (VAR_7 < 0);
 if (&FUNC_9)
  FUNC_9)();
 FUNC_12(VAR_9, VAR_10);
 if (VAR_4 && VAR_3) {
  FUNC_7(VAR_1, "step_systime: allow_panic is TRUE!");
  FUNC_1(!VAR_3);
 }
 return VAR_2;
}
