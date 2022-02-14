
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt1_entry_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(vm_offset_t VAR_0)
{
 pt1_entry_t *VAR_1;
 vm_paddr_t VAR_2, VAR_3;


 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_2(VAR_2, FUNC_4(VAR_0));


 VAR_1 = FUNC_1(VAR_0);
 FUNC_5(VAR_1, FUNC_0(VAR_3));
}
