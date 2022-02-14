
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int*,size_t) ;

void
FUNC_1(uint16_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_3 = VAR_1;
 VAR_4 = 1;
 VAR_5 = 0;
 VAR_6 = 0;
 while (VAR_2 -- > 0) {
  uint32_t VAR_7;

  VAR_7 = VAR_3[VAR_2];
  VAR_5 |= (VAR_7 << VAR_6);
  VAR_6 += 8;
  if (VAR_6 >= 15) {
   VAR_0[VAR_4 ++] = VAR_5 & 0x7FFF;
   VAR_6 -= 15;
   VAR_5 >>= 15;
  }
 }
 if (VAR_6 != 0) {
  VAR_0[VAR_4 ++] = VAR_5;
 }
 VAR_0[0] = FUNC_0(VAR_0 + 1, VAR_4 - 1);
}
