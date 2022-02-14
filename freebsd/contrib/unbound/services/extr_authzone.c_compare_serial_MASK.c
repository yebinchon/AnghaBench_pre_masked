
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

int
FUNC_0(uint32_t VAR_1, uint32_t VAR_2)
{
 const uint32_t VAR_3 = ((uint32_t) 1 << (VAR_0 - 1));

 if (VAR_1 == VAR_2) {
  return 0;
 } else if ((VAR_1 < VAR_2 && VAR_2 - VAR_1 < VAR_3) || (VAR_1 > VAR_2 && VAR_1 - VAR_2 > VAR_3)) {
  return -1;
 } else {
  return 1;
 }
}
