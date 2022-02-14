
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* to_longname; int to_has_all_memory; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; char* to_shortname; char* to_doc; void* to_wait; int to_open; int to_magic; int to_stratum; int to_mourn_inferior; int to_create_inferior; int to_load; int to_kill; int to_can_use_hw_breakpoint; int to_stopped_by_watchpoint; int to_remove_watchpoint; int to_insert_watchpoint; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_resume; int to_detach; int to_close; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 char VAR_6 ;
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
 TYPE_1__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 TYPE_1__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;

void
FUNC_4 (void)
{

  VAR_20.to_longname = "Remote MIPS debugging over serial line";
  VAR_20.to_close = VAR_8;
  VAR_20.to_detach = VAR_10;
  VAR_20.to_resume = VAR_25;
  VAR_20.to_fetch_registers = VAR_11;
  VAR_20.to_store_registers = VAR_28;
  VAR_20.to_prepare_to_store = VAR_21;
  VAR_20.to_xfer_memory = VAR_31;
  VAR_20.to_files_info = VAR_12;
  VAR_20.to_insert_breakpoint = VAR_13;
  VAR_20.to_remove_breakpoint = VAR_23;
  VAR_20.to_insert_watchpoint = VAR_14;
  VAR_20.to_remove_watchpoint = VAR_24;
  VAR_20.to_stopped_by_watchpoint = VAR_27;
  VAR_20.to_can_use_hw_breakpoint = VAR_7;
  VAR_20.to_kill = VAR_15;
  VAR_20.to_load = VAR_16;
  VAR_20.to_create_inferior = VAR_9;
  VAR_20.to_mourn_inferior = VAR_18;
  VAR_20.to_stratum = VAR_37;
  VAR_20.to_has_all_memory = 1;
  VAR_20.to_has_memory = 1;
  VAR_20.to_has_stack = 1;
  VAR_20.to_has_registers = 1;
  VAR_20.to_has_execution = 1;
  VAR_20.to_magic = VAR_0;


  VAR_36 = VAR_3 = VAR_5 = VAR_20;


  VAR_20.to_shortname = "mips";
  VAR_20.to_doc = "Debug a board using the MIPS remote debugging protocol over a serial line.\nThe argument is the device it is connected to or, if it contains a colon,\nHOST:PORT to access a board over a network";



  VAR_20.to_open = VAR_19;
  VAR_20.to_wait = VAR_30;

  VAR_36.to_shortname = "pmon";
  VAR_36.to_doc = "Debug a board using the PMON MIPS remote debugging protocol over a serial\nline. The argument is the device it is connected to or, if it contains a\ncolon, HOST:PORT to access a board over a network";



  VAR_36.to_open = VAR_35;
  VAR_36.to_wait = VAR_30;

  VAR_3.to_shortname = "ddb";
  VAR_3.to_doc = "Debug a board using the PMON MIPS remote debugging protocol over a serial\nline. The first argument is the device it is connected to or, if it contains\na colon, HOST:PORT to access a board over a network.  The optional second\nparameter is the temporary file in the form HOST:FILENAME to be used for\nTFTP downloads to the board.  The optional third parameter is the local name\nof the TFTP temporary file, if it differs from the filename seen by the board.";






  VAR_3.to_open = VAR_2;
  VAR_3.to_wait = VAR_30;

  VAR_5.to_shortname = "lsi";
  VAR_5.to_doc = VAR_36.to_doc;
  VAR_5.to_open = VAR_4;
  VAR_5.to_wait = VAR_30;


  FUNC_3 (&VAR_20);
  FUNC_3 (&VAR_36);
  FUNC_3 (&VAR_3);
  FUNC_3 (&VAR_5);

  FUNC_2 (
        FUNC_1 ("timeout", VAR_33, VAR_42,
       (char *) &VAR_22,
         "Set timeout in seconds for remote MIPS serial I/O.",
       &VAR_38),
        &VAR_39);

  FUNC_2 (
    FUNC_1 ("retransmit-timeout", VAR_33, VAR_42,
          (char *) &VAR_26,
          "Set retransmit timeout in seconds for remote MIPS serial I/O.\nThis is the number of seconds to wait for an acknowledgement to a packet\nbefore resending the packet.", &VAR_38),


        &VAR_39);

  FUNC_2 (
     FUNC_1 ("syn-garbage-limit", VAR_33, VAR_42,
    (char *) &VAR_29,
    "Set the maximum number of characters to ignore when scanning for a SYN.\nThis is the maximum number of characters GDB will ignore when trying to\nsynchronize with the remote system.  A value of -1 means that there is no limit\n(Note that these characters are printed out even though they are ignored.)",



    &VAR_38),
        &VAR_39);

  FUNC_2
    (FUNC_1 ("monitor-prompt", VAR_1, VAR_41,
    (char *) &VAR_17,
    "Set the prompt that GDB expects from the monitor.",
    &VAR_38),
     &VAR_39);

  FUNC_2 (
        FUNC_1 ("monitor-warnings", VAR_1, VAR_42,
       (char *) &VAR_32,
       "Set printing of monitor warnings.\n"
  "When enabled, monitor warnings about hardware breakpoints "
       "will be displayed.",
       &VAR_38),
        &VAR_39);

  FUNC_0 ("pmon <command>", VAR_1, VAR_34,
    "Send a packet to PMON (must be in debug mode).");

  FUNC_2 (FUNC_1 ("mask-address", VAR_33,
      VAR_40, &VAR_6,
      "Set zeroing of upper 32 bits of 64-bit addresses when talking to PMON targets.\nUse \"on\" to enable the masking and \"off\" to disable it.\n",

      &VAR_38),
       &VAR_39);
}
