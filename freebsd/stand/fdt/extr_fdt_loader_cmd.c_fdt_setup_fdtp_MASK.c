
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct preloaded_file {char* f_name; int f_addr; } ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int * VAR_1 ;
 struct preloaded_file* FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,...) ;

int
FUNC_8()
{
 struct preloaded_file *VAR_2;
 vm_offset_t VAR_3;

 FUNC_0("fdt_setup_fdtp()\n");


 if ((VAR_2 = FUNC_6(((void*)0), "dtb")) != ((void*)0)) {
  if (FUNC_2(VAR_2->f_addr) == 0) {
   FUNC_7("Using DTB from loaded file '%s'.\n",
       VAR_2->f_name);
   FUNC_5();
   return (0);
  }
 }


 if (VAR_1 != ((void*)0)) {
  if (FUNC_3(VAR_1) == 0) {
   FUNC_7("Using DTB from memory address %p.\n",
       VAR_1);
   FUNC_5();
   return (0);
  }
 }

 if (FUNC_4() == 0) {
  FUNC_5();
  return (0);
 }


 if ((VAR_3 = FUNC_1()) != 0) {
  if (FUNC_2(VAR_3) == 0) {
   FUNC_7("Using DTB compiled into kernel.\n");
   return (0);
  }
 }

 VAR_0 = "No device tree blob found!\n";
 return (1);
}
