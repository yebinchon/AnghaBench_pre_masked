
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;

void
FUNC_7(vm_page_t VAR_1)
{
 vm_offset_t VAR_2;
 vm_paddr_t VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_3)) {
  VAR_2 = FUNC_1(VAR_3);
  FUNC_3((caddr_t)VAR_2, VAR_0);
  FUNC_4(VAR_2, VAR_0);
 } else {
  VAR_2 = FUNC_5(VAR_3);
  FUNC_3((caddr_t)VAR_2, VAR_0);
  FUNC_4(VAR_2, VAR_0);
  FUNC_6();
 }
}
