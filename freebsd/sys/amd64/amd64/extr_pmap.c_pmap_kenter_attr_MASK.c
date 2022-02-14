
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(vm_offset_t VAR_5, vm_paddr_t VAR_6, int VAR_7)
{
 pt_entry_t *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = FUNC_0(VAR_2, VAR_7, 0);
 FUNC_1(VAR_8, VAR_6 | VAR_0 | VAR_1 | VAR_3 | VAR_4 | VAR_9);
}
