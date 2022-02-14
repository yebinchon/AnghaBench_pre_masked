
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_shortname; char* to_longname; char* to_doc; int to_has_all_memory; int to_has_memory; int to_magic; int to_stratum; int to_create_inferior; int to_lookup_symbol; int to_load; int to_files_info; int to_xfer_memory; int to_attach; int to_close; int to_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  VAR_9.to_shortname = "vxworks";
  VAR_9.to_longname = "VxWorks target memory via RPC over TCP/IP";
  VAR_9.to_doc = "Use VxWorks target memory.  \nSpecify the name of the machine to connect to.";

  VAR_9.to_open = VAR_8;
  VAR_9.to_close = VAR_3;
  VAR_9.to_attach = VAR_2;
  VAR_9.to_xfer_memory = VAR_10;
  VAR_9.to_files_info = VAR_5;
  VAR_9.to_load = VAR_6;
  VAR_9.to_lookup_symbol = VAR_7;
  VAR_9.to_create_inferior = VAR_4;
  VAR_9.to_stratum = VAR_1;
  VAR_9.to_has_all_memory = 1;
  VAR_9.to_has_memory = 1;
  VAR_9.to_magic = VAR_0;
}
