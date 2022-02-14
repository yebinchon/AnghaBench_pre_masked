
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2(void *VAR_1, size_t VAR_2)
{
 vm_offset_t VAR_3, VAR_4;
 vm_paddr_t VAR_5, VAR_6;
 int VAR_7;

 if (VAR_2 == 0)
  return (0);

 VAR_3 = FUNC_1((vm_offset_t)VAR_1);
 VAR_4 = (vm_offset_t)VAR_1 + VAR_2;
 VAR_7 = 1;
 VAR_5 = FUNC_0(VAR_3);
 VAR_3 += VAR_0;
 while (VAR_3 < VAR_4) {
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_5 + VAR_0 != VAR_6)
   VAR_7++;
  VAR_5 = VAR_6;
  VAR_3 += VAR_0;
 }
 return (VAR_7);
}
