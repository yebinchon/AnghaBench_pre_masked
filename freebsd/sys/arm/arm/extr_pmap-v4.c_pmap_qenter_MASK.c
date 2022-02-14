
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(vm_offset_t VAR_2, vm_page_t *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_2(VAR_3[VAR_5]);
  FUNC_1(VAR_2, FUNC_0(VAR_3[VAR_5]),
      VAR_0);
  VAR_2 += VAR_1;
 }
}
