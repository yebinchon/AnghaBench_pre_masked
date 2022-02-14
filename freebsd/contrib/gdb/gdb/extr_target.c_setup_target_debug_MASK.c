
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int to_pid_to_exec_file; int to_get_current_exception_event; int to_enable_exception_callback; int to_rcmd; int to_xfer_partial; int to_stop; int to_find_new_threads; int to_thread_alive; int to_notice_signals; int to_can_run; int to_mourn_inferior; int to_has_exited; int to_reported_exec_events_per_exec_call; int to_remove_exec_catchpoint; int to_insert_exec_catchpoint; int to_follow_fork; int to_remove_vfork_catchpoint; int to_insert_vfork_catchpoint; int to_remove_fork_catchpoint; int to_insert_fork_catchpoint; int to_acknowledge_created_inferior; int to_post_startup_inferior; int to_create_inferior; int to_lookup_symbol; int to_load; int to_kill; int to_terminal_info; int to_terminal_save_ours; int to_terminal_ours; int to_terminal_ours_for_output; int to_terminal_inferior; int to_terminal_init; int to_region_size_ok_for_hw_watchpoint; int to_stopped_data_address; int to_stopped_by_watchpoint; int to_remove_watchpoint; int to_insert_watchpoint; int to_remove_hw_breakpoint; int to_insert_hw_breakpoint; int to_can_use_hw_breakpoint; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_post_wait; int to_wait; int to_resume; int to_disconnect; int to_detach; int to_post_attach; int to_attach; int to_close; int to_open; } ;


 TYPE_1__ VAR_0 ;
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
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (&VAR_1, &VAR_0, sizeof VAR_1);

  VAR_0.to_open = VAR_28;
  VAR_0.to_close = VAR_6;
  VAR_0.to_attach = VAR_3;
  VAR_0.to_post_attach = VAR_30;
  VAR_0.to_detach = VAR_8;
  VAR_0.to_disconnect = VAR_9;
  VAR_0.to_resume = VAR_43;
  VAR_0.to_wait = VAR_55;
  VAR_0.to_post_wait = VAR_32;
  VAR_0.to_fetch_registers = VAR_11;
  VAR_0.to_store_registers = VAR_47;
  VAR_0.to_prepare_to_store = VAR_33;
  VAR_0.to_xfer_memory = VAR_56;
  VAR_0.to_files_info = VAR_12;
  VAR_0.to_insert_breakpoint = VAR_17;
  VAR_0.to_remove_breakpoint = VAR_36;
  VAR_0.to_can_use_hw_breakpoint = VAR_5;
  VAR_0.to_insert_hw_breakpoint = VAR_20;
  VAR_0.to_remove_hw_breakpoint = VAR_39;
  VAR_0.to_insert_watchpoint = VAR_22;
  VAR_0.to_remove_watchpoint = VAR_41;
  VAR_0.to_stopped_by_watchpoint = VAR_45;
  VAR_0.to_stopped_data_address = VAR_46;
  VAR_0.to_region_size_ok_for_hw_watchpoint = VAR_35;
  VAR_0.to_terminal_init = VAR_50;
  VAR_0.to_terminal_inferior = VAR_48;
  VAR_0.to_terminal_ours_for_output = VAR_52;
  VAR_0.to_terminal_ours = VAR_51;
  VAR_0.to_terminal_save_ours = VAR_53;
  VAR_0.to_terminal_info = VAR_49;
  VAR_0.to_kill = VAR_23;
  VAR_0.to_load = VAR_24;
  VAR_0.to_lookup_symbol = VAR_25;
  VAR_0.to_create_inferior = VAR_7;
  VAR_0.to_post_startup_inferior = VAR_31;
  VAR_0.to_acknowledge_created_inferior = VAR_2;
  VAR_0.to_insert_fork_catchpoint = VAR_19;
  VAR_0.to_remove_fork_catchpoint = VAR_38;
  VAR_0.to_insert_vfork_catchpoint = VAR_21;
  VAR_0.to_remove_vfork_catchpoint = VAR_40;
  VAR_0.to_follow_fork = VAR_14;
  VAR_0.to_insert_exec_catchpoint = VAR_18;
  VAR_0.to_remove_exec_catchpoint = VAR_37;
  VAR_0.to_reported_exec_events_per_exec_call = VAR_42;
  VAR_0.to_has_exited = VAR_16;
  VAR_0.to_mourn_inferior = VAR_26;
  VAR_0.to_can_run = VAR_4;
  VAR_0.to_notice_signals = VAR_27;
  VAR_0.to_thread_alive = VAR_54;
  VAR_0.to_find_new_threads = VAR_13;
  VAR_0.to_stop = VAR_44;
  VAR_0.to_xfer_partial = VAR_57;
  VAR_0.to_rcmd = VAR_34;
  VAR_0.to_enable_exception_callback = VAR_10;
  VAR_0.to_get_current_exception_event = VAR_15;
  VAR_0.to_pid_to_exec_file = VAR_29;

}
