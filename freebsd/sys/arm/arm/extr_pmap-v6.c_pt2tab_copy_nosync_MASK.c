
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int ;
typedef int pt2_entry_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __inline void
FUNC_2(pt2_entry_t *VAR_0, pt2_entry_t *VAR_1, vm_offset_t VAR_2,
    vm_offset_t VAR_3)
{
 u_int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = (FUNC_1(VAR_3) - VAR_4 + 1) * sizeof(pt2_entry_t);
 FUNC_0(VAR_0 + VAR_4, VAR_1 + VAR_4, VAR_5);
}
