
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; int to_async_mask_value; int to_magic; int to_async; int to_is_async_p; int to_can_async_p; int to_has_thread_control; int to_stratum; int to_rcmd; int to_xfer_partial; int to_stop; int to_extra_thread_info; int to_pid_to_str; int to_find_new_threads; int to_thread_alive; int to_mourn_inferior; int to_load; int to_kill; int to_terminal_ours; int to_terminal_inferior; int to_stopped_data_address; int to_stopped_by_watchpoint; int to_remove_watchpoint; int to_insert_watchpoint; int to_remove_hw_breakpoint; int to_insert_hw_breakpoint; int to_can_use_hw_breakpoint; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_disconnect; int to_detach; int to_close; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
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

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_7.to_shortname = "async";
  VAR_7.to_longname = "Remote serial target in async version of the gdb-specific protocol";
  VAR_7.to_doc =
    "Use a remote computer via a serial line, using a gdb-specific protocol.\nSpecify the serial device it is connected to (e.g. /dev/ttya).";

  VAR_7.to_open = VAR_6;
  VAR_7.to_close = VAR_14;
  VAR_7.to_detach = VAR_15;
  VAR_7.to_disconnect = VAR_16;
  VAR_7.to_resume = VAR_8;
  VAR_7.to_wait = VAR_11;
  VAR_7.to_fetch_registers = VAR_17;
  VAR_7.to_store_registers = VAR_32;
  VAR_7.to_prepare_to_store = VAR_24;
  VAR_7.to_xfer_memory = VAR_36;
  VAR_7.to_files_info = VAR_18;
  VAR_7.to_insert_breakpoint = VAR_19;
  VAR_7.to_remove_breakpoint = VAR_26;
  VAR_7.to_can_use_hw_breakpoint = VAR_13;
  VAR_7.to_insert_hw_breakpoint = VAR_20;
  VAR_7.to_remove_hw_breakpoint = VAR_27;
  VAR_7.to_insert_watchpoint = VAR_21;
  VAR_7.to_remove_watchpoint = VAR_28;
  VAR_7.to_stopped_by_watchpoint = VAR_30;
  VAR_7.to_stopped_data_address = VAR_31;
  VAR_7.to_terminal_inferior = VAR_9;
  VAR_7.to_terminal_ours = VAR_10;
  VAR_7.to_kill = VAR_4;
  VAR_7.to_load = VAR_1;
  VAR_7.to_mourn_inferior = VAR_5;
  VAR_7.to_thread_alive = VAR_33;
  VAR_7.to_find_new_threads = VAR_35;
  VAR_7.to_pid_to_str = VAR_23;
  VAR_7.to_extra_thread_info = VAR_34;
  VAR_7.to_stop = VAR_29;
  VAR_7.to_xfer_partial = VAR_37;
  VAR_7.to_rcmd = VAR_25;
  VAR_7.to_stratum = VAR_2;
  VAR_7.to_has_all_memory = 1;
  VAR_7.to_has_memory = 1;
  VAR_7.to_has_stack = 1;
  VAR_7.to_has_registers = 1;
  VAR_7.to_has_execution = 1;
  VAR_7.to_has_thread_control = VAR_38;
  VAR_7.to_can_async_p = VAR_12;
  VAR_7.to_is_async_p = VAR_22;
  VAR_7.to_async = VAR_3;
  VAR_7.to_async_mask_value = 1;
  VAR_7.to_magic = VAR_0;
}
