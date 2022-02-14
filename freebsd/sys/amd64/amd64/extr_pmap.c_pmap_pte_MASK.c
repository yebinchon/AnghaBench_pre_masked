
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int* FUNC_0 (int ,int ) ;
 int* FUNC_1 (int*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline pt_entry_t *
FUNC_3(pmap_t VAR_1, vm_offset_t VAR_2)
{
 pd_entry_t *VAR_3;
 pt_entry_t VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0) || (*VAR_3 & VAR_4) == 0)
  return (((void*)0));
 if ((*VAR_3 & VAR_0) != 0)
  return ((pt_entry_t *)VAR_3);
 return (FUNC_1(VAR_3, VAR_2));
}
