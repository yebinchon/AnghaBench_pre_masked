
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef size_t uint32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void *
FUNC_0(uint32_t VAR_4, size_t VAR_5)
{
 vm_offset_t VAR_6;

 if (VAR_4 + VAR_5 > VAR_1 + VAR_0)
  return (((void*)0));

 if (VAR_4 >= VAR_1)
  VAR_4 -= VAR_1;
 VAR_6 = VAR_3[VAR_4 / VAR_2];
 if (VAR_6 != 0)
  VAR_6 += VAR_4 % VAR_2;

 return ((void *)VAR_6);
}
