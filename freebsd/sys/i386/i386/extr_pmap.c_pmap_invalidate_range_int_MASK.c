
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(pmap_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4)
{
 vm_offset_t VAR_5;

 if (VAR_2 == VAR_1)
  for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 += VAR_0)
   FUNC_0(VAR_5);
}
