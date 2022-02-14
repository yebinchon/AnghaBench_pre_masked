
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_magic; int to_has_thread_control; int to_stratum; int to_insert_exec_catchpoint; int to_insert_vfork_catchpoint; int to_insert_fork_catchpoint; int to_post_attach; int to_post_startup_inferior; int to_pid_to_str; int to_thread_alive; int to_mourn_inferior; int to_create_inferior; int to_kill; int to_xfer_memory; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_detach; int to_attach; int to_open; } ;


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
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_0 (void)
{



  VAR_13.to_shortname = "lwp-layer";
  VAR_13.to_longname = "lwp-layer";
  VAR_13.to_doc = "Low level threads support (LWP layer)";
  VAR_13.to_attach = VAR_7;
  VAR_13.to_detach = VAR_9;
  VAR_13.to_resume = VAR_15;
  VAR_13.to_wait = VAR_17;


  VAR_13.to_fetch_registers = VAR_6;
  VAR_13.to_store_registers = VAR_19;
  VAR_13.to_xfer_memory = VAR_18;
  VAR_13.to_kill = VAR_10;
  VAR_13.to_create_inferior = VAR_8;
  VAR_13.to_mourn_inferior = VAR_11;
  VAR_13.to_thread_alive = VAR_16;
  VAR_13.to_pid_to_str = VAR_14;
  VAR_13.to_post_startup_inferior = VAR_5;
  VAR_13.to_post_attach = VAR_4;
  VAR_13.to_insert_fork_catchpoint = VAR_2;
  VAR_13.to_insert_vfork_catchpoint = VAR_3;
  VAR_13.to_insert_exec_catchpoint = VAR_1;

  VAR_13.to_stratum = VAR_21;
  VAR_13.to_has_thread_control = VAR_20;
  VAR_13.to_magic = VAR_0;
}
