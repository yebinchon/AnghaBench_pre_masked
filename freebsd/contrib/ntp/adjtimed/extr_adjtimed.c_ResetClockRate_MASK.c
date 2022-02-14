
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tv_sec; long tv_usec; } ;
struct itimerval {TYPE_1__ it_value; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*) ;
 double VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct itimerval*,struct itimerval*) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_6(void)
{
 struct itimerval VAR_7;

 VAR_7.it_value.tv_sec = VAR_7.it_value.tv_usec = 0L;
 FUNC_5(VAR_0, &VAR_7, (struct itimerval *)0);

 if (VAR_6 > 2) FUNC_4("adjtimed: resetting the clock");
 if (VAR_5 > 2) FUNC_2(VAR_2, "resetting the clock");

 if (FUNC_0() != VAR_3) {
  if (FUNC_1(VAR_3) == -1) {
   FUNC_2(VAR_1, "set clock rate: %m");
   FUNC_3("adjtimed: set clock rate");
  }
 }

 VAR_4 = 0.0;
}
