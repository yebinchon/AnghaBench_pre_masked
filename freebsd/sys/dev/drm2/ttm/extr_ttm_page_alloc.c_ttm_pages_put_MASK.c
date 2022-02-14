
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(vm_page_t *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;


 if (FUNC_1(VAR_0, VAR_1))
  FUNC_0("[TTM] Failed to set %d pages to wb!\n", VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  FUNC_2(VAR_0[VAR_2]);
}
