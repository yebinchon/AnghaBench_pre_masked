
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{

        const uint32_t VAR_2 = ((uint32_t) 1 << (32 - 1));

 if(VAR_0 == VAR_1)
  return 0;
 if(VAR_0 < VAR_1 && VAR_1 - VAR_0 < VAR_2) {
  return VAR_1-VAR_0;
 }
 if(VAR_0 > VAR_1 && VAR_0 - VAR_1 > VAR_2) {
  return ((uint32_t)0xffffffff) - (VAR_0-VAR_1-1);
 }

 return 0;
}
