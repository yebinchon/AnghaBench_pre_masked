
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_list_element {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,int ,int ,char*,int *,char*,int,int *) ;
 int FUNC_5 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_7 (char*,char*,char*,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* FUNC_8 (int ,int,int ,char*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (struct cmd_list_element*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

void
FUNC_10 (void)
{
  struct cmd_list_element *VAR_37;

  VAR_5 = -1;

  FUNC_3 ("address", VAR_1,
     "Describe where symbol SYM is stored.");

  FUNC_3 ("symbol", VAR_31,
     "Describe what symbol is at location ADDR.\nOnly for symbols with fixed locations (global or static scope).");


  FUNC_1 ("x", VAR_3, VAR_36,
    FUNC_7 ("Examine memory: x/FMT ADDRESS.\nADDRESS is an expression for the memory address to examine.\nFMT is a repeat count followed by a format letter and a size letter.\nFormat letters are o(octal), x(hex), d(decimal), u(unsigned decimal),\n  t(binary), f(float), a(address), i(instruction), c(char) and s(string).\n",




     "Size letters are b(byte), h(halfword), w(word), g(giant, 8 bytes).\nThe specified number of objects of the specified size are printed\naccording to the format.\n\nDefaults for format and size letters are those previously used.\nDefault count is 1.  Default address is following last thing printed\nwith this command or \"print\".", ((void*)0)));
  FUNC_3 ("display", VAR_11,
     "Expressions to display when program stops, with code numbers.");

  FUNC_0 ("undisplay", VAR_3, VAR_32,
    "Cancel some expressions to be displayed when program stops.\nArguments are the code numbers of the expressions to stop displaying.\nNo argument means cancel all automatic-display expressions.\n\"delete display\" has the same effect as this command.\nDo \"info display\" to see current list of code numbers.",




    &VAR_4);

  FUNC_1 ("display", VAR_3, VAR_10,
    "Print value of expression EXP each time the program stops.\n/FMT may be used before EXP as in the \"print\" command.\n/FMT \"i\" or \"s\" or including a size-letter is allowed,\nas in the \"x\" command, and then EXP is used to get the address to examine\nand examining is done as in the \"x\" command.\n\nWith no argument, display all currently requested auto-display expressions.\nUse \"undisplay\" to cancel display requests previously made."






    );

  FUNC_0 ("display", VAR_3, VAR_12,
    "Enable some expressions to be displayed when program stops.\nArguments are the code numbers of the expressions to resume displaying.\nNo argument means enable all automatic-display expressions.\nDo \"info display\" to see current list of code numbers.", &VAR_13);




  FUNC_0 ("display", VAR_3, VAR_8,
    "Disable some expressions to be displayed when program stops.\nArguments are the code numbers of the expressions to stop displaying.\nNo argument means disable all automatic-display expressions.\nDo \"info display\" to see current list of code numbers.", &VAR_9);




  FUNC_0 ("display", VAR_3, VAR_32,
    "Cancel some expressions to be displayed when program stops.\nArguments are the code numbers of the expressions to stop displaying.\nNo argument means cancel all automatic-display expressions.\nDo \"info display\" to see current list of code numbers.", &VAR_7);




  FUNC_1 ("printf", VAR_3, VAR_26,
    "printf \"printf format string\", arg1, arg2, arg3, ..., argn\nThis is useful for formatted output in user-defined commands.");


  FUNC_1 ("output", VAR_3, VAR_23,
    "Like \"print\" but don't put in value history and don't print newline.\nThis is useful in user-defined commands.");


  FUNC_4 ("set", VAR_3, VAR_27,
    FUNC_7 ("Evaluate expression EXP and assign result to variable VAR, using assignment\nsyntax appropriate for the current language (VAR = EXP or VAR := EXP for\nexample).  VAR may be a debugger \"convenience\" variable (names starting\nwith $), a register (a few standard names starting with $), or an actual\nvariable in the program being debugged.  EXP is any valid expression.\n",




     "Use \"set variable\" for variables with names identical to set subcommands.\n\nWith a subcommand, this command modifies parts of the gdb environment.\nYou can see these environment settings with the \"show\" command.", ((void*)0)),


    &VAR_28, "set ", 1, &VAR_4);
  if (VAR_6)
    FUNC_1 ("assign", VAR_3, VAR_27, FUNC_7 ("Evaluate expression EXP and assign result to variable VAR, using assignment\nsyntax appropriate for the current language (VAR = EXP or VAR := EXP for\nexample).  VAR may be a debugger \"convenience\" variable (names starting\nwith $), a register (a few standard names starting with $), or an actual\nvariable in the program being debugged.  EXP is any valid expression.\n",





       "Use \"set variable\" for variables with names identical to set subcommands.\n\nWith a subcommand, this command modifies parts of the gdb environment.\nYou can see these environment settings with the \"show\" command.", ((void*)0)));




  VAR_37 = FUNC_1 ("call", VAR_3, VAR_2,
        "Call a function in the program.\nThe argument is the function name and arguments, in the notation of the\ncurrent working language.  The result is printed and saved in the value\nhistory, if it is not void.");



  FUNC_9 (VAR_37, VAR_20);

  FUNC_0 ("variable", VAR_3, VAR_27,
    "Evaluate expression EXP and assign result to variable VAR, using assignment\nsyntax appropriate for the current language (VAR = EXP or VAR := EXP for\nexample).  VAR may be a debugger \"convenience\" variable (names starting\nwith $), a register (a few standard names starting with $), or an actual\nvariable in the program being debugged.  EXP is any valid expression.\nThis may usually be abbreviated to simply \"set\".",





    &VAR_28);

  VAR_37 = FUNC_1 ("print", VAR_3, VAR_24,
    FUNC_7 ("Print value of expression EXP.\nVariables accessible are those of the lexical environment of the selected\nstack frame, plus all those whose scope is global or an entire file.\n\n$NUM gets previous value number NUM.  $ and $$ are the last two values.\n$$NUM refers to NUM'th value back from the last one.\nNames starting with $ refer to registers (with the values they would have\n",






     "if the program were to return to the stack frame now selected, restoring\nall registers saved by frames farther in) or else to debugger\n\"convenience\" variables (any such name not a known register).\nUse assignment expressions to give values to convenience variables.\n",



     "\n{TYPE}ADREXP refers to a datum of data type TYPE, located at address ADREXP.\n@ is a binary operator for treating consecutive data objects\nanywhere in memory as an array.  FOO@NUM gives an array whose first\nelement is FOO, whose second element is stored in the space following\nwhere FOO is stored, etc.  FOO must be an expression whose value\nresides in memory.\n",






     "\nEXP may be preceded with /FMT, where FMT is a format letter\nbut no count or size letter (see \"x\" command).", ((void*)0)));


  FUNC_9 (VAR_37, VAR_20);
  FUNC_2 ("p", "print", VAR_3, 1);

  VAR_37 = FUNC_1 ("inspect", VAR_3, VAR_19,
    "Same as \"print\" command, except that if you are running in the epoch\nenvironment, the value is printed in its own window.");

  FUNC_9 (VAR_37, VAR_20);

  FUNC_6 (
   FUNC_5 ("max-symbolic-offset", VAR_22, VAR_34,
         (char *) &VAR_21,
       "Set the largest offset that will be printed in <symbol+1234> form.",
         &VAR_29),
        &VAR_30);
  FUNC_6 (
        FUNC_5 ("symbol-filename", VAR_22, VAR_33,
       (char *) &VAR_25,
    "Set printing of source filename and line number with <symbol>.",
       &VAR_29),
        &VAR_30);




  VAR_17 = FUNC_8 (VAR_0, 1, 0, "examine_i_type", ((void*)0));

  VAR_14 = FUNC_8 (VAR_0, 1, 0, "examine_b_type", ((void*)0));
  VAR_16 = FUNC_8 (VAR_0, 2, 0, "examine_h_type", ((void*)0));
  VAR_18 = FUNC_8 (VAR_0, 4, 0, "examine_w_type", ((void*)0));
  VAR_15 = FUNC_8 (VAR_0, 8, 0, "examine_g_type", ((void*)0));

}
