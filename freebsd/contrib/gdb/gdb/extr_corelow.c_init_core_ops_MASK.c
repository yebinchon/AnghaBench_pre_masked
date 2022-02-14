
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_memory; int to_has_stack; int to_has_registers; int to_magic; int to_stratum; int to_thread_alive; int to_create_inferior; void* to_remove_breakpoint; void* to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_xfer_partial; int to_fetch_registers; int to_detach; int to_attach; int to_close; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_6.to_shortname = "core";
  VAR_6.to_longname = "Local core dump file";
  VAR_6.to_doc =
    "Use a core file as a target.  Specify the filename of the core file.";
  VAR_6.to_open = VAR_5;
  VAR_6.to_close = VAR_1;
  VAR_6.to_attach = VAR_9;
  VAR_6.to_detach = VAR_2;
  VAR_6.to_fetch_registers = VAR_11;
  VAR_6.to_xfer_partial = VAR_8;
  VAR_6.to_xfer_memory = VAR_13;
  VAR_6.to_files_info = VAR_4;
  VAR_6.to_insert_breakpoint = VAR_12;
  VAR_6.to_remove_breakpoint = VAR_12;
  VAR_6.to_create_inferior = VAR_10;
  VAR_6.to_thread_alive = VAR_3;
  VAR_6.to_stratum = VAR_7;
  VAR_6.to_has_memory = 1;
  VAR_6.to_has_stack = 1;
  VAR_6.to_has_registers = 1;
  VAR_6.to_magic = VAR_0;
}
