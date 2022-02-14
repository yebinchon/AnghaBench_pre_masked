
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_memory; int to_has_registers; int to_has_stack; void* to_remove_breakpoint; void* to_insert_breakpoint; int to_xfer_memory; int to_thread_alive; int to_store_registers; int to_pid_to_str; int to_find_new_threads; int to_files_info; int to_fetch_registers; int to_extra_thread_info; int to_detach; int to_attach; int to_close; int to_open; int to_stratum; int to_magic; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
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
 void* VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_2(void)
{

 VAR_14.to_magic = VAR_0;
 VAR_14.to_shortname = "kernel";
 VAR_14.to_longname = "kernel core dump file";
 VAR_14.to_doc =
    "Use a vmcore file as a target.  Specify the filename of the vmcore file.";
 VAR_14.to_stratum = VAR_2;
 VAR_14.to_has_memory = 1;
 VAR_14.to_has_registers = 1;
 VAR_14.to_has_stack = 1;

 VAR_14.to_open = VAR_13;
 VAR_14.to_close = VAR_6;
 VAR_14.to_attach = VAR_3;
 VAR_14.to_detach = VAR_7;
 VAR_14.to_extra_thread_info = VAR_8;
 VAR_14.to_fetch_registers = VAR_9;
 VAR_14.to_files_info = VAR_10;
 VAR_14.to_find_new_threads = VAR_11;
 VAR_14.to_pid_to_str = VAR_15;
 VAR_14.to_store_registers = VAR_16;
 VAR_14.to_thread_alive = VAR_17;
 VAR_14.to_xfer_memory = VAR_18;
 VAR_14.to_insert_breakpoint = VAR_12;
 VAR_14.to_remove_breakpoint = VAR_12;

 FUNC_1(&VAR_14);

 FUNC_0 ("proc", VAR_1, VAR_4,
    "Set current process context");
 FUNC_0 ("tid", VAR_1, VAR_5,
    "Set current thread context");
}
