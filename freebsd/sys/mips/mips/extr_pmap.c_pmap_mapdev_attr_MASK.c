
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

void *
FUNC_7(vm_paddr_t VAR_3, vm_size_t VAR_4, vm_memattr_t VAR_5)
{
        vm_offset_t VAR_6, VAR_7, VAR_8;





 if (FUNC_0(VAR_3 + VAR_4 - 1) && VAR_5 == VAR_2)
  return ((void *)FUNC_1(VAR_3));
 else {
  VAR_8 = VAR_3 & VAR_0;
  VAR_4 = FUNC_5(VAR_4 + VAR_8, VAR_1);

  VAR_6 = FUNC_2(VAR_4);
  if (!VAR_6)
   FUNC_3("pmap_mapdev: Couldn't alloc kernel virtual memory");
  VAR_3 = FUNC_6(VAR_3);
  for (VAR_7 = VAR_6; VAR_4 > 0;) {
   FUNC_4(VAR_7, VAR_3, VAR_5);
   VAR_4 -= VAR_1;
   VAR_7 += VAR_1;
   VAR_3 += VAR_1;
  }
 }

 return ((void *)(VAR_6 + VAR_8));
}
