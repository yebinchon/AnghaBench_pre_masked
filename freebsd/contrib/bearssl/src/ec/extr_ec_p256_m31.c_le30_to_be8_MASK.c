
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, size_t VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 VAR_3 = 0;
 VAR_4 = 0;
 while (VAR_1 -- > 0) {
  if (VAR_4 < 8) {
   uint32_t VAR_5;

   VAR_5 = *VAR_2 ++;
   VAR_0[VAR_1] = (unsigned char)(VAR_3 | (VAR_5 << VAR_4));
   VAR_3 = VAR_5 >> (8 - VAR_4);
   VAR_4 += 22;
  } else {
   VAR_0[VAR_1] = (unsigned char)VAR_3;
   VAR_3 >>= 8;
   VAR_4 -= 8;
  }
 }
}
