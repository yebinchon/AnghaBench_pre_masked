
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*,struct cmd_list_element**,char*,int,struct cmd_list_element**) ;
 int FUNC_1 (char*,int ,int ,char*,struct cmd_list_element**) ;
 struct cmd_list_element* FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (char*,char*,int ,int) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*,int ,int ,char*,struct cmd_list_element**,char*,int,struct cmd_list_element**) ;
 struct cmd_list_element* FUNC_6 (char*,int ,int ,char*,char*,struct cmd_list_element**) ;
 int FUNC_7 (char*,int ,int *,char*,char*,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_8 (struct cmd_list_element*,struct cmd_list_element**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 struct cmd_list_element* VAR_15 ;
 int VAR_16 ;
 char* FUNC_9 (char*,char*,char*,...) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 struct cmd_list_element* VAR_20 ;
 int VAR_21 ;
 struct cmd_list_element* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct cmd_list_element* VAR_26 ;
 struct cmd_list_element* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 struct cmd_list_element* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_10 (struct cmd_list_element*,int ) ;
 struct cmd_list_element* VAR_37 ;
 int VAR_38 ;
 struct cmd_list_element* VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 struct cmd_list_element* VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;

void
FUNC_11 (void)
{
  static struct cmd_list_element *VAR_50;
  static struct cmd_list_element *VAR_51;
  struct cmd_list_element *VAR_52;

  VAR_3 = 0;


  VAR_4 = 0;

  FUNC_2 ("ignore", VAR_9, VAR_29,
    "Set ignore-count of breakpoint number N to COUNT.\nUsage is `ignore N COUNT'.");

  if (VAR_49)
    FUNC_3 ("bc", "ignore", VAR_9, 1);

  FUNC_2 ("commands", VAR_9, VAR_16,
    "Set commands to be executed when a breakpoint is hit.\nGive breakpoint number as argument after \"commands\".\nWith no argument, the targeted breakpoint is the last one set.\nThe commands themselves follow starting on the next line.\nType a line containing \"end\" to indicate the end of them.\nGive \"silent\" as the first line to make the breakpoint silent;\nthen no output is printed when it is hit, except what the commands print.");







  FUNC_2 ("condition", VAR_9, VAR_17,
    "Specify breakpoint number N to break only if COND is true.\nUsage is `condition N COND', where N is an integer and COND is an\nexpression to be evaluated whenever breakpoint N is reached.");



  VAR_52 = FUNC_2 ("tbreak", VAR_9, VAR_44,
        "Set a temporary breakpoint.  Args like \"break\" command.\nLike \"break\" except the breakpoint is only temporary,\nso it will be deleted when hit.  Equivalent to \"break\" followed\nby using \"enable delete\" on the breakpoint number.");



  FUNC_10 (VAR_52, VAR_30);

  VAR_52 = FUNC_2 ("hbreak", VAR_9, VAR_28,
        "Set a hardware assisted  breakpoint. Args like \"break\" command.\nLike \"break\" except the breakpoint requires hardware support,\nsome target hardware may not have this support.");


  FUNC_10 (VAR_52, VAR_30);

  VAR_52 = FUNC_2 ("thbreak", VAR_9, VAR_46,
        "Set a temporary hardware assisted breakpoint. Args like \"break\" command.\nLike \"hbreak\" except the breakpoint is only temporary,\nso it will be deleted when hit.");


  FUNC_10 (VAR_52, VAR_30);

  FUNC_5 ("enable", VAR_9, VAR_23,
    "Enable some breakpoints.\nGive breakpoint numbers (separated by spaces) as arguments.\nWith no subcommand, breakpoints are enabled until you command otherwise.\nThis is used to cancel the effect of the \"disable\" command.\nWith a subcommand you can enable temporarily.",




    &VAR_27, "enable ", 1, &VAR_15);
  if (VAR_49)
    FUNC_2 ("ab", VAR_9, VAR_23,
      "Enable some breakpoints.\nGive breakpoint numbers (separated by spaces) as arguments.\nWith no subcommand, breakpoints are enabled until you command otherwise.\nThis is used to cancel the effect of the \"disable\" command.\nWith a subcommand you can enable temporarily.");





  FUNC_3 ("en", "enable", VAR_9, 1);

  FUNC_0 ("breakpoints", VAR_9, VAR_23,
    "Enable some breakpoints.\nGive breakpoint numbers (separated by spaces) as arguments.\nThis is used to cancel the effect of the \"disable\" command.\nMay be abbreviated to simply \"enable\".\n",



     &VAR_26, "enable breakpoints ", 1, &VAR_27);

  FUNC_1 ("once", VAR_33, VAR_25,
    "Enable breakpoints for one hit.  Give breakpoint numbers.\nIf a breakpoint is hit while enabled in this fashion, it becomes disabled.",

    &VAR_26);

  FUNC_1 ("delete", VAR_33, VAR_24,
    "Enable breakpoints and delete when hit.  Give breakpoint numbers.\nIf a breakpoint is hit while enabled in this fashion, it is deleted.",

    &VAR_26);

  FUNC_1 ("delete", VAR_33, VAR_24,
    "Enable breakpoints and delete when hit.  Give breakpoint numbers.\nIf a breakpoint is hit while enabled in this fashion, it is deleted.",

    &VAR_27);

  FUNC_1 ("once", VAR_33, VAR_25,
    "Enable breakpoints for one hit.  Give breakpoint numbers.\nIf a breakpoint is hit while enabled in this fashion, it becomes disabled.",

    &VAR_27);

  FUNC_5 ("disable", VAR_9, VAR_21,
    "Disable some breakpoints.\nArguments are breakpoint numbers with spaces in between.\nTo disable all breakpoints, give no argument.\nA disabled breakpoint is not forgotten, but has no effect until reenabled.",



    &VAR_22, "disable ", 1, &VAR_15);
  FUNC_3 ("dis", "disable", VAR_9, 1);
  FUNC_3 ("disa", "disable", VAR_9, 1);
  if (VAR_49)
    FUNC_2 ("sb", VAR_9, VAR_21,
      "Disable some breakpoints.\nArguments are breakpoint numbers with spaces in between.\nTo disable all breakpoints, give no argument.\nA disabled breakpoint is not forgotten, but has no effect until reenabled.");




  FUNC_1 ("breakpoints", VAR_8, VAR_21,
    "Disable some breakpoints.\nArguments are breakpoint numbers with spaces in between.\nTo disable all breakpoints, give no argument.\nA disabled breakpoint is not forgotten, but has no effect until reenabled.\nThis command may be abbreviated \"disable\".",




    &VAR_22);

  FUNC_5 ("delete", VAR_9, VAR_19,
    "Delete some breakpoints or auto-display expressions.\nArguments are breakpoint numbers with spaces in between.\nTo delete all breakpoints, give no argument.\n\nAlso a prefix command for deletion of other GDB objects.\nThe \"unset\" command is also an alias for \"delete\".",





    &VAR_20, "delete ", 1, &VAR_15);
  FUNC_3 ("d", "delete", VAR_9, 1);
  if (VAR_49)
    FUNC_2 ("db", VAR_9, VAR_19,
      "Delete some breakpoints.\nArguments are breakpoint numbers with spaces in between.\nTo delete all breakpoints, give no argument.\n");



  FUNC_1 ("breakpoints", VAR_8, VAR_19,
    "Delete some breakpoints or auto-display expressions.\nArguments are breakpoint numbers with spaces in between.\nTo delete all breakpoints, give no argument.\nThis command may be abbreviated \"delete\".",



    &VAR_20);

  FUNC_2 ("clear", VAR_9, VAR_14,
    FUNC_9 ("Clear breakpoint at specified line or function.\nArgument may be line number, function name, or \"*\" and an address.\nIf line number is specified, all breakpoints in that line are cleared.\nIf function is specified, breakpoints at beginning of function are cleared.\nIf an address is specified, breakpoints at that address are cleared.\n\n",




     "With no argument, clears all breakpoints in the line that the selected frame\nis executing in.\n\nSee also the \"delete\" command which clears breakpoints by number.", ((void*)0)));




  VAR_52 = FUNC_2 ("break", VAR_9, VAR_2,
        FUNC_9 ("Set breakpoint at specified line or function.\nArgument may be line number, function name, or \"*\" and an address.\nIf line number is specified, break at start of code for that line.\nIf function is specified, break at start of code for that function.\nIf an address is specified, break at that exact address.\n",




     "With no arg, uses current execution address of selected stack frame.\nThis is useful for breaking on return to a stack frame.\n\nMultiple breakpoints at one place are permitted, and useful if conditional.\n\nDo \"help breakpoints\" for info on other commands dealing with breakpoints.", ((void*)0)));





  FUNC_10 (VAR_52, VAR_30);

  FUNC_3 ("b", "break", VAR_12, 1);
  FUNC_3 ("br", "break", VAR_12, 1);
  FUNC_3 ("bre", "break", VAR_12, 1);
  FUNC_3 ("brea", "break", VAR_12, 1);

 if (VAR_49)
    {
      FUNC_3 ("ba", "break", VAR_9, 1);
      FUNC_3 ("bu", "ubreak", VAR_9, 1);
    }

  if (VAR_18)
    {
      FUNC_0 ("stop", VAR_9, VAR_40,
 "Break in function/address or break at a line in the current file.",
        &VAR_43, "stop ", 1, &VAR_15);
      FUNC_1 ("in", VAR_9, VAR_42,
        "Break in function or address.\n", &VAR_43);
      FUNC_1 ("at", VAR_9, VAR_41,
        "Break at a line in the current file.\n", &VAR_43);
      FUNC_2 ("status", VAR_10, VAR_5,
        FUNC_9 ("Status of user-settable breakpoints, or breakpoint number NUMBER.\nThe \"Type\" column indicates one of:\n\tbreakpoint     - normal breakpoint\n\twatchpoint     - watchpoint\nThe \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\nthe disposition of the breakpoint after it gets hit.  \"dis\" means that the\nbreakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\naddress and file/line number respectively.\n\n",







         "Convenience variable \"$_\" and default examine address for \"x\"\nare set to the address of the last breakpoint listed.\n\nConvenience variable \"$bpnum\" contains the number of the last\nbreakpoint set.", ((void*)0)));



    }

  FUNC_4 ("breakpoints", VAR_5,
     FUNC_9 ("Status of user-settable breakpoints, or breakpoint number NUMBER.\nThe \"Type\" column indicates one of:\n\tbreakpoint     - normal breakpoint\n\twatchpoint     - watchpoint\nThe \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\nthe disposition of the breakpoint after it gets hit.  \"dis\" means that the\nbreakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\naddress and file/line number respectively.\n\n",







      "Convenience variable \"$_\" and default examine address for \"x\"\nare set to the address of the last breakpoint listed.\n\nConvenience variable \"$bpnum\" contains the number of the last\nbreakpoint set.", ((void*)0)));




  if (VAR_49)
    FUNC_2 ("lb", VAR_9, VAR_5,
      FUNC_9 ("Status of user-settable breakpoints, or breakpoint number NUMBER.\nThe \"Type\" column indicates one of:\n\tbreakpoint     - normal breakpoint\n\twatchpoint     - watchpoint\nThe \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\nthe disposition of the breakpoint after it gets hit.  \"dis\" means that the\nbreakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\naddress and file/line number respectively.\n\n",







       "Convenience variable \"$_\" and default examine address for \"x\"\nare set to the address of the last breakpoint listed.\n\nConvenience variable \"$bpnum\" contains the number of the last\nbreakpoint set.", ((void*)0)));




  FUNC_1 ("breakpoints", VAR_11, VAR_31,
    FUNC_9 ("Status of all breakpoints, or breakpoint number NUMBER.\nThe \"Type\" column indicates one of:\n\tbreakpoint     - normal breakpoint\n\twatchpoint     - watchpoint\n\tlongjmp        - internal breakpoint used to step through longjmp()\n\tlongjmp resume - internal breakpoint at the target of longjmp()\n\tuntil          - internal breakpoint used by the \"until\" command\n\tfinish         - internal breakpoint used by the \"finish\" command\n",







     "The \"Disp\" column contains one of \"keep\", \"del\", or \"dis\" to indicate\nthe disposition of the breakpoint after it gets hit.  \"dis\" means that the\nbreakpoint will be disabled.  The \"Address\" and \"What\" columns indicate the\naddress and file/line number respectively.\n\n",



     "Convenience variable \"$_\" and default examine address for \"x\"\nare set to the address of the last breakpoint listed.\n\nConvenience variable \"$bpnum\" contains the number of the last\nbreakpoint set.", ((void*)0)),



    &VAR_32);

  FUNC_2 ("catch", VAR_9, VAR_7,
    "Set catchpoints to catch events.\nRaised signals may be caught:\n\tcatch signal              - all signals\n\tcatch signal <signame>    - a particular signal\nRaised exceptions may be caught:\n\tcatch throw               - all exceptions, when thrown\n\tcatch throw <exceptname>  - a particular exception, when thrown\n\tcatch catch               - all exceptions, when caught\n\tcatch catch <exceptname>  - a particular exception, when caught\nThread or process events may be caught:\n\tcatch thread_start        - any threads, just after creation\n\tcatch thread_exit         - any threads, just before expiration\n\tcatch thread_join         - any threads, just after joins\nProcess events may be caught:\n\tcatch start               - any processes, just after creation\n\tcatch exit                - any processes, just before expiration\n\tcatch fork                - calls to fork()\n\tcatch vfork               - calls to vfork()\n\tcatch exec                - calls to exec()\nDynamically-linked library events may be caught:\n\tcatch load                - loads of any library\n\tcatch load <libname>      - loads of a particular library\n\tcatch unload              - unloads of any library\n\tcatch unload <libname>    - unloads of a particular library\nThe act of your program's execution stopping may also be caught:\n\tcatch stop\n\nC++ exceptions may be caught:\n\tcatch throw               - all exceptions, when thrown\n\tcatch catch               - all exceptions, when caught\n\nDo \"help set follow-fork-mode\" for info on debugging your program\nafter a fork or vfork is caught.\n\nDo \"help breakpoints\" for info on other commands dealing with breakpoints.");
  FUNC_2 ("tcatch", VAR_9, VAR_45,
    "Set temporary catchpoints to catch events.\nArgs like \"catch\" command.\nLike \"catch\" except the catchpoint is only temporary,\nso it will be deleted when hit.  Equivalent to \"catch\" followed\nby using \"enable delete\" on the catchpoint number.");





  VAR_52 = FUNC_2 ("watch", VAR_9, VAR_48,
        "Set a watchpoint for an expression.\nA watchpoint stops execution of your program whenever the value of\nan expression changes.");


  FUNC_10 (VAR_52, VAR_30);

  VAR_52 = FUNC_2 ("rwatch", VAR_9, VAR_35,
        "Set a read watchpoint for an expression.\nA watchpoint stops execution of your program whenever the value of\nan expression is read.");


  FUNC_10 (VAR_52, VAR_30);

  VAR_52 = FUNC_2 ("awatch", VAR_9, VAR_1,
        "Set a watchpoint for an expression.\nA watchpoint stops execution of your program whenever the value of\nan expression is either read or written.");


  FUNC_10 (VAR_52, VAR_30);

  FUNC_4 ("watchpoints", VAR_5,
     "Synonym for ``info breakpoints''.");


  VAR_52 = FUNC_6 ("can-use-hw-watchpoints", VAR_13, VAR_47,
     (char *) &VAR_6,
     "Set debugger's willingness to use watchpoint hardware.\nIf zero, gdb will not use hardware for new watchpoints, even if\nsuch is available.  (However, any hardware watchpoints that were\ncreated before setting this to nonzero, will continue to use watchpoint\nhardware.)",




     &VAR_37);
  FUNC_8 (VAR_52, &VAR_39);

  VAR_6 = 1;

  FUNC_5 ("breakpoint", VAR_11, VAR_36, "Breakpoint specific settings\nConfigure various breakpoint-specific variables such as\npending breakpoint behavior",



    &VAR_50, "set breakpoint ",
    0 , &VAR_37);
  FUNC_5 ("breakpoint", VAR_11, VAR_38, "Breakpoint specific settings\nConfigure various breakpoint-specific variables such as\npending breakpoint behavior",



    &VAR_51, "show breakpoint ",
    0 , &VAR_39);

  FUNC_7 ("pending", VAR_33, &VAR_34, "Set debugger's behavior regarding pending breakpoints.\nIf on, an unrecognized breakpoint location will cause gdb to create a\npending breakpoint.  If off, an unrecognized breakpoint location results in\nan error.  If auto, an unrecognized breakpoint location results in a\nuser-query to see if a pending breakpoint should be created.","Show debugger's behavior regarding pending breakpoints.\nIf on, an unrecognized breakpoint location will cause gdb to create a\npending breakpoint.  If off, an unrecognized breakpoint location results in\nan error.  If auto, an unrecognized breakpoint location results in a\nuser-query to see if a pending breakpoint should be created.",
    ((void*)0), ((void*)0),
    &VAR_50,
    &VAR_51);

  VAR_34 = VAR_0;
}
