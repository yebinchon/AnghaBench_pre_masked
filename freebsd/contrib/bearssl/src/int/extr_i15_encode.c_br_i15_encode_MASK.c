
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (void*,int ,size_t) ;

void
FUNC_1(void *VAR_0, size_t VAR_1, const uint16_t *VAR_2)
{
 unsigned char *VAR_3;
 size_t VAR_4, VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_5 = (VAR_2[0] + 15) >> 4;
 if (VAR_5 == 0) {
  FUNC_0(VAR_0, 0, VAR_1);
  return;
 }
 VAR_4 = 1;
 VAR_6 = 0;
 VAR_7 = 0;
 VAR_3 = VAR_0;
 while (VAR_1 -- > 0) {
  if (VAR_7 < 8) {
   if (VAR_4 <= VAR_5) {
    VAR_6 += (uint32_t)VAR_2[VAR_4 ++] << VAR_7;
   }
   VAR_7 += 15;
  }
  VAR_3[VAR_1] = (unsigned char)VAR_6;
  VAR_6 >>= 8;
  VAR_7 -= 8;
 }
}
