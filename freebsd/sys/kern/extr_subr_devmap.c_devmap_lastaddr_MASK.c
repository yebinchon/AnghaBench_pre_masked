
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct devmap_entry {scalar_t__ pd_size; scalar_t__ pd_va; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct devmap_entry* VAR_3 ;

vm_offset_t
FUNC_0()
{
 const struct devmap_entry *VAR_4;
 vm_offset_t VAR_5;

 if (VAR_1 > 0)
  return (VAR_2);

 VAR_5 = VAR_0;
 for (VAR_4 = VAR_3; VAR_4 != ((void*)0) && VAR_4->pd_size != 0; ++VAR_4) {
  if (VAR_5 > VAR_4->pd_va)
   VAR_5 = VAR_4->pd_va;
 }

 return (VAR_5);
}
