
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pd_entry_t ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static __inline pt_entry_t *
FUNC_1(pd_entry_t *VAR_0, vm_offset_t VAR_1)
{
 pt_entry_t *VAR_2;

 VAR_2 = (pt_entry_t *)*VAR_0;
 return (&VAR_2[FUNC_0(VAR_1)]);
}
