
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct cmd_list_element {int dummy; } ;
struct TYPE_12__ {void* detect; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (char*,int ,int ,char*,struct cmd_list_element**) ;
 int FUNC_2 (TYPE_1__*,char*,char*,int ,int ,struct cmd_list_element**,struct cmd_list_element**,int) ;
 int FUNC_3 (char*,int ,int ,char*,struct cmd_list_element**,char*,int ,struct cmd_list_element**) ;
 int FUNC_4 (char*,int ,int ,char*,char*,struct cmd_list_element**) ;
 int FUNC_5 (char*,int ,int *,char*,char*,int ,int ,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_6 (char*,int ,int *,char*,char*,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_7 (char*,int ,int ,int *,char*,char*,int *,int *,struct cmd_list_element**,struct cmd_list_element**) ;
 int FUNC_8 (int ,struct cmd_list_element**) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cmd_list_element* VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_13 ;
 int FUNC_15 () ;
 int FUNC_16 (struct cmd_list_element*,struct cmd_list_element*) ;
 struct cmd_list_element* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (int ) ;
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
 TYPE_1__ VAR_28 ;
 TYPE_1__ VAR_29 ;
 TYPE_1__* VAR_30 ;
 TYPE_1__ VAR_31 ;
 TYPE_1__ VAR_32 ;
 TYPE_1__ VAR_33 ;
 TYPE_1__ VAR_34 ;
 TYPE_1__ VAR_35 ;
 TYPE_1__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 struct cmd_list_element* VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 struct cmd_list_element* VAR_72 ;
 int VAR_73 ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;

void
FUNC_19 (void)
{
  static struct cmd_list_element *VAR_77;
  static struct cmd_list_element *VAR_78;
  struct cmd_list_element *VAR_79;


  VAR_22 = FUNC_17 (VAR_13);



  FUNC_0 (VAR_18);
  FUNC_10 (((void*)0), 0, VAR_6);

  FUNC_14 ();
  FUNC_9 (&VAR_27);

  FUNC_12 ();
  FUNC_9 (&VAR_12);

  FUNC_13 ();
  FUNC_9 (&VAR_19);

  FUNC_11 ();
  FUNC_9 (&VAR_11);


  VAR_26 = VAR_73;
  VAR_73 = VAR_25;







  FUNC_3 ("remote", VAR_7, VAR_39, "Remote protocol specific variables\nConfigure various remote-protocol specific variables such as\nthe packets being used",



    &VAR_77, "set remote ",
    0 , &VAR_54);
  FUNC_3 ("remote", VAR_7, VAR_57, "Remote protocol specific variables\nConfigure various remote-protocol specific variables such as\nthe packets being used",



    &VAR_78, "show remote ",
    0 , &VAR_72);

  FUNC_1 ("compare-sections", VAR_8, VAR_10,
    "Compare section data on target to the exec file.\nArgument is a single section name (default: all loaded sections).",

    &VAR_9);

  FUNC_1 ("packet", VAR_7, VAR_16,
    "Send an arbitrary packet to a remote target.\n   maintenance packet TEXT\nIf GDB is talking to an inferior via the GDB serial protocol, then\nthis command sends the string TEXT to the inferior, and displays the\nresponse packet.  GDB supplies the initial `$' character, and the\nterminating `#' character and checksum.",





    &VAR_14);

  FUNC_6 ("remotebreak", VAR_15, &VAR_21,
      "Set whether to send break if interrupted.\n",
      "Show whether to send break if interrupted.\n",
      ((void*)0), ((void*)0),
      &VAR_54, &VAR_72);



  FUNC_1 ("remotewritesize", VAR_15, VAR_38,
    "Set the maximum number of bytes per memory write packet (deprecated).\n",
    &VAR_54);
  FUNC_1 ("remotewritesize", VAR_15, VAR_56,
    "Show the maximum number of bytes per memory write packet (deprecated).\n",
    &VAR_72);
  FUNC_1 ("memory-write-packet-size", VAR_15,
    VAR_38,
    "Set the maximum number of bytes per memory-write packet.\n"
    "Specify the number of bytes in a packet or 0 (zero) for the\n"
    "default packet size.  The actual limit is further reduced\n"
    "dependent on the target.  Specify ``fixed'' to disable the\n"
    "further restriction and ``limit'' to enable that restriction\n",
    &VAR_77);
  FUNC_1 ("memory-read-packet-size", VAR_15,
    VAR_37,
    "Set the maximum number of bytes per memory-read packet.\n"
    "Specify the number of bytes in a packet or 0 (zero) for the\n"
    "default packet size.  The actual limit is further reduced\n"
    "dependent on the target.  Specify ``fixed'' to disable the\n"
    "further restriction and ``limit'' to enable that restriction\n",
    &VAR_77);
  FUNC_1 ("memory-write-packet-size", VAR_15,
    VAR_56,
    "Show the maximum number of bytes per memory-write packet.\n",
    &VAR_78);
  FUNC_1 ("memory-read-packet-size", VAR_15,
    VAR_55,
    "Show the maximum number of bytes per memory-read packet.\n",
    &VAR_78);

  FUNC_7 ("hardware-watchpoint-limit", VAR_15,
     VAR_76, &VAR_24, "Set the maximum number of target hardware watchpoints.\nSpecify a negative limit for unlimited.", "Show the maximum number of target hardware watchpoints.\n",



     ((void*)0), ((void*)0), &VAR_77, &VAR_78);
  FUNC_7 ("hardware-breakpoint-limit", VAR_15,
     VAR_76, &VAR_23, "Set the maximum number of target hardware breakpoints.\nSpecify a negative limit for unlimited.", "Show the maximum number of target hardware breakpoints.\n",



     ((void*)0), ((void*)0), &VAR_77, &VAR_78);

  FUNC_8
    (FUNC_4 ("remoteaddresssize", VAR_8,
    VAR_75, (char *) &VAR_18,
    "Set the maximum size of the address (in bits) in a memory packet.\n",

    &VAR_54),
     &VAR_72);

  FUNC_2 (&VAR_31,
    "X", "binary-download",
    VAR_48,
    VAR_66,
    &VAR_77, &VAR_78,
    1);
  FUNC_2 (&VAR_36,
    "vCont", "verbose-resume",
    VAR_53,
    VAR_71,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_35,
    "qSymbol", "symbol-lookup",
    VAR_52,
    VAR_70,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_32,
    "e", "step-over-range",
    VAR_49,
    VAR_67,
    &VAR_77, &VAR_78,
    0);


  VAR_32.detect = VAR_0;
  FUNC_18 (&VAR_32);

  FUNC_2 (&VAR_28,
    "E", "step-over-range-w-signal",
    VAR_40,
    VAR_58,
    &VAR_77, &VAR_78,
    0);


  VAR_28.detect = VAR_0;
  FUNC_18 (&VAR_28);

  FUNC_2 (&VAR_29,
    "P", "set-register",
    VAR_41,
    VAR_59,
    &VAR_77, &VAR_78,
    1);

  FUNC_2 (&VAR_30[VAR_4],
    "Z0", "software-breakpoint",
    VAR_46,
    VAR_64,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_30[VAR_2],
    "Z1", "hardware-breakpoint",
    VAR_43,
    VAR_61,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_30[VAR_5],
    "Z2", "write-watchpoint",
    VAR_47,
    VAR_65,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_30[VAR_3],
    "Z3", "read-watchpoint",
    VAR_45,
    VAR_63,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_30[VAR_1],
    "Z4", "access-watchpoint",
    VAR_42,
    VAR_60,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_33,
    "qPart_auxv", "read-aux-vector",
    VAR_50,
    VAR_68,
    &VAR_77, &VAR_78,
    0);

  FUNC_2 (&VAR_34,
    "qPart_dirty", "read-dirty-registers",
    VAR_51,
    VAR_69,
    &VAR_77, &VAR_78,
    0);


  FUNC_5 ("Z-packet", VAR_8,
    &VAR_17, "Set use of remote protocol `Z' packets",

    "Show use of remote protocol `Z' packets ",
    VAR_44,
    VAR_62,
    &VAR_77, &VAR_78);


  FUNC_16 (VAR_77, VAR_78);
}
