
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_magic; int to_get_thread_local_address; int to_has_thread_control; int to_stratum; int to_pid_to_str; int to_find_new_threads; int to_thread_alive; int to_mourn_inferior; int to_post_startup_inferior; int to_create_inferior; int to_kill; int to_xfer_memory; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_detach; int to_attach; } ;


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
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_10.to_shortname = "multi-thread";
  VAR_10.to_longname = "multi-threaded child process.";
  VAR_10.to_doc = "Threads and pthreads support.";
  VAR_10.to_attach = VAR_2;
  VAR_10.to_detach = VAR_4;
  VAR_10.to_resume = VAR_13;
  VAR_10.to_wait = VAR_16;
  VAR_10.to_fetch_registers = VAR_5;
  VAR_10.to_store_registers = VAR_14;
  VAR_10.to_xfer_memory = VAR_17;
  VAR_10.to_kill = VAR_8;
  VAR_10.to_create_inferior = VAR_3;
  VAR_10.to_post_startup_inferior = VAR_12;
  VAR_10.to_mourn_inferior = VAR_9;
  VAR_10.to_thread_alive = VAR_15;
  VAR_10.to_find_new_threads = VAR_6;
  VAR_10.to_pid_to_str = VAR_11;
  VAR_10.to_stratum = VAR_18;
  VAR_10.to_has_thread_control = VAR_1;
  VAR_10.to_get_thread_local_address
    = VAR_7;
  VAR_10.to_magic = VAR_0;
}
