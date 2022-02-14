
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(vm_offset_t VAR_2, vm_offset_t VAR_3)
{
 int VAR_4;

 if (VAR_2 >= VAR_0)
  return (0);

 for (VAR_4 = 0; VAR_1[VAR_4] && VAR_1[VAR_4 + 1]; VAR_4 += 2) {
  if ((VAR_2 >= VAR_1[VAR_4] && VAR_2 < VAR_1[VAR_4 + 1]) ||
      (VAR_2 < VAR_1[VAR_4] && VAR_3 >= VAR_1[VAR_4]))
   return (1);
 }
 return (0);
}
