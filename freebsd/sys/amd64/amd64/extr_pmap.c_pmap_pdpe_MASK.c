
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef int pmap_t ;
typedef int pdp_entry_t ;


 int* FUNC_0 (int ,int ) ;
 int * FUNC_1 (int*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline pdp_entry_t *
FUNC_3(pmap_t VAR_0, vm_offset_t VAR_1)
{
 pml4_entry_t *VAR_2;
 pt_entry_t VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if ((*VAR_2 & VAR_3) == 0)
  return (((void*)0));
 return (FUNC_1(VAR_2, VAR_1));
}
