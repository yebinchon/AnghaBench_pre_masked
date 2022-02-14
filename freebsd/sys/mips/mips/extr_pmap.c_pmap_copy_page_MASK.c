
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef void* caddr_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 () ;

void
FUNC_9(vm_page_t VAR_1, vm_page_t VAR_2)
{
 vm_offset_t VAR_3, VAR_4;
 vm_paddr_t VAR_5 = FUNC_2(VAR_1);
 vm_paddr_t VAR_6 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_5) && FUNC_0(VAR_6)) {





  FUNC_6(VAR_1);
  FUNC_5(
      FUNC_1(VAR_6), VAR_0);
  VAR_3 = FUNC_1(VAR_5);
  VAR_4 = FUNC_1(VAR_6);
  FUNC_3((caddr_t)VAR_3, (caddr_t)VAR_4, VAR_0);
  FUNC_4(VAR_4, VAR_0);
 } else {
  VAR_3 = FUNC_7(VAR_5, VAR_6);
  VAR_4 = VAR_3 + VAR_0;
  FUNC_3((void *)VAR_3, (void *)VAR_4, VAR_0);
  FUNC_4(VAR_4, VAR_0);
  FUNC_8();
 }
}
