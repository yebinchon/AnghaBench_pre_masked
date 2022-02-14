
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_3 = 0;
 VAR_4 = 0;
 while (VAR_2 -- > 0) {
  uint32_t VAR_5;

  VAR_5 = VAR_1[VAR_2];
  if (VAR_4 < 22) {
   VAR_3 |= VAR_5 << VAR_4;
   VAR_4 += 8;
  } else {
   *VAR_0 ++ = (VAR_3 | (VAR_5 << VAR_4)) & 0x3FFFFFFF;
   VAR_3 = VAR_5 >> (30 - VAR_4);
   VAR_4 -= 22;
  }
 }
 return VAR_3;
}
