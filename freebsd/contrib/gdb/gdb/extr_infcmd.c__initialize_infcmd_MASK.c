
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int ,char*,int *,char*,int ,int *) ;
 struct cmd_list_element* FUNC_6 (char*,int ,int ,char*,char*,int *) ;
 struct cmd_list_element* FUNC_7 (struct cmd_list_element*,int *) ;
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
 int FUNC_8 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_9 () ;
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
 int FUNC_10 (struct cmd_list_element*,int ) ;
 int FUNC_11 (struct cmd_list_element*,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;

void
FUNC_12 (void)
{
  struct cmd_list_element *VAR_47;

  VAR_47 = FUNC_1 ("tty", VAR_6, VAR_39,
        "Set terminal for future runs of program being debugged.");
  FUNC_10 (VAR_47, VAR_12);

  VAR_47 = FUNC_6 ("args", VAR_6, VAR_44,
     (char *) &VAR_16,
     "Set argument list to give program being debugged when it is started.\nFollow this command with any number of args, to be passed to the program.",

     &VAR_34);
  FUNC_10 (VAR_47, VAR_12);
  FUNC_11 (VAR_47, VAR_27);
  VAR_47 = FUNC_7 (VAR_47, &VAR_35);
  FUNC_11 (VAR_47, VAR_26);

  VAR_47 = FUNC_0
    ("environment", VAR_23, VAR_11,
     "The environment to give the program, or one variable's value.\nWith an argument VAR, prints the value of environment variable VAR to\ngive the program being debugged.  With no arguments, prints the entire\nenvironment to be given to the program.", &VAR_35);



  FUNC_10 (VAR_47, VAR_25);

  FUNC_5 ("unset", VAR_23, VAR_40,
    "Complement to certain \"set\" commands.",
    &VAR_42, "unset ", 0, &VAR_7);

  VAR_47 = FUNC_0 ("environment", VAR_6, VAR_41,
        "Cancel environment variable VAR for the program.\nThis does not affect the program until the next \"run\" command.",

        &VAR_42);
  FUNC_10 (VAR_47, VAR_25);

  VAR_47 = FUNC_0 ("environment", VAR_6, VAR_33,
        "Set environment variable value to give the program.\nArguments are VAR VALUE where VAR is variable name and VALUE is value.\nVALUES of environment variables are uninterpreted strings.\nThis does not affect the program until the next \"run\" command.",



        &VAR_34);
  FUNC_10 (VAR_47, VAR_25);

  VAR_47 = FUNC_1 ("path", VAR_4, VAR_28,
        "Add directory DIR(s) to beginning of search path for object files.\n$cwd in the path means the current working directory.\nThis path is equivalent to the $PATH shell variable.  It is a list of\ndirectories, separated by colons.  These directories are searched to find\nfully linked executable files and separately compiled object files as needed.");




  FUNC_10 (VAR_47, VAR_12);

  VAR_47 = FUNC_0 ("paths", VAR_23, VAR_29,
        "Current search path for finding object files.\n$cwd in the path means the current working directory.\nThis path is equivalent to the $PATH shell variable.  It is a list of\ndirectories, separated by colons.  These directories are searched to find\nfully linked executable files and separately compiled object files as needed.",




        &VAR_35);
  FUNC_10 (VAR_47, VAR_25);

  FUNC_1 ("attach", VAR_6, VAR_2,
    "Attach to a process or file outside of GDB.\nThis command attaches to another target, of the same type as your last\n\"target\" command (\"info files\" will show your target stack).\nThe command may take as argument a process id or a device file.\nFor a process id, you must have permission to send the process a signal,\nand it must have the same effective uid as the debugger.\nWhen using \"attach\" with a process id, the debugger finds the\nprogram running in the process, looking first in the current working\ndirectory, or (if not found there) using the source file search path\n(see the \"directory\" command).  You can also use the \"file\" command\nto specify the program, and to load its symbol table.");
  FUNC_1 ("detach", VAR_6, VAR_9,
    "Detach a process or file previously attached.\nIf a process, it is no longer traced, and it continues its execution.  If\nyou were debugging a file, the file is closed and gdb no longer accesses it.");



  FUNC_1 ("disconnect", VAR_6, VAR_10,
    "Disconnect from a target.\nThe target will wait for another debugger to connect.  Not available for\nall targets.");



  FUNC_1 ("signal", VAR_6, VAR_36,
    "Continue program giving it signal specified by the argument.\nAn argument of \"0\" means continue program without giving it a signal.");


  FUNC_1 ("stepi", VAR_6, VAR_38,
    "Step one instruction exactly.\nArgument N means do this N times (or till program stops for another reason).");

  FUNC_2 ("si", "stepi", VAR_3, 0);

  FUNC_1 ("nexti", VAR_6, VAR_22,
    "Step one instruction, but proceed through subroutine calls.\nArgument N means do this N times (or till program stops for another reason).");

  FUNC_2 ("ni", "nexti", VAR_3, 0);

  FUNC_1 ("finish", VAR_6, VAR_13,
    "Execute until selected stack frame returns.\nUpon return, the value returned is printed and put in the value history.");


  FUNC_1 ("next", VAR_6, VAR_21,
    "Step program, proceeding through subroutine calls.\nLike the \"step\" command as long as subroutine calls do not happen;\nwhen they do, the call is treated as one instruction.\nArgument N means do this N times (or till program stops for another reason).");



  FUNC_2 ("n", "next", VAR_6, 1);
  if (VAR_46)
    FUNC_2 ("S", "next", VAR_6, 1);

  FUNC_1 ("step", VAR_6, VAR_37,
    "Step program until it reaches a different source line.\nArgument N means do this N times (or till program stops for another reason).");

  FUNC_2 ("s", "step", VAR_6, 1);

  VAR_47 = FUNC_1 ("until", VAR_6, VAR_43,
        "Execute until the program reaches a source line greater than the current\nor a specified location (same args as break command) within the current frame.");

  FUNC_10 (VAR_47, VAR_20);
  FUNC_2 ("u", "until", VAR_6, 1);

  VAR_47 = FUNC_1 ("advance", VAR_6, VAR_0,
        "Continue the program up to the given location (same form as args for break command).\nExecution will also stop upon exit from the current stack frame.");

  FUNC_10 (VAR_47, VAR_20);

  VAR_47 = FUNC_1 ("jump", VAR_6, VAR_19,
        "Continue program being debugged at specified line or address.\nGive as argument either LINENUM or *ADDR, where ADDR is an expression\nfor an address to start at.");


  FUNC_10 (VAR_47, VAR_20);

  if (VAR_46)
    {
      VAR_47 = FUNC_1 ("go", VAR_6, VAR_15,
     "Usage: go <location>\nContinue program being debugged, stopping at specified line or \naddress.\nGive as argument either LINENUM or *ADDR, where ADDR is an \nexpression for an address to start at.\nThis command is a combination of tbreak and jump.");





      FUNC_10 (VAR_47, VAR_20);
    }

  if (VAR_46)
    FUNC_2 ("g", "go", VAR_6, 1);

  FUNC_1 ("continue", VAR_6, VAR_8,
    "Continue program being debugged, after signal or breakpoint.\nIf proceeding from breakpoint, a number N may be used as an argument,\nwhich means to set the ignore count of that breakpoint to N - 1 (so that\nthe breakpoint won't break until the Nth time it is reached).");



  FUNC_2 ("c", "cont", VAR_6, 1);
  FUNC_2 ("fg", "cont", VAR_6, 1);

  VAR_47 = FUNC_1 ("run", VAR_6, VAR_31,
    "Start debugged program.  You may specify arguments to give it.\nArgs may include \"*\", or \"[...]\"; they are expanded using \"sh\".\nInput and output redirection with \">\", \"<\", or \">>\" are also allowed.\n\nWith no arguments, uses arguments last specified (with \"run\" or \"set args\").\nTo cancel previous arguments and run with no arguments,\nuse \"set args\" without arguments.");





  FUNC_10 (VAR_47, VAR_12);
  FUNC_2 ("r", "run", VAR_6, 1);
  if (VAR_46)
    FUNC_1 ("R", VAR_6, VAR_32,
      "Start debugged program with no arguments.");

  FUNC_1 ("interrupt", VAR_6, VAR_18,
    "Interrupt the execution of the debugged program.");

  FUNC_3 ("registers", VAR_24,
     "List of integer registers and their contents, for selected stack frame.\nRegister name as argument means describe only that register.");

  FUNC_4 ("r", "registers", 1);

  if (VAR_46)
    FUNC_1 ("lr", VAR_5, VAR_24,
      "List of integer registers and their contents, for selected stack frame.\n  Register name as argument means describe only that register.");

  FUNC_3 ("all-registers", VAR_1,
     "List of all registers and their contents, for selected stack frame.\nRegister name as argument means describe only that register.");


  FUNC_3 ("program", VAR_30,
     "Execution status of the program.");

  FUNC_3 ("float", VAR_14,
     "Print the status of the floating point unit\n");

  FUNC_3 ("vector", VAR_45,
     "Print the status of the vector unit\n");

  VAR_17 = FUNC_9 ();
  FUNC_8 (VAR_17);
}
