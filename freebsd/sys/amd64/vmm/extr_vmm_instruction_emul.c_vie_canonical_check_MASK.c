
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
typedef enum vm_cpu_mode { ____Placeholder_vm_cpu_mode } vm_cpu_mode ;


 int VAR_0 ;

int
FUNC_0(enum vm_cpu_mode VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3;

 if (VAR_1 != VAR_0)
  return (0);





 VAR_3 = ~((1UL << 48) - 1);
 if (VAR_2 & (1UL << 47))
  return ((VAR_2 & VAR_3) != VAR_3);
 else
  return ((VAR_2 & VAR_3) != 0);
}
