
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_memattr_t ;
typedef int u_int ;
typedef int pt_entry_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_1(pt_entry_t *VAR_1, vm_memattr_t VAR_2)
{
 u_int VAR_3;

 VAR_3 = *(u_int *)VAR_1;
 VAR_3 &= ~VAR_0;
 VAR_3 |= FUNC_0(VAR_2);
 *VAR_1 = VAR_3;
}
