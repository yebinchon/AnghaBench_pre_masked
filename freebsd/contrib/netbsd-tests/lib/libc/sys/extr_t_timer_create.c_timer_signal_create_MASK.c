
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_3__ {scalar_t__* sival_ptr; } ;
struct sigevent {TYPE_2__ it_value; int sigev_notify; TYPE_1__ sigev_value; int sigev_signo; int sa_mask; int sa_sigaction; int sa_flags; } ;
struct sigaction {TYPE_2__ it_value; int sigev_notify; TYPE_1__ sigev_value; int sigev_signo; int sa_mask; int sa_sigaction; int sa_flags; } ;
struct itimerspec {TYPE_2__ it_value; int sigev_notify; TYPE_1__ sigev_value; int sigev_signo; int sa_mask; int sa_sigaction; int sa_flags; } ;
typedef int sigset_t ;
typedef int clockid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (struct sigevent*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct sigevent*,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int ,struct sigevent*,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,struct sigevent*,int *) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_11(clockid_t VAR_8, bool VAR_9)
{
 struct itimerspec VAR_10;
 struct sigaction VAR_11;
 struct sigevent VAR_12;
 sigset_t VAR_13;

 VAR_6 = 0;
 VAR_5 = 1;

 (void)FUNC_2(&VAR_12, 0, sizeof(struct sigevent));
 (void)FUNC_2(&VAR_11, 0, sizeof(struct sigaction));
 (void)FUNC_2(&VAR_10, 0, sizeof(struct itimerspec));




 VAR_11.sa_flags = VAR_0;
 VAR_11.sa_sigaction = VAR_7;

 FUNC_0(FUNC_5(&VAR_13) == 0);
 FUNC_0(FUNC_5(&VAR_11.sa_mask) == 0);




 FUNC_0(FUNC_3(VAR_1, &VAR_11, ((void*)0)) == 0);
 FUNC_0(FUNC_4(&VAR_13, VAR_1) == 0);
 FUNC_0(FUNC_6(VAR_3, &VAR_13, ((void*)0)) == 0);




 VAR_12.sigev_signo = VAR_1;
 VAR_12.sigev_value.sival_ptr = &VAR_6;
 VAR_12.sigev_notify = VAR_2;

 FUNC_0(FUNC_8(VAR_8, &VAR_12, &VAR_6) == 0);




 VAR_10.it_value.tv_sec = VAR_9 ? 5 : 1;
 VAR_10.it_value.tv_nsec = 0;

 FUNC_0(FUNC_10(VAR_6, 0, &VAR_10, ((void*)0)) == 0);

 (void)FUNC_6(VAR_4, &VAR_13, ((void*)0));
 (void)FUNC_7(2);

 if (VAR_9) {
  if (!VAR_5)
   FUNC_1("timer fired too soon");
 } else {
  if (VAR_5)
   FUNC_1("timer failed to fire");
 }

 FUNC_0(FUNC_9(VAR_6) == 0);
}
