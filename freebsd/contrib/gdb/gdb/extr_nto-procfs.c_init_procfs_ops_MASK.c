
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; int to_have_continuable_watchpoint; int to_magic; int to_stratum; int to_stop; int to_pid_to_str; int to_find_new_threads; int to_thread_alive; int to_notice_signals; int to_can_run; int to_mourn_inferior; int to_create_inferior; int to_kill; int to_terminal_info; int to_terminal_ours; int to_terminal_ours_for_output; int to_terminal_inferior; int to_terminal_init; int to_stopped_by_watchpoint; int to_remove_watchpoint; int to_insert_watchpoint; void* to_remove_hw_breakpoint; int to_insert_hw_breakpoint; int to_can_use_hw_breakpoint; void* to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_detach; int to_post_attach; int to_attach; int to_open; } ;


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
 TYPE_1__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
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
  VAR_18.to_shortname = "procfs";
  VAR_18.to_longname = "QNX Neutrino procfs child process";
  VAR_18.to_doc =
    "QNX Neutrino procfs child process (started by the \"run\" command).\n	target procfs <node>";

  VAR_18.to_open = VAR_17;
  VAR_18.to_attach = VAR_3;
  VAR_18.to_post_attach = VAR_20;
  VAR_18.to_detach = VAR_7;
  VAR_18.to_resume = VAR_24;
  VAR_18.to_wait = VAR_29;
  VAR_18.to_fetch_registers = VAR_8;
  VAR_18.to_store_registers = VAR_27;
  VAR_18.to_prepare_to_store = VAR_21;
  VAR_18.to_xfer_memory = VAR_30;
  VAR_18.to_files_info = VAR_9;
  VAR_18.to_insert_breakpoint = VAR_11;
  VAR_18.to_remove_breakpoint = VAR_22;
  VAR_18.to_can_use_hw_breakpoint = VAR_5;
  VAR_18.to_insert_hw_breakpoint = VAR_12;
  VAR_18.to_remove_hw_breakpoint = VAR_22;
  VAR_18.to_insert_watchpoint = VAR_13;
  VAR_18.to_remove_watchpoint = VAR_23;
  VAR_18.to_stopped_by_watchpoint = VAR_26;
  VAR_18.to_terminal_init = VAR_32;
  VAR_18.to_terminal_inferior = VAR_31;
  VAR_18.to_terminal_ours_for_output = VAR_34;
  VAR_18.to_terminal_ours = VAR_33;
  VAR_18.to_terminal_info = VAR_1;
  VAR_18.to_kill = VAR_14;
  VAR_18.to_create_inferior = VAR_6;
  VAR_18.to_mourn_inferior = VAR_15;
  VAR_18.to_can_run = VAR_4;
  VAR_18.to_notice_signals = VAR_16;
  VAR_18.to_thread_alive = VAR_28;
  VAR_18.to_find_new_threads = VAR_10;
  VAR_18.to_pid_to_str = VAR_19;
  VAR_18.to_stop = VAR_25;
  VAR_18.to_stratum = VAR_2;
  VAR_18.to_has_all_memory = 1;
  VAR_18.to_has_memory = 1;
  VAR_18.to_has_stack = 1;
  VAR_18.to_has_registers = 1;
  VAR_18.to_has_execution = 1;
  VAR_18.to_magic = VAR_0;
  VAR_18.to_have_continuable_watchpoint = 1;
}
