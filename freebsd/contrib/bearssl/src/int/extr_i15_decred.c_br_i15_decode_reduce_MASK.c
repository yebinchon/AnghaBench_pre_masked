
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int*,unsigned char const*,size_t) ;
 int FUNC_1 (int*,int,int const*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;

void
FUNC_4(uint16_t *VAR_0,
 const void *VAR_1, size_t VAR_2, const uint16_t *VAR_3)
{
 uint32_t VAR_4, VAR_5;
 size_t VAR_6, VAR_7;
 const unsigned char *VAR_8;
 uint32_t VAR_9;
 int VAR_10;




 VAR_4 = VAR_3[0];




 if (VAR_4 == 0) {
  VAR_0[0] = 0;
  return;
 }




 FUNC_3(VAR_0, VAR_4);





 VAR_5 = VAR_4 >> 4;
 VAR_5 = (VAR_4 & 15) + (VAR_5 << 4) - VAR_5;
 VAR_6 = (VAR_5 + 7) >> 3;
 VAR_7 = VAR_6 - 1;
 if (VAR_7 >= VAR_2) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_0[0] = VAR_4;
  return;
 }
 VAR_8 = VAR_1;
 FUNC_0(VAR_0, VAR_8, VAR_7);
 VAR_0[0] = VAR_4;




 VAR_9 = 0;
 VAR_10 = 0;
 while (VAR_7 < VAR_2) {
  uint32_t VAR_11;

  VAR_11 = VAR_8[VAR_7 ++];
  VAR_9 = (VAR_9 << 8) | VAR_11;
  VAR_10 += 8;
  if (VAR_10 >= 15) {
   FUNC_1(VAR_0, VAR_9 >> (VAR_10 - 15), VAR_3);
   VAR_10 -= 15;
   VAR_9 &= ~((uint32_t)-1 << VAR_10);
  }
 }





 if (VAR_10 != 0) {
  VAR_9 = (VAR_9 | (VAR_0[1] << VAR_10)) & 0x7FFF;
  FUNC_2(VAR_0, 15 - VAR_10);
  FUNC_1(VAR_0, VAR_9, VAR_3);
 }
}
