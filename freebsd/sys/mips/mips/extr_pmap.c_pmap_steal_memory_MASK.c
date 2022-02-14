
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;

vm_offset_t
FUNC_5(vm_size_t VAR_1)
{
 vm_paddr_t VAR_2, VAR_3;
 vm_offset_t VAR_4;

 VAR_1 = FUNC_4(VAR_1);
 VAR_2 = VAR_0[1] - VAR_0[0];
 while (VAR_1 > VAR_2) {
  int VAR_5;

  for (VAR_5 = 0; VAR_0[VAR_5 + 2]; VAR_5 += 2) {
   VAR_0[VAR_5] = VAR_0[VAR_5 + 2];
   VAR_0[VAR_5 + 1] = VAR_0[VAR_5 + 3];
  }
  VAR_0[VAR_5] = 0;
  VAR_0[VAR_5 + 1] = 0;
  if (!VAR_0[0])
   FUNC_3("pmap_steal_memory: out of memory");
  VAR_2 = VAR_0[1] - VAR_0[0];
 }

 VAR_3 = VAR_0[0];
 VAR_0[0] += VAR_1;
 if (FUNC_0(VAR_3) == 0)
  FUNC_3("Out of memory below 512Meg?");
 VAR_4 = FUNC_1(VAR_3);
 FUNC_2((caddr_t)VAR_4, VAR_1);
 return (VAR_4);
}
