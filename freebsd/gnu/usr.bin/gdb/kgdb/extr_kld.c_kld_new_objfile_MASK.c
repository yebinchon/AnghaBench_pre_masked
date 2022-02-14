
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;


 int FUNC_0 () ;
 void* VAR_0 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;

void
FUNC_3 (struct objfile *VAR_7)
{

 if (!FUNC_0())
  return;







 VAR_3 = FUNC_1("&((struct linker_file *)0)->address");
 VAR_4 = FUNC_1("&((struct linker_file *)0)->filename");
 VAR_6 = FUNC_2("&((struct linker_file *)0)->pathname");
 VAR_5 = FUNC_1("&((struct linker_file *)0)->link.tqe_next");
 VAR_2 = FUNC_1("linker_path");
 VAR_1 = FUNC_1("&linker_files.tqh_first");
 VAR_0 = FUNC_1("&linker_kernel_file");
}
