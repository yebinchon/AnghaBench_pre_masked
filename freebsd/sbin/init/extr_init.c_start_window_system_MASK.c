
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int term ;
typedef int sigset_t ;
struct TYPE_3__ {int se_device; int * se_window_argv; int se_type; } ;
typedef TYPE_1__ session_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_12(session_t *VAR_2)
{
 pid_t VAR_3;
 sigset_t VAR_4;
 char VAR_5[64], *VAR_6[2];
 int VAR_7;

 if ((VAR_3 = FUNC_3()) == -1) {
  FUNC_1("can't fork for window system on port %s: %m",
      VAR_2->se_device);

  return;
 }
 if (VAR_3) {
  FUNC_11(-1, &VAR_7, 0);
  return;
 }


 if ((VAR_3 = FUNC_3()) == -1) {
  FUNC_1("can't fork for window system on port %s: %m",
      VAR_2->se_device);
  FUNC_0(1);
 }
 if (VAR_3)
  FUNC_0(0);

 FUNC_6(&VAR_4);
 FUNC_7(VAR_1, &VAR_4, ((void*)0));

 if (FUNC_5() < 0)
  FUNC_1("setsid failed (window) %m");




 if (VAR_2->se_type) {

  FUNC_9(VAR_5, "TERM=");
  FUNC_10(VAR_5, VAR_2->se_type, sizeof(VAR_5));
  VAR_6[0] = VAR_5;
  VAR_6[1] = ((void*)0);
 }
 else
  VAR_6[0] = ((void*)0);
 FUNC_2(VAR_2->se_window_argv[0], VAR_2->se_window_argv, VAR_6);
 FUNC_8("can't exec window system '%s' for port %s: %m",
  VAR_2->se_window_argv[0], VAR_2->se_device);
 FUNC_0(1);
}
