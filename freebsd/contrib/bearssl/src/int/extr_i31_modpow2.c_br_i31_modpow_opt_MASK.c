
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int*,int*,size_t) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int*,int*,int const*,int) ;
 int FUNC_5 (int*,int ,int const*) ;
 int FUNC_6 (int*,int const*) ;
 int FUNC_7 (int*,int const) ;
 int FUNC_8 (int*,int*,size_t) ;

uint32_t
FUNC_9(uint32_t *VAR_0,
 const unsigned char *VAR_1, size_t VAR_2,
 const uint32_t *VAR_3, uint32_t VAR_4, uint32_t *VAR_5, size_t VAR_6)
{
 size_t VAR_7, VAR_8;
 uint32_t *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12, VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16;




 VAR_8 = (VAR_3[0] + 63) >> 5;
 VAR_7 = VAR_8 * sizeof VAR_3[0];
 VAR_8 += (VAR_8 & 1);
 VAR_9 = VAR_5;
 VAR_10 = VAR_5 + VAR_8;







 if (VAR_6 < (VAR_8 << 1)) {
  return 0;
 }
 for (VAR_16 = 5; VAR_16 > 1; VAR_16 --) {
  if ((((uint32_t)1 << VAR_16) + 1) * VAR_8 <= VAR_6) {
   break;
  }
 }




 FUNC_6(VAR_0, VAR_3);






 if (VAR_16 == 1) {
  FUNC_8(VAR_10, VAR_0, VAR_7);
 } else {
  FUNC_8(VAR_10 + VAR_8, VAR_0, VAR_7);
  VAR_11 = VAR_10 + VAR_8;
  for (VAR_12 = 2; VAR_12 < ((unsigned)1 << VAR_16); VAR_12 ++) {
   FUNC_4(VAR_11 + VAR_8, VAR_11, VAR_0, VAR_3, VAR_4);
   VAR_11 += VAR_8;
  }
 }






 FUNC_7(VAR_0, VAR_3[0]);
 VAR_0[(VAR_3[0] + 31) >> 5] = 1;
 FUNC_5(VAR_0, 0, VAR_3);





 VAR_14 = 0;
 VAR_15 = 0;
 while (VAR_15 > 0 || VAR_2 > 0) {
  int VAR_17, VAR_18;
  uint32_t VAR_19;




  VAR_18 = VAR_16;
  if (VAR_15 < VAR_16) {
   if (VAR_2 > 0) {
    VAR_14 = (VAR_14 << 8) | *VAR_1 ++;
    VAR_2 --;
    VAR_15 += 8;
   } else {
    VAR_18 = VAR_15;
   }
  }
  VAR_19 = (VAR_14 >> (VAR_15 - VAR_18)) & (((uint32_t)1 << VAR_18) - 1);
  VAR_15 -= VAR_18;




  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17 ++) {
   FUNC_4(VAR_9, VAR_0, VAR_0, VAR_3, VAR_4);
   FUNC_8(VAR_0, VAR_9, VAR_7);
  }







  if (VAR_16 > 1) {
   FUNC_7(VAR_10, VAR_3[0]);
   VAR_11 = VAR_10 + VAR_8;
   for (VAR_12 = 1; VAR_12 < ((uint32_t)1 << VAR_18); VAR_12 ++) {
    uint32_t VAR_20;

    VAR_20 = -FUNC_1(VAR_12, VAR_19);
    for (VAR_13 = 1; VAR_13 < VAR_8; VAR_13 ++) {
     VAR_10[VAR_13] |= VAR_20 & VAR_11[VAR_13];
    }
    VAR_11 += VAR_8;
   }
  }





  FUNC_4(VAR_9, VAR_0, VAR_10, VAR_3, VAR_4);
  FUNC_0(FUNC_2(VAR_19, 0), VAR_0, VAR_9, VAR_7);
 }




 FUNC_3(VAR_0, VAR_3, VAR_4);
 return 1;
}
