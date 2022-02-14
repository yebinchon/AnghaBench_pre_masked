
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(vm_offset_t VAR_1, vm_offset_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_0[VAR_3] && VAR_0[VAR_3 + 1]; VAR_3 += 2) {
  if ((VAR_1 >= VAR_0[VAR_3] && VAR_1 <= VAR_0[VAR_3 + 1])
      || (VAR_1 < VAR_0[VAR_3] &&
      VAR_2 > VAR_0[VAR_3]))
   return (1);
 }
 return (0);
}
