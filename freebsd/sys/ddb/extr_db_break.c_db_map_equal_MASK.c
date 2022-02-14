
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_map_t ;


 int * VAR_0 ;

bool
FUNC_0(vm_map_t VAR_1, vm_map_t VAR_2)
{
 return ((VAR_1 == VAR_2) ||
  ((VAR_1 == ((void*)0)) && (VAR_2 == VAR_0)) ||
  ((VAR_1 == VAR_0) && (VAR_2 == ((void*)0))));
}
