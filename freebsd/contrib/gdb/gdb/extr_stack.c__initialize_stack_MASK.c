
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
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
 scalar_t__ VAR_12 ;
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
 scalar_t__ VAR_25 ;

void
FUNC_5 (void)
{




  FUNC_1 ("return", VAR_9, VAR_19,
    "Make selected stack frame return to its caller.\nControl remains in the debugger, but when you continue\nexecution will resume in the frame above the one now selected.\nIf an argument is given, it is an expression for the value to return.");




  FUNC_1 ("up", VAR_9, VAR_23,
    "Select and print stack frame that called this one.\nAn argument says how many frames up to go.");

  FUNC_1 ("up-silently", VAR_10, VAR_24,
    "Same as the `up' command, but does not print anything.\nThis is useful in command scripts.");


  FUNC_1 ("down", VAR_9, VAR_13,
    "Select and print stack frame called by this one.\nAn argument says how many frames down to go.");

  FUNC_2 ("do", "down", VAR_9, 1);
  FUNC_2 ("dow", "down", VAR_9, 1);
  FUNC_1 ("down-silently", VAR_10, VAR_14,
    "Same as the `down' command, but does not print anything.\nThis is useful in command scripts.");


  FUNC_1 ("frame", VAR_9, VAR_15,
    "Select and print a stack frame.\nWith no argument, print the selected stack frame.  (See also \"info frame\").\nAn argument specifies the frame to select.\nIt can be a stack frame number or the address of the frame.\nWith argument, nothing is printed if input is coming from\na command file or a user-defined command.");






  FUNC_2 ("f", "frame", VAR_9, 1);

  if (VAR_25)
    {
      FUNC_1 ("L", VAR_9, VAR_11,
        "Print the current stack frame.\n");
      FUNC_2 ("V", "frame", VAR_9, 1);
    }
  FUNC_1 ("select-frame", VAR_9, VAR_20,
    "Select a stack frame without printing anything.\nAn argument specifies the frame to select.\nIt can be a stack frame number or the address of the frame.\n");



  FUNC_1 ("backtrace", VAR_9, VAR_2,
    "Print backtrace of all stack frames, or innermost COUNT frames.\nWith a negative argument, print outermost -COUNT frames.\nUse of the 'full' qualifier also prints the values of the local variables.\n");


  FUNC_2 ("bt", "backtrace", VAR_9, 0);
  if (VAR_25)
    {
      FUNC_2 ("t", "backtrace", VAR_9, 0);
      FUNC_1 ("T", VAR_9, VAR_3,
        "Print backtrace of all stack frames, or innermost COUNT frames \nand the values of the local variables.\nWith a negative argument, print outermost -COUNT frames.\nUsage: T <count>\n");



    }

  FUNC_2 ("where", "backtrace", VAR_7, 0);
  FUNC_3 ("stack", VAR_2,
     "Backtrace of the stack, or innermost COUNT frames.");
  FUNC_4 ("s", "stack", 1);
  FUNC_3 ("frame", VAR_16,
     "All about selected stack frame, or frame at ADDR.");
  FUNC_4 ("f", "frame", 1);
  FUNC_3 ("locals", VAR_18,
     "Local variables of current stack frame.");
  FUNC_3 ("args", VAR_0,
     "Argument variables of current stack frame.");
  if (VAR_25)
    FUNC_1 ("l", VAR_8, VAR_1,
      "Argument and local variables of current stack frame.");

  if (VAR_12)
    FUNC_1 ("func", VAR_9, VAR_17,
      "Select the stack frame that contains <func>.\nUsage: func <name>\n");

  FUNC_3 ("catch", VAR_6,
     "Exceptions that can be caught in the current stack frame.");
}
