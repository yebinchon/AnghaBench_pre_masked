
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int pmap_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;

void
FUNC_5(vm_offset_t VAR_4)
{
 pmap_t VAR_5 = VAR_1;

 if (VAR_4 <= VAR_3)
  return;






 for (; VAR_3 < VAR_4; VAR_3 += VAR_0)
  FUNC_4(VAR_5, VAR_3);





 FUNC_1();
 FUNC_2();
 FUNC_3();
 FUNC_0();
 VAR_2 = VAR_3;
}
