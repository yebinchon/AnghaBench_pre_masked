
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (int*,unsigned char const*,size_t) ;
 int FUNC_2 (int*,int,int const*) ;
 int FUNC_3 (int*,int) ;

void
FUNC_4(uint32_t *VAR_0,
 const void *VAR_1, size_t VAR_2, const uint32_t *VAR_3)
{
 uint32_t VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 const unsigned char *VAR_8;

 VAR_4 = VAR_3[0];




 if (VAR_4 == 0) {
  VAR_0[0] = 0;
  return;
 }




 FUNC_3(VAR_0, VAR_4);






 VAR_5 = (VAR_4 + 7) >> 3;
 VAR_6 = VAR_5 - 1;




 if (VAR_6 >= VAR_2) {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  VAR_0[0] = VAR_4;
  return;
 }






 VAR_8 = VAR_1;
 VAR_7 = (VAR_2 - VAR_6 + 3) & ~(size_t)3;







 if (VAR_7 > VAR_2) {
  int VAR_9;
  uint32_t VAR_10;

  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < 4; VAR_9 ++) {
   VAR_10 <<= 8;
   if (VAR_7 <= VAR_2) {
    VAR_10 |= VAR_8[VAR_2 - VAR_7];
   }
   VAR_7 --;
  }
  FUNC_2(VAR_0, VAR_10, VAR_3);
 } else {
  FUNC_1(VAR_0, VAR_8, VAR_2 - VAR_7);
  VAR_0[0] = VAR_4;
 }





 for (VAR_6 = VAR_2 - VAR_7; VAR_6 < VAR_2; VAR_6 += 4) {
  FUNC_2(VAR_0, FUNC_0(VAR_8 + VAR_6), VAR_3);
 }
}
