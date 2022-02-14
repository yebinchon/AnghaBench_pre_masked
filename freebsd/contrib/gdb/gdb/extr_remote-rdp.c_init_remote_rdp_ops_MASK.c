
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; int to_magic; int to_stratum; int to_mourn_inferior; int to_create_inferior; int to_load; int to_kill; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_attach; int to_close; int to_open; } ;


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
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_12.to_shortname = "rdp";
  VAR_12.to_longname = "Remote Target using the RDProtocol";
  VAR_12.to_doc = "Use a remote ARM system which uses the ARM Remote Debugging Protocol";
  VAR_12.to_open = VAR_11;
  VAR_12.to_close = VAR_5;
  VAR_12.to_attach = VAR_4;
  VAR_12.to_resume = VAR_15;
  VAR_12.to_wait = VAR_17;
  VAR_12.to_fetch_registers = VAR_7;
  VAR_12.to_store_registers = VAR_16;
  VAR_12.to_prepare_to_store = VAR_13;
  VAR_12.to_xfer_memory = VAR_18;
  VAR_12.to_files_info = VAR_8;
  VAR_12.to_insert_breakpoint = VAR_9;
  VAR_12.to_remove_breakpoint = VAR_14;
  VAR_12.to_kill = VAR_10;
  VAR_12.to_load = VAR_1;
  VAR_12.to_create_inferior = VAR_6;
  VAR_12.to_mourn_inferior = VAR_2;
  VAR_12.to_stratum = VAR_3;
  VAR_12.to_has_all_memory = 1;
  VAR_12.to_has_memory = 1;
  VAR_12.to_has_stack = 1;
  VAR_12.to_has_registers = 1;
  VAR_12.to_has_execution = 1;
  VAR_12.to_magic = VAR_0;
}
