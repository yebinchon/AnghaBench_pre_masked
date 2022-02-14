
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

void
FUNC_4(vm_page_t VAR_0[], vm_offset_t VAR_1[], int VAR_2,
    boolean_t VAR_3)
{
 vm_paddr_t VAR_4;
 int VAR_5;

 if (!VAR_3)
  FUNC_3();
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_1(VAR_0[VAR_5]);
  if (!FUNC_0(VAR_4)) {
   FUNC_2("ARM64TODO: pmap_unmap_io_transient: Unmap data");
  }
 }
}
