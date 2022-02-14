
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int ,int,int *) ;
 int FUNC_1 (char*,int ,int ,char*,int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int ,char*,int *,char*,int ,int *) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  FUNC_1 ("pause", VAR_1, VAR_21,
    "Set whether the new threads are suspended while gdb has control.\nThis property normally has no effect because the whole task is\nsuspended, however, that may be disabled with \"set task pause off\".\nThe default value is \"off\".",



    &VAR_19);
  FUNC_1 ("pause", VAR_8, VAR_33,
    "Show whether new threads are suspended while gdb has control.",
    &VAR_31);

  FUNC_1 ("run", VAR_1, VAR_22,
    "Set whether new threads are allowed to run (once gdb has noticed them).",

    &VAR_19);
  FUNC_1 ("run", VAR_8, VAR_34,
    "Show whether new threads are allowed to run (once gdb has noticed them).",

    &VAR_31);

  FUNC_1 ("detach-suspend-count", VAR_1, VAR_20,
    "Set the default detach-suspend-count value for new threads.",
    &VAR_19);
  FUNC_1 ("detach-suspend-count", VAR_8, VAR_32,
    "Show the default detach-suspend-count value for new threads.",
    &VAR_31);

  FUNC_1 ("signals", VAR_1, VAR_12,
    "Set whether the inferior process's signals will be intercepted.\nMach exceptions (such as breakpoint traps) are not affected.",

    &VAR_23);
  FUNC_0 ("sigs", "signals", VAR_1, 1, &VAR_23);
  FUNC_1 ("signals", VAR_8, VAR_26,
    "Show whether the inferior process's signals will be intercepted.",
    &VAR_35);
  FUNC_0 ("sigs", "signals", VAR_8, 1, &VAR_35);

  FUNC_1 ("signal-thread", VAR_1, VAR_11,
    "Set the thread that gdb thinks is the libc signal thread.\nThis thread is run when delivering a signal to a non-stopped process.",

    &VAR_23);
  FUNC_0 ("sigthread", "signal-thread", VAR_1, 1, &VAR_23);
  FUNC_1 ("signal-thread", VAR_8, VAR_25,
    "Set the thread that gdb thinks is the libc signal thread.",
    &VAR_35);
  FUNC_0 ("sigthread", "signal-thread", VAR_8, 1, &VAR_35);

  FUNC_1 ("stopped", VAR_1, VAR_13,
    "Set whether gdb thinks the inferior process is stopped as with SIGSTOP.\nStopped process will be continued by sending them a signal.",


    &VAR_23);
  FUNC_1 ("stopped", VAR_8, VAR_26,
    "Show whether gdb thinks the inferior process is stopped as with SIGSTOP.",

    &VAR_35);

  FUNC_1 ("exceptions", VAR_1, VAR_9,
    "Set whether exceptions in the inferior process will be trapped.\nWhen exceptions are turned off, neither breakpoints nor single-stepping\nwill work.",


    &VAR_23);

  FUNC_0 ("exc", "exceptions", VAR_1, 1, &VAR_23);
  FUNC_1 ("exceptions", VAR_8, VAR_24,
    "Show whether exceptions in the inferior process will be trapped.",
    &VAR_35);

  FUNC_3 ("task", VAR_8, VAR_14,
    "Command prefix for setting task attributes.",
    &VAR_15, "set task ", 0, &VAR_23);
  FUNC_3 ("task", VAR_8, VAR_27,
    "Command prefix for showing task attributes.",
    &VAR_28, "show task ", 0, &VAR_35);

  FUNC_1 ("pause", VAR_1, VAR_18,
    "Set whether the task is suspended while gdb has control.\nA value of \"on\" takes effect immediately, otherwise nothing happens\nuntil the next time the program is continued.\nWhen setting this to \"off\", \"set thread default pause on\" can be\nused to pause individual threads by default instead.",




    &VAR_15);
  FUNC_1 ("pause", VAR_8, VAR_30,
    "Show whether the task is suspended while gdb has control.",
    &VAR_28);

  FUNC_1 ("detach-suspend-count", VAR_1, VAR_16,
    "Set the suspend count will leave on the thread when detaching.",
    &VAR_15);
  FUNC_1 ("detach-suspend-count", VAR_8, VAR_29,
    "Show the suspend count will leave on the thread when detaching.",
    &VAR_28);

  FUNC_1 ("exception-port", VAR_8, VAR_17,
    "Set the task exception port to which we forward exceptions.\nThe argument should be the value of the send right in the task.",

    &VAR_15);
  FUNC_0 ("excp", "exception-port", VAR_8, 1, &VAR_15);
  FUNC_0 ("exc-port", "exception-port", VAR_8, 1,
   &VAR_15);



  FUNC_1 ("noninvasive", VAR_8, VAR_10,
    "Set task options so that we interfere as little as possible.\nThis is the same as setting `task pause', `exceptions', and\n`signals' to the opposite value.",


    &VAR_23);


  FUNC_1 ("send-rights", VAR_0, VAR_6,
    "Show information about the task's send rights",
    &VAR_7);
  FUNC_1 ("receive-rights", VAR_0, VAR_5,
    "Show information about the task's receive rights",
    &VAR_7);
  FUNC_1 ("port-rights", VAR_0, VAR_3,
    "Show information about the task's port rights",
    &VAR_7);
  FUNC_1 ("port-sets", VAR_0, VAR_4,
    "Show information about the task's port sets",
    &VAR_7);
  FUNC_1 ("dead-names", VAR_0, VAR_2,
    "Show information about the task's dead names",
    &VAR_7);
  FUNC_2 ("ports", "port-rights", 1);
  FUNC_2 ("port", "port-rights", 1);
  FUNC_2 ("psets", "port-sets", 1);
}
