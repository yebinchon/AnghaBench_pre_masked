
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ,int,int *) ;
 int FUNC_1 (char*,int ,int ,char*,int *) ;
 int FUNC_2 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  FUNC_2 ("thread", VAR_1, VAR_2,
    "Command prefix for setting thread properties.",
    &VAR_3, "set thread ", 0, &VAR_10);
  FUNC_2 ("default", VAR_1, VAR_11,
    "Command prefix for setting default thread properties.",
    &VAR_5, "set thread default ", 0,
    &VAR_3);
  FUNC_2 ("thread", VAR_1, VAR_4,
    "Command prefix for showing thread properties.",
    &VAR_12, "show thread ", 0, &VAR_18);
  FUNC_2 ("default", VAR_1, VAR_13,
    "Command prefix for showing default thread properties.",
    &VAR_14, "show thread default ", 0,
    &VAR_12);

  FUNC_1 ("pause", VAR_0, VAR_8,
    "Set whether the current thread is suspended while gdb has control.\nA value of \"on\" takes effect immediately, otherwise nothing happens\nuntil the next time the program is continued.  This property normally\nhas no effect because the whole task is suspended, however, that may\nbe disabled with \"set task pause off\".\nThe default value is \"off\".",






    &VAR_3);
  FUNC_1 ("pause", VAR_1, VAR_16,
    "Show whether the current thread is suspended while gdb has control.",

    &VAR_12);

  FUNC_1 ("run", VAR_0, VAR_9,
    "Set whether the current thread is allowed to run.",
    &VAR_3);
  FUNC_1 ("run", VAR_1, VAR_17,
    "Show whether the current thread is allowed to run.",
    &VAR_12);

  FUNC_1 ("detach-suspend-count", VAR_0, VAR_6,
    "Set the suspend count will leave on the thread when detaching.\nNote that this is relative to suspend count when gdb noticed the thread;\nuse the `thread takeover-suspend-count' to force it to an absolute value.",


    &VAR_3);
  FUNC_1 ("detach-suspend-count", VAR_1, VAR_15,
    "Show the suspend count will leave on the thread when detaching.\nNote that this is relative to suspend count when gdb noticed the thread;\nuse the `thread takeover-suspend-count' to force it to an absolute value.",


    &VAR_12);

  FUNC_1 ("exception-port", VAR_1, VAR_7,
    "Set the thread exception port to which we forward exceptions.\nThis overrides the task exception port.\nThe argument should be the value of the send right in the task.",


    &VAR_3);
  FUNC_0 ("excp", "exception-port", VAR_1, 1, &VAR_3);
  FUNC_0 ("exc-port", "exception-port", VAR_1, 1,
   &VAR_3);

  FUNC_1 ("takeover-suspend-count", VAR_1, VAR_20,
    "Force the threads absolute suspend-count to be gdb's.\nPrior to giving this command, gdb's thread suspend-counts are relative\nto the thread's initial suspend-count when gdb notices the threads.",


    &VAR_19);
}
