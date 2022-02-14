
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; int to_magic; int to_stratum; int to_mourn_inferior; int to_lookup_symbol; int to_load; int to_kill; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_detach; int to_close; int to_open; } ;


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
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_15.to_shortname = "vxprocess";
  VAR_15.to_longname = "VxWorks process";
  VAR_15.to_doc = "VxWorks process; started by the \"run\" command.";
  VAR_15.to_open = VAR_10;
  VAR_15.to_close = VAR_9;
  VAR_15.to_detach = VAR_2;
  VAR_15.to_resume = VAR_13;
  VAR_15.to_wait = VAR_16;
  VAR_15.to_fetch_registers = VAR_11;
  VAR_15.to_store_registers = VAR_17;
  VAR_15.to_prepare_to_store = VAR_8;
  VAR_15.to_xfer_memory = VAR_18;
  VAR_15.to_files_info = VAR_14;
  VAR_15.to_insert_breakpoint = VAR_3;
  VAR_15.to_remove_breakpoint = VAR_12;
  VAR_15.to_kill = VAR_4;
  VAR_15.to_load = VAR_5;
  VAR_15.to_lookup_symbol = VAR_6;
  VAR_15.to_mourn_inferior = VAR_7;
  VAR_15.to_stratum = VAR_1;
  VAR_15.to_has_memory = 1;
  VAR_15.to_has_stack = 1;
  VAR_15.to_has_registers = 1;
  VAR_15.to_has_execution = 1;
  VAR_15.to_magic = VAR_0;
}
