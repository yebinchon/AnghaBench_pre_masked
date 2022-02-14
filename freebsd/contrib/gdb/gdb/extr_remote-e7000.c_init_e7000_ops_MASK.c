
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_has_stack; int to_has_registers; int to_has_execution; int to_magic; int to_stratum; int to_stop; int to_mourn_inferior; int to_create_inferior; int to_load; int to_kill; int to_remove_breakpoint; int to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_detach; int to_close; int to_open; } ;


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
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_11.to_shortname = "e7000";
  VAR_11.to_longname = "Remote Renesas e7000 target";
  VAR_11.to_doc = "Use a remote Renesas e7000 ICE connected by a serial line;\nor a network connection.\nArguments are the name of the device for the serial line,\nthe speed to connect at in bits per second.\neg\ntarget e7000 /dev/ttya 9600\ntarget e7000 foobar";






  VAR_11.to_open = VAR_10;
  VAR_11.to_close = VAR_1;
  VAR_11.to_detach = VAR_3;
  VAR_11.to_resume = VAR_14;
  VAR_11.to_wait = VAR_17;
  VAR_11.to_fetch_registers = VAR_4;
  VAR_11.to_store_registers = VAR_16;
  VAR_11.to_prepare_to_store = VAR_12;
  VAR_11.to_xfer_memory = VAR_18;
  VAR_11.to_files_info = VAR_5;
  VAR_11.to_insert_breakpoint = VAR_6;
  VAR_11.to_remove_breakpoint = VAR_13;
  VAR_11.to_kill = VAR_7;
  VAR_11.to_load = VAR_8;
  VAR_11.to_create_inferior = VAR_2;
  VAR_11.to_mourn_inferior = VAR_9;
  VAR_11.to_stop = VAR_15;
  VAR_11.to_stratum = VAR_19;
  VAR_11.to_has_all_memory = 1;
  VAR_11.to_has_memory = 1;
  VAR_11.to_has_stack = 1;
  VAR_11.to_has_registers = 1;
  VAR_11.to_has_execution = 1;
  VAR_11.to_magic = VAR_0;
}
