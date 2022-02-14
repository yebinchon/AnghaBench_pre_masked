
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

int
FUNC_5(vm_offset_t VAR_2)
{
 int VAR_3;
 FUNC_1("fdt_copy va 0x%08x\n", VAR_2);
 if (VAR_0 == ((void*)0)) {
  VAR_3 = FUNC_3();
  if (VAR_3) {
   FUNC_4("No valid device tree blob found!\n");
   return (0);
  }
 }

 if (FUNC_2() == 0)
  return (0);

 FUNC_0(VAR_0, VAR_2, VAR_1);
 return (VAR_1);
}
