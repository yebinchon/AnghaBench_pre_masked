
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_magic; int to_stratum; int to_extra_thread_info; int to_pid_to_str; int to_find_new_threads; int to_thread_alive; int to_can_run; int to_mourn_inferior; int to_kill; int to_create_inferior; int to_prepare_to_store; int to_store_registers; int to_fetch_registers; int to_wait; int to_resume; int to_detach; int to_attach; } ;


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

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_12.to_shortname = "unixware-threads";
  VAR_12.to_longname = "UnixWare threads and pthread.";
  VAR_12.to_doc = "UnixWare threads and pthread support.";
  VAR_12.to_attach = VAR_4;
  VAR_12.to_detach = VAR_7;
  VAR_12.to_resume = VAR_15;
  VAR_12.to_wait = VAR_17;
  VAR_12.to_fetch_registers = VAR_8;
  VAR_12.to_store_registers = VAR_16;
  VAR_12.to_prepare_to_store = VAR_14;
  VAR_12.to_create_inferior = VAR_6;
  VAR_12.to_kill = VAR_10;
  VAR_12.to_mourn_inferior = VAR_11;
  VAR_12.to_can_run = VAR_5;
  VAR_12.to_thread_alive = VAR_3;
  VAR_12.to_find_new_threads = VAR_9;
  VAR_12.to_pid_to_str = VAR_13;
  VAR_12.to_extra_thread_info = VAR_2;
  VAR_12.to_stratum = VAR_1;
  VAR_12.to_magic = VAR_0;
}
