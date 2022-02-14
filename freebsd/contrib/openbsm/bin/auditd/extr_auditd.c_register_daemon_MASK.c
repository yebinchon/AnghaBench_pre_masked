
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int) ;
 int * FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,struct sigaction*,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(void)
{
 struct sigaction VAR_8;
 FILE * VAR_9;
 int VAR_10;
 pid_t VAR_11;


 VAR_8.sa_handler = VAR_7;




 VAR_8.sa_flags = 0;
 FUNC_12(&VAR_8.sa_mask);
 if (FUNC_11(VAR_6, &VAR_8, ((void*)0)) != 0) {
  FUNC_2(
      "Could not set signal handler for SIGTERM");
  FUNC_3();
 }
 if (FUNC_11(VAR_4, &VAR_8, ((void*)0)) != 0) {
  FUNC_2(
      "Could not set signal handler for SIGCHLD");
  FUNC_3();
 }
 if (FUNC_11(VAR_5, &VAR_8, ((void*)0)) != 0) {
  FUNC_2(
      "Could not set signal handler for SIGHUP");
  FUNC_3();
 }
 if (FUNC_11(VAR_3, &VAR_8, ((void*)0)) != 0) {
  FUNC_2(
      "Could not set signal handler for SIGALRM");
  FUNC_3();
 }

 if ((VAR_9 = FUNC_7(VAR_0, "a")) == ((void*)0)) {
  FUNC_2("Could not open PID file");
  FUNC_1();
  return (-1);
 }


 VAR_10 = FUNC_5(VAR_9);
 if (FUNC_6(VAR_10, VAR_1 | VAR_2) < 0) {
  FUNC_2(
      "PID file is locked (is another auditd running?).");
  FUNC_0();
  return (-1);
 }

 VAR_11 = FUNC_10();
 FUNC_9(VAR_10, 0);
 if (FUNC_8(VAR_9, "%u\n", VAR_11) < 0) {

  FUNC_3();
 }

 FUNC_4(VAR_9);
 return (0);
}
