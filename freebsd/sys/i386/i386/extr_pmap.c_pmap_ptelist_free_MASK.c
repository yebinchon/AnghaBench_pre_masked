
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(vm_offset_t *VAR_1, vm_offset_t VAR_2)
{
 pt_entry_t *VAR_3;

 if (VAR_2 & VAR_0)
  FUNC_0("pmap_ptelist_free: freeing va with PG_V set!");
 VAR_3 = FUNC_1(VAR_2);
 *VAR_3 = *VAR_1;
 *VAR_1 = VAR_2;
}
