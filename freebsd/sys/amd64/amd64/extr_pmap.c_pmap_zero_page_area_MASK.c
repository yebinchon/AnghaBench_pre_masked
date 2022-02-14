
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (void*) ;

void
FUNC_4(vm_page_t VAR_1, int VAR_2, int VAR_3)
{
 vm_offset_t VAR_4 = FUNC_0(FUNC_1(VAR_1));

 if (VAR_2 == 0 && VAR_3 == VAR_0)
  FUNC_3((void *)VAR_4);
 else
  FUNC_2((char *)VAR_4 + VAR_2, VAR_3);
}
