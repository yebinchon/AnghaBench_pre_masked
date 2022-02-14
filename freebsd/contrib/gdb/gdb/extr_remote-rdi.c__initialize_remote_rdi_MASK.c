
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct cmd_list_element* FUNC_2 (char*,int ,int ,char*,int *) ;
 int FUNC_3 (char*,int ,int *,char*,char*,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct cmd_list_element*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (char*) ;

void
FUNC_8 (void)
{
  struct cmd_list_element *VAR_13;

  FUNC_5 ();
  FUNC_4 (&VAR_0);

  VAR_4 = FUNC_7 ("rdi.log");
  FUNC_1 (VAR_4);
  FUNC_0 (VAR_3);

  VAR_13 = FUNC_2 ("rdilogfile", VAR_1,
        VAR_9,
        "Set filename for ADP packet log.\n"
        "This file is used to log Angel Debugger Protocol packets.\n"
        "With a single argument, sets the logfile name to that value.\n"
        "Without an argument, shows the current logfile name.\n"
        "See also: rdilogenable\n",
        &VAR_5);
  FUNC_6 (VAR_13, VAR_2);

  FUNC_2 ("rdilogenable", VAR_1,
    VAR_8,
    "Set enable logging of ADP packets.\n"
    "This will log ADP packets exchanged between gdb and the\n"
    "rdi target device.\n"
    "An argument of 1, t, true, y or yes will enable.\n"
    "An argument of 0, f, false, n or no will disabled.\n"
    "Withough an argument, it will display current state.\n",
    &VAR_5);

  FUNC_3
    ("rdiromatzero", VAR_6, &VAR_10,
     "Set target has ROM at addr 0.\n"
     "A true value disables vector catching, false enables vector catching.\n"
     "This is evaluated at the time the 'target rdi' command is executed\n",
     "Show if target has ROM at addr 0.\n",
     ((void*)0), ((void*)0),
     &VAR_11, &VAR_12);

  FUNC_3
    ("rdiheartbeat", VAR_6, &VAR_7,
     "Set enable for ADP heartbeat packets.\n"
     "I don't know why you would want this. If you enable them,\n"
     "it will confuse ARM and EPI JTAG interface boxes as well\n"
     "as the Angel Monitor.\n",
     "Show enable for ADP heartbeat packets.\n",
     ((void*)0), ((void*)0),
     &VAR_11, &VAR_12);
}
