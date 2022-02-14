
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; int to_magic; int to_stratum; int to_pid_to_exec_file; int to_get_current_exception_event; int to_enable_exception_callback; int to_stop; int to_pid_to_str; int to_thread_alive; int to_can_run; int to_mourn_inferior; int to_has_exited; int to_reported_exec_events_per_exec_call; int to_remove_exec_catchpoint; int to_insert_exec_catchpoint; int to_follow_fork; int to_remove_vfork_catchpoint; int to_insert_vfork_catchpoint; int to_remove_fork_catchpoint; int to_insert_fork_catchpoint; int to_acknowledge_created_inferior; int to_post_startup_inferior; int to_create_inferior; int to_kill; int to_terminal_info; int to_terminal_ours; int to_terminal_save_ours; int to_terminal_ours_for_output; int to_terminal_inferior; int to_terminal_init; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_partial; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_post_wait; int to_wait; int to_resume; int to_detach; int to_post_attach; int to_attach; int to_open; } ;


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
 TYPE_1__ VAR_16 ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
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

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_16.to_shortname = "child";
  VAR_16.to_longname = "Unix child process";
  VAR_16.to_doc = "Unix child process (started by the \"run\" command).";
  VAR_16.to_open = VAR_15;
  VAR_16.to_attach = VAR_2;
  VAR_16.to_post_attach = VAR_19;
  VAR_16.to_detach = VAR_5;
  VAR_16.to_resume = VAR_27;
  VAR_16.to_wait = VAR_31;
  VAR_16.to_post_wait = VAR_21;
  VAR_16.to_fetch_registers = VAR_34;
  VAR_16.to_store_registers = VAR_39;
  VAR_16.to_prepare_to_store = VAR_22;
  VAR_16.to_xfer_memory = VAR_32;
  VAR_16.to_xfer_partial = VAR_33;
  VAR_16.to_files_info = VAR_7;
  VAR_16.to_insert_breakpoint = VAR_36;
  VAR_16.to_remove_breakpoint = VAR_37;
  VAR_16.to_terminal_init = VAR_41;
  VAR_16.to_terminal_inferior = VAR_40;
  VAR_16.to_terminal_ours_for_output = VAR_43;
  VAR_16.to_terminal_save_ours = VAR_44;
  VAR_16.to_terminal_ours = VAR_42;
  VAR_16.to_terminal_info = VAR_29;
  VAR_16.to_kill = VAR_35;
  VAR_16.to_create_inferior = VAR_4;
  VAR_16.to_post_startup_inferior = VAR_20;
  VAR_16.to_acknowledge_created_inferior = VAR_1;
  VAR_16.to_insert_fork_catchpoint = VAR_12;
  VAR_16.to_remove_fork_catchpoint = VAR_24;
  VAR_16.to_insert_vfork_catchpoint = VAR_13;
  VAR_16.to_remove_vfork_catchpoint = VAR_25;
  VAR_16.to_follow_fork = VAR_8;
  VAR_16.to_insert_exec_catchpoint = VAR_11;
  VAR_16.to_remove_exec_catchpoint = VAR_23;
  VAR_16.to_reported_exec_events_per_exec_call = VAR_26;
  VAR_16.to_has_exited = VAR_10;
  VAR_16.to_mourn_inferior = VAR_14;
  VAR_16.to_can_run = VAR_3;
  VAR_16.to_thread_alive = VAR_30;
  VAR_16.to_pid_to_str = VAR_18;
  VAR_16.to_stop = VAR_28;
  VAR_16.to_enable_exception_callback = VAR_6;
  VAR_16.to_get_current_exception_event = VAR_9;
  VAR_16.to_pid_to_exec_file = VAR_17;
  VAR_16.to_stratum = VAR_38;
  VAR_16.to_has_all_memory = 1;
  VAR_16.to_has_memory = 1;
  VAR_16.to_has_stack = 1;
  VAR_16.to_has_registers = 1;
  VAR_16.to_has_execution = 1;
  VAR_16.to_magic = VAR_0;
}
