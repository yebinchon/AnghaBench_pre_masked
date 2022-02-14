
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pd_entry_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __inline pt_entry_t *
FUNC_3(pd_entry_t *VAR_1, vm_offset_t VAR_2)
{
 pt_entry_t *VAR_3;

 VAR_3 = (pd_entry_t *)FUNC_0(FUNC_2(VAR_1) & ~VAR_0);
 return (&VAR_3[FUNC_1(VAR_2)]);
}
