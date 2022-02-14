
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int*,size_t) ;

void
FUNC_1(uint32_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4, VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;
 VAR_5 = 1;
 VAR_6 = 0;
 VAR_7 = 0;
 while (VAR_4 -- > 0) {
  uint32_t VAR_8;

  VAR_8 = VAR_3[VAR_4];
  VAR_6 |= (VAR_8 << VAR_7);
  VAR_7 += 8;
  if (VAR_7 >= 31) {
   VAR_0[VAR_5 ++] = VAR_6 & (uint32_t)0x7FFFFFFF;
   VAR_7 -= 31;
   VAR_6 = VAR_8 >> (8 - VAR_7);
  }
 }
 if (VAR_7 != 0) {
  VAR_0[VAR_5 ++] = VAR_6;
 }
 VAR_0[0] = FUNC_0(VAR_0 + 1, VAR_5 - 1);
}
