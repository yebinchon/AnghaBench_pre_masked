
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uintmax_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(vm_paddr_t VAR_2, vm_size_t VAR_3, uint32_t VAR_4)
{
 vm_offset_t VAR_5;





 VAR_5 = VAR_2 - FUNC_4(VAR_2);
 VAR_2 = FUNC_4(VAR_2);
 VAR_3 = FUNC_3(VAR_3 + VAR_5);

 if (VAR_0 >= FUNC_1(VAR_1))
  FUNC_2("failed to exclude region %#jx-%#jx", (uintmax_t)VAR_2,
      (uintmax_t)(VAR_2 + VAR_3));
 VAR_0 = FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
}
