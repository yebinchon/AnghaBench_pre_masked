
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_has_execution; int to_has_stack; int to_has_registers; int to_magic; int to_can_use_hw_breakpoint; int to_make_corefile_notes; int to_find_memory_regions; int to_has_thread_control; int to_stratum; int to_pid_to_str; int to_thread_alive; int to_find_new_threads; int to_terminal_info; int to_terminal_save_ours; int to_terminal_ours; int to_terminal_ours_for_output; int to_terminal_inferior; int to_terminal_init; int to_stop; int to_files_info; int to_notice_signals; int to_remove_breakpoint; int to_insert_breakpoint; int to_xfer_memory; int to_xfer_partial; int to_store_registers; int to_fetch_registers; int to_prepare_to_store; int to_resume; int to_wait; int to_detach; int to_attach; int to_mourn_inferior; int to_kill; int to_create_inferior; int to_can_run; int to_open; } ;


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
 TYPE_1__ VAR_19 ;
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

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_19.to_shortname = "procfs";
  VAR_19.to_longname = "Unix /proc child process";
  VAR_19.to_doc =
    "Unix /proc child process (started by the \"run\" command).";
  VAR_19.to_open = VAR_18;
  VAR_19.to_can_run = VAR_7;
  VAR_19.to_create_inferior = VAR_9;
  VAR_19.to_kill = VAR_14;
  VAR_19.to_mourn_inferior = VAR_16;
  VAR_19.to_attach = VAR_6;
  VAR_19.to_detach = VAR_10;
  VAR_19.to_wait = VAR_26;
  VAR_19.to_resume = VAR_22;
  VAR_19.to_prepare_to_store = VAR_21;
  VAR_19.to_fetch_registers = VAR_11;
  VAR_19.to_store_registers = VAR_24;
  VAR_19.to_xfer_partial = VAR_28;
  VAR_19.to_xfer_memory = VAR_27;
  VAR_19.to_insert_breakpoint = VAR_2;
  VAR_19.to_remove_breakpoint = VAR_3;
  VAR_19.to_notice_signals = VAR_17;
  VAR_19.to_files_info = VAR_12;
  VAR_19.to_stop = VAR_23;

  VAR_19.to_terminal_init = VAR_31;
  VAR_19.to_terminal_inferior = VAR_30;
  VAR_19.to_terminal_ours_for_output = VAR_33;
  VAR_19.to_terminal_ours = VAR_32;
  VAR_19.to_terminal_save_ours = VAR_34;
  VAR_19.to_terminal_info = VAR_1;

  VAR_19.to_find_new_threads = VAR_13;
  VAR_19.to_thread_alive = VAR_25;
  VAR_19.to_pid_to_str = VAR_20;

  VAR_19.to_has_all_memory = 1;
  VAR_19.to_has_memory = 1;
  VAR_19.to_has_execution = 1;
  VAR_19.to_has_stack = 1;
  VAR_19.to_has_registers = 1;
  VAR_19.to_stratum = VAR_5;
  VAR_19.to_has_thread_control = VAR_29;
  VAR_19.to_find_memory_regions = VAR_4;
  VAR_19.to_make_corefile_notes = VAR_15;
  VAR_19.to_can_use_hw_breakpoint = VAR_8;
  VAR_19.to_magic = VAR_0;
}
