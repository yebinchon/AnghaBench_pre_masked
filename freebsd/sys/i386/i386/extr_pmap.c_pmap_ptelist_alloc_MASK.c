
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pt_entry_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__* FUNC_1 (scalar_t__) ;

__attribute__((used)) static vm_offset_t
FUNC_2(vm_offset_t *VAR_1)
{
 pt_entry_t *VAR_2;
 vm_offset_t VAR_3;

 VAR_3 = *VAR_1;
 if (VAR_3 == 0)
  FUNC_0("pmap_ptelist_alloc: exhausted ptelist KVA");
 VAR_2 = FUNC_1(VAR_3);
 *VAR_1 = *VAR_2;
 if (*VAR_1 & VAR_0)
  FUNC_0("pmap_ptelist_alloc: va with PG_V set!");
 *VAR_2 = 0;
 return (VAR_3);
}
