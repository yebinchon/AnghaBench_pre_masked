
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_0)
{
 static const uint32_t VAR_1[] = {0x2, 0xC, 0xF0, 0xFF00, 0xFFFF0000};
 static const uint32_t VAR_2[] = {1, 2, 4, 8, 16};
 int VAR_3;
 uint32_t VAR_4 = VAR_0;

 register uint32_t VAR_5 = 0;
 for (VAR_3 = 4; VAR_3 >= 0; VAR_3--) {
  if (VAR_0 & VAR_1[VAR_3]) {
   VAR_0 >>= VAR_2[VAR_3];
   VAR_5 |= VAR_2[VAR_3];
  }
 }

 VAR_5 += !!(VAR_4 & ((1 << VAR_5) - 1));

 return VAR_5;
}
