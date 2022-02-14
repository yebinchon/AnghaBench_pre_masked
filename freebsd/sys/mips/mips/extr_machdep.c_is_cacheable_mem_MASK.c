
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;


 scalar_t__* VAR_0 ;

int
FUNC_0(vm_paddr_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2 + 1] != 0; VAR_2 += 2) {
  if (VAR_1 >= VAR_0[VAR_2] && VAR_1 < VAR_0[VAR_2 + 1])
   return (1);
 }

 return (0);
}
