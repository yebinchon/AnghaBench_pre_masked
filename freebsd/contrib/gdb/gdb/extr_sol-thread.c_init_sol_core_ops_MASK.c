
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_memory; int to_has_stack; int to_has_registers; int to_magic; int to_pid_to_str; int to_thread_alive; int to_has_thread_control; int to_stratum; int to_create_inferior; void* to_remove_breakpoint; void* to_insert_breakpoint; int to_files_info; int to_xfer_partial; int to_xfer_memory; int to_fetch_registers; int to_detach; int to_attach; int to_close; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
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

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_7.to_shortname = "solaris-core";
  VAR_7.to_longname = "Solaris core threads and pthread.";
  VAR_7.to_doc = "Solaris threads and pthread support for core files.";
  VAR_7.to_open = VAR_6;
  VAR_7.to_close = VAR_3;
  VAR_7.to_attach = VAR_9;
  VAR_7.to_detach = VAR_4;
  VAR_7.to_fetch_registers = VAR_11;
  VAR_7.to_xfer_memory = VAR_12;
  VAR_7.to_xfer_partial = VAR_13;
  VAR_7.to_files_info = VAR_5;
  VAR_7.to_insert_breakpoint = VAR_2;
  VAR_7.to_remove_breakpoint = VAR_2;
  VAR_7.to_create_inferior = VAR_10;
  VAR_7.to_stratum = VAR_1;
  VAR_7.to_has_memory = 1;
  VAR_7.to_has_stack = 1;
  VAR_7.to_has_registers = 1;
  VAR_7.to_has_thread_control = VAR_15;
  VAR_7.to_thread_alive = VAR_8;
  VAR_7.to_pid_to_str = VAR_14;





  VAR_7.to_magic = VAR_0;
}
