
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int pml4_entry_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(vm_page_t VAR_2)
{
 pml4_entry_t *VAR_3;
 int VAR_4;

 VAR_3 = (pml4_entry_t *)FUNC_0(FUNC_1(VAR_2));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3[VAR_4] = VAR_1[VAR_4];
}
