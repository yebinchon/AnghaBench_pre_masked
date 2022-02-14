
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timer_t ;
struct sigevent {int sigev_signo; int sigev_notify; } ;
struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
struct TYPE_2__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct itimerspec {TYPE_1__ it_value; TYPE_1__ it_interval; } ;
typedef scalar_t__ dtrace_optval_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,struct sigevent*,int *) ;
 int FUNC_5 (int ,int ,struct itimerspec*,int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
 dtrace_optval_t VAR_7, VAR_8, VAR_9;
 struct sigaction VAR_10;
 struct itimerspec VAR_11;
 struct sigevent VAR_12;
 timer_t VAR_13;

 if (FUNC_1(VAR_5, "statusrate", &VAR_8) == -1)
  FUNC_0("failed to get 'statusrate'");

 if (FUNC_1(VAR_5, "aggrate", &VAR_9) == -1)
  FUNC_0("failed to get 'statusrate'");
 VAR_7 = VAR_8 < VAR_9 ? VAR_8 : VAR_9;

 (void) FUNC_3(&VAR_10.sa_mask);
 VAR_10.sa_flags = 0;
 VAR_10.sa_handler = VAR_6;
 (void) FUNC_2(VAR_3, &VAR_10, ((void*)0));

 VAR_12.sigev_notify = VAR_2;
 VAR_12.sigev_signo = VAR_3;

 if (FUNC_4(VAR_0, &VAR_12, &VAR_13) == -1)
  FUNC_0("cannot create CLOCK_REALTIME timer");

 VAR_11.it_value.tv_sec = VAR_7 / VAR_1;
 VAR_11.it_value.tv_nsec = VAR_7 % VAR_1;
 VAR_11.it_interval = VAR_11.it_value;

 if (FUNC_5(VAR_13, VAR_4, &VAR_11, ((void*)0)) == -1)
  FUNC_0("cannot set time on CLOCK_REALTIME timer");
}
