
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timer_t ;
struct sigevent {int sigev_signo; int sigev_notify; } ;
struct TYPE_4__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct itimerspec {TYPE_2__ it_interval; TYPE_1__ it_value; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,int*) ;
 int VAR_8 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sigevent*,int *) ;
 int FUNC_8 (int ,int ,struct itimerspec*,int *) ;

int
FUNC_9(int VAR_9, char **VAR_10)
{
 struct sigevent VAR_11;
 struct itimerspec VAR_12;
 sigset_t VAR_13;
 timer_t VAR_14;
 char *VAR_15 = VAR_10[0];
 int VAR_16;

 VAR_11.sigev_notify = VAR_3;
 VAR_11.sigev_signo = VAR_4;

 if (FUNC_7(VAR_0, &VAR_11, &VAR_14) == -1) {
  (void) FUNC_1(VAR_8, "%s: cannot create CLOCK_HIGHRES "
      "timer: %s\n", VAR_15, FUNC_6(VAR_7));
  FUNC_0(VAR_1);
 }

 (void) FUNC_3(&VAR_13);
 (void) FUNC_2(&VAR_13, VAR_4);
 (void) FUNC_4(VAR_5, &VAR_13, ((void*)0));

 VAR_12.it_value.tv_sec = 1;
 VAR_12.it_value.tv_nsec = 0;
 VAR_12.it_interval.tv_sec = 0;
 VAR_12.it_interval.tv_nsec = VAR_2 / 2;

 if (FUNC_8(VAR_14, VAR_6, &VAR_12, ((void*)0)) == -1) {
  (void) FUNC_1(VAR_8, "%s: timer_settime() failed: %s\n",
      VAR_15, FUNC_6(VAR_7));
  FUNC_0(VAR_1);
 }

 do {
  (void) FUNC_5(&VAR_13, &VAR_16);
 } while(VAR_16 != VAR_4);


 return (0);
}
