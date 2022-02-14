
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int * pd_entry_t ;


 int ** FUNC_0 (int ,int ) ;
 int * FUNC_1 (int **,int ) ;

pt_entry_t *
FUNC_2(pmap_t VAR_0, vm_offset_t VAR_1)
{
 pd_entry_t *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  return (((void*)0));

 return (FUNC_1(VAR_2, VAR_1));
}
