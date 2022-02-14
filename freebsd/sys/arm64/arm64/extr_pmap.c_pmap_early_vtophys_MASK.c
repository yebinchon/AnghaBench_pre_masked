
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int,int,size_t*,size_t*) ;

__attribute__((used)) static vm_paddr_t
FUNC_1(vm_offset_t VAR_2, vm_offset_t VAR_3)
{
 u_int VAR_4, VAR_5;
 pt_entry_t *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_4, &VAR_5);

 return ((VAR_6[VAR_5] & ~VAR_0) + (VAR_3 & VAR_1));
}
