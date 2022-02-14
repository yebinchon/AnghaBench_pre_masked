
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;



__attribute__((used)) static __inline uint32_t
FUNC_0(uint32_t VAR_0, int8_t VAR_1)
{
 int8_t VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_3 = VAR_0 & 0xf;
  VAR_3 += VAR_1;
  if (VAR_3 < 0)
   VAR_3 = 0;
  else if (VAR_3 > 0xf)
   VAR_3 = 0xf;
  VAR_0 = VAR_0 >> 4 | (uint32_t)VAR_3 << 28;
 }
 return VAR_0;
}
