
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ vm_memattr_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static __inline int
FUNC_3(vm_paddr_t VAR_2, vm_page_t VAR_3)
{
 vm_memattr_t VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == VAR_1 && !FUNC_1(VAR_2))
  VAR_4 = VAR_0;
 return FUNC_0(VAR_4);
}
