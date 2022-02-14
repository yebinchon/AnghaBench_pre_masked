
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int siginfo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;

void FUNC_5(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 if (FUNC_3() != VAR_0)
  FUNC_2(0);
 else {
  FUNC_1(VAR_1, "Caught signal %d in SIGUSR1 handler, "
    "exiting\n", VAR_2);
  FUNC_4(0, "", 0);
  FUNC_1(VAR_1, "\n\nReturned from shutdown?!?!\n\n");
  FUNC_0(0);
 }
}
