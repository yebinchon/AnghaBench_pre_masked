
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
typedef int pt_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (char*,void*,void*) ;
 scalar_t__ FUNC_5 (int*,int) ;

void
FUNC_6(vm_offset_t VAR_4, vm_paddr_t VAR_5, vm_memattr_t VAR_6)
{
 pt_entry_t *VAR_7;
 pt_entry_t VAR_8, VAR_9;





 VAR_7 = FUNC_2(VAR_3, VAR_4);
 VAR_8 = *VAR_7;
 VAR_9 = FUNC_1(VAR_5) | FUNC_0(VAR_6) | VAR_0 | VAR_2 | VAR_1;
 *VAR_7 = VAR_9;
 if (FUNC_5(&VAR_8, VAR_2) && VAR_8 != VAR_9)
  FUNC_3(VAR_3, VAR_4, VAR_9);
}
