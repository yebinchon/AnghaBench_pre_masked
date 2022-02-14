
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,int) ;
 int FUNC_1 (int,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(vm_offset_t VAR_1, vm_paddr_t VAR_2, vm_size_t VAR_3)
{







 if (VAR_1 & VAR_0)
  FUNC_1(VAR_1, VAR_2, 1);
 if ((VAR_1 + VAR_3) & VAR_0)
  FUNC_1(VAR_1 + VAR_3, VAR_2 + VAR_3, 1);

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
