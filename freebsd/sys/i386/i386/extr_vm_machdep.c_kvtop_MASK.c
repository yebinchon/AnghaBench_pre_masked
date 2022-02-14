
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

vm_paddr_t
FUNC_2(void *VAR_0)
{
 vm_paddr_t VAR_1;

 VAR_1 = FUNC_1((vm_offset_t)VAR_0);
 if (VAR_1 == 0)
  FUNC_0("kvtop: zero page frame");
 return (VAR_1);
}
