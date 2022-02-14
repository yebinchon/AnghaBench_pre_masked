
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;

void
FUNC_7(vm_page_t VAR_0, int VAR_1, int VAR_2)
{
 vm_offset_t VAR_3;
 vm_paddr_t VAR_4 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_4)) {
  VAR_3 = FUNC_1(VAR_4);
  FUNC_3((char *)(caddr_t)VAR_3 + VAR_1, VAR_2);
  FUNC_4(VAR_3 + VAR_1, VAR_2);
 } else {
  VAR_3 = FUNC_5(VAR_4);
  FUNC_3((char *)VAR_3 + VAR_1, VAR_2);
  FUNC_4(VAR_3 + VAR_1, VAR_2);
  FUNC_6();
 }
}
