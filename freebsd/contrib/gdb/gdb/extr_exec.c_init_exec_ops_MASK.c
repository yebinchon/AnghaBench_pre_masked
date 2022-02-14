
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_memory; int to_magic; int to_make_corefile_notes; int to_stratum; int to_create_inferior; void* to_remove_breakpoint; void* to_insert_breakpoint; int to_files_info; int to_xfer_memory; int to_attach; int to_close; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_5.to_shortname = "exec";
  VAR_5.to_longname = "Local exec file";
  VAR_5.to_doc = "Use an executable file as a target.\nSpecify the filename of the executable file.";

  VAR_5.to_open = VAR_4;
  VAR_5.to_close = VAR_1;
  VAR_5.to_attach = VAR_7;
  VAR_5.to_xfer_memory = VAR_10;
  VAR_5.to_files_info = VAR_2;
  VAR_5.to_insert_breakpoint = VAR_9;
  VAR_5.to_remove_breakpoint = VAR_9;
  VAR_5.to_create_inferior = VAR_8;
  VAR_5.to_stratum = VAR_6;
  VAR_5.to_has_memory = 1;
  VAR_5.to_make_corefile_notes = VAR_3;
  VAR_5.to_magic = VAR_0;
}
