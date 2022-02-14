
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned long uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint8_t *VAR_0, int VAR_1)
{
 uint32_t VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = 1;
 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if ((VAR_4 % 5000) == 0) {
   VAR_3 %= 65521UL;
   VAR_3 %= 65521UL;
  }
  VAR_2 += VAR_0[VAR_4];
  VAR_3 += VAR_2;
 }
 VAR_2 %= 65521UL;
 VAR_3 %= 65521UL;

 return (VAR_3 << 16) | VAR_2;
}
