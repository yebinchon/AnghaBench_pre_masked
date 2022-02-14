
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memrange {int dummy; } ;
struct cmd_list_element {int dummy; } ;
struct agent_expr {int dummy; } ;
struct TYPE_4__ {int listsize; int aexpr_listsize; int * aexpr_list; int * list; } ;
struct TYPE_3__ {int listsize; int aexpr_listsize; int * aexpr_list; int * list; } ;
typedef int LONGEST ;


 int FUNC_0 (char*,int ,int *,char*,int *) ;
 struct cmd_list_element* FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,char*,int ,int) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int ,char*,int *,char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*) ;
 int VAR_14 ;
 int FUNC_7 (struct cmd_list_element*,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 TYPE_1__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_9 (int ,int ) ;
 int VAR_40 ;
 void* FUNC_10 (int) ;

void
FUNC_11 (void)
{
  struct cmd_list_element *VAR_41;

  VAR_34 = 0;
  VAR_35 = 0;
  VAR_33 = -1;
  VAR_37 = -1;

  FUNC_8 (FUNC_6 ("tpnum"),
     FUNC_9 (VAR_0, (LONGEST) 0));
  FUNC_8 (FUNC_6 ("trace_frame"),
     FUNC_9 (VAR_0, (LONGEST) - 1));

  if (VAR_36.list == ((void*)0))
    {
      VAR_36.listsize = 128;
      VAR_36.list = FUNC_10
 (VAR_36.listsize * sizeof (struct memrange));
    }
  if (VAR_36.aexpr_list == ((void*)0))
    {
      VAR_36.aexpr_listsize = 128;
      VAR_36.aexpr_list = FUNC_10
 (VAR_36.aexpr_listsize * sizeof (struct agent_expr *));
    }

  if (VAR_15.list == ((void*)0))
    {
      VAR_15.listsize = 128;
      VAR_15.list = FUNC_10
 (VAR_15.listsize * sizeof (struct memrange));
    }

  if (VAR_15.aexpr_list == ((void*)0))
    {
      VAR_15.aexpr_listsize = 128;
      VAR_15.aexpr_list = FUNC_10
 (VAR_15.aexpr_listsize * sizeof (struct agent_expr *));
    }

  FUNC_3 ("scope", VAR_14,
     "List the variables local to a scope");

  FUNC_0 ("tracepoints", VAR_2, ((void*)0),
    "Tracing of program execution without stopping the program.",
    &VAR_3);

  FUNC_3 ("tracepoints", VAR_39,
     "Status of tracepoints, or tracepoint number NUMBER.\nConvenience variable \"$tpnum\" contains the number of the\nlast tracepoint set.");



  FUNC_4 ("tp", "tracepoints", 1);

  VAR_41 = FUNC_1 ("save-tracepoints", VAR_2, VAR_38,
        "Save current tracepoint definitions as a script.\nUse the 'source' command in another debug session to restore them.");

  FUNC_7 (VAR_41, VAR_12);

  FUNC_1 ("tdump", VAR_2, VAR_19,
    "Print everything collected at the current tracepoint.");

  FUNC_5 ("tfind", VAR_2, VAR_20,
    "Select a trace frame;\nNo argument means forward by one frame; '-' meand backward by one frame.",

    &VAR_16, "tfind ", 1, &VAR_3);

  FUNC_0 ("outside", VAR_2, VAR_24,
    "Select a trace frame whose PC is outside the given range.\nUsage: tfind outside addr1, addr2",

    &VAR_16);

  FUNC_0 ("range", VAR_2, VAR_26,
    "Select a trace frame whose PC is in the given range.\nUsage: tfind range addr1,addr2",

    &VAR_16);

  FUNC_0 ("line", VAR_2, VAR_22,
    "Select a trace frame by source line.\nArgument can be a line number (with optional source file), \na function name, or '*' followed by an address.\nDefault argument is 'the next source line that was traced'.",



    &VAR_16);

  FUNC_0 ("tracepoint", VAR_2, VAR_28,
    "Select a trace frame by tracepoint number.\nDefault is the tracepoint for the current trace frame.",

    &VAR_16);

  FUNC_0 ("pc", VAR_2, VAR_25,
    "Select a trace frame by PC.\nDefault is the current PC, or the PC of the current trace frame.",

    &VAR_16);

  FUNC_0 ("end", VAR_2, VAR_21,
    "Synonym for 'none'.\nDe-select any trace frame and resume 'live' debugging.",

    &VAR_16);

  FUNC_0 ("none", VAR_2, VAR_23,
    "De-select any trace frame and resume 'live' debugging.",
    &VAR_16);

  FUNC_0 ("start", VAR_2, VAR_27,
    "Select the first trace frame in the trace buffer.",
    &VAR_16);

  FUNC_1 ("tstatus", VAR_2, VAR_31,
    "Display the status of the current trace data collection.");

  FUNC_1 ("tstop", VAR_2, VAR_32,
    "Stop trace data collection.");

  FUNC_1 ("tstart", VAR_2, VAR_30,
    "Start trace data collection.");

  FUNC_1 ("passcount", VAR_2, VAR_29,
    "Set the passcount for a tracepoint.\nThe trace will end when the tracepoint has been passed 'count' times.\nUsage: passcount COUNT TPNUM, where TPNUM may also be \"all\";\nif TPNUM is omitted, passcount refers to the last tracepoint defined.");




  FUNC_1 ("end", VAR_2, VAR_11,
    "Ends a list of commands or actions.\nSeveral GDB commands allow you to enter a list of commands or actions.\nEntering \"end\" on a line by itself is the normal way to terminate\nsuch a list.\n\nNote: the \"end\" command cannot be used at the gdb prompt.");





  FUNC_1 ("while-stepping", VAR_2, VAR_40,
    "Specify single-stepping behavior at a tracepoint.\nArgument is number of instructions to trace in single-step mode\nfollowing the tracepoint.  This command is normally followed by\none or more \"collect\" commands, to specify what to collect\nwhile single-stepping.\n\nNote: this command can only be used in a tracepoint \"actions\" list.");






  FUNC_2 ("ws", "while-stepping", VAR_1, 0);
  FUNC_2 ("stepping", "while-stepping", VAR_1, 0);

  FUNC_1 ("collect", VAR_2, VAR_4,
    "Specify one or more data items to be collected at a tracepoint.\nAccepts a comma-separated list of (one or more) expressions.  GDB will\ncollect all data (variables, registers) referenced by that expression.\nAlso accepts the following special arguments:\n    $regs   -- all registers.\n    $args   -- all function arguments.\n    $locals -- all variables local to the block/function scope.\nNote: this command can only be used in a tracepoint \"actions\" list.");
  FUNC_1 ("actions", VAR_2, VAR_17,
    "Specify the actions to be taken at a tracepoint.\nTracepoint actions may include collecting of specified data, \nsingle-stepping, or enabling/disabling other tracepoints, \ndepending on target's capabilities.");




  FUNC_0 ("tracepoints", VAR_2, VAR_5,
    "Delete specified tracepoints.\nArguments are tracepoint numbers, separated by spaces.\nNo argument means delete all tracepoints.",


    &VAR_6);

  FUNC_0 ("tracepoints", VAR_2, VAR_7,
    "Disable specified tracepoints.\nArguments are tracepoint numbers, separated by spaces.\nNo argument means disable all tracepoints.",


    &VAR_8);

  FUNC_0 ("tracepoints", VAR_2, VAR_9,
    "Enable specified tracepoints.\nArguments are tracepoint numbers, separated by spaces.\nNo argument means enable all tracepoints.",


    &VAR_10);

  VAR_41 = FUNC_1 ("trace", VAR_2, VAR_18,
        "Set a tracepoint at a specified line or function or address.\nArgument may be a line number, function name, or '*' plus an address.\nFor a line number or function, trace at the start of its code.\nIf an address is specified, trace at that exact address.\n\nDo \"help tracepoints\" for info on other tracepoint commands.");




  FUNC_7 (VAR_41, VAR_13);

  FUNC_2 ("tp", "trace", VAR_1, 0);
  FUNC_2 ("tr", "trace", VAR_1, 1);
  FUNC_2 ("tra", "trace", VAR_1, 1);
  FUNC_2 ("trac", "trace", VAR_1, 1);
}
