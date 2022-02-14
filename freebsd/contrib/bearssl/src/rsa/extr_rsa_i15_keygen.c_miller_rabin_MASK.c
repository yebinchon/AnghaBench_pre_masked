
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int br_prng_class ;


 int const FUNC_0 (int const) ;
 int FUNC_1 (unsigned char*,size_t,int const*) ;
 int FUNC_2 (int*,unsigned char*,size_t,int const*,int,int*,size_t) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const**,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_5(const br_prng_class **VAR_0, const uint16_t *VAR_1, int VAR_2,
 uint16_t *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10;
 unsigned VAR_11;
 uint16_t VAR_12;




 VAR_5 = (unsigned char *)VAR_3;
 VAR_7 = ((VAR_1[0] - (VAR_1[0] >> 4)) + 7) >> 3;
 FUNC_1(VAR_5, VAR_7, VAR_1);
 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9 ++) {
  unsigned VAR_13;

  VAR_13 = VAR_5[VAR_9];
  VAR_5[VAR_9] = (unsigned char)((VAR_13 >> 1) | VAR_11);
  VAR_11 = VAR_13 << 7;
 }




 VAR_8 = (VAR_7 + 1) >> 1;
 VAR_3 += VAR_8;
 VAR_4 -= VAR_8;

 VAR_6 = (VAR_1[0] + 15) >> 4;
 VAR_10 = VAR_1[0] - 1 - FUNC_0(VAR_1[0] & 15);
 VAR_12 = FUNC_3(VAR_1[1]);
 while (VAR_2 -- > 0) {
  uint16_t *VAR_14;
  uint32_t VAR_15, VAR_16;






  VAR_14 = VAR_3;
  VAR_14[0] = VAR_1[0];
  VAR_14[VAR_6] = 0;
  FUNC_4(VAR_0, VAR_14, VAR_10);






  FUNC_2(VAR_14, VAR_5, VAR_7,
   VAR_1, VAR_12, VAR_3 + 1 + VAR_6, VAR_4 - 1 - VAR_6);






  VAR_15 = VAR_14[1] ^ 1;
  VAR_16 = VAR_14[1] ^ (VAR_1[1] - 1);
  for (VAR_9 = 2; VAR_9 <= VAR_6; VAR_9 ++) {
   VAR_15 |= VAR_14[VAR_9];
   VAR_16 |= VAR_14[VAR_9] ^ VAR_1[VAR_9];
  }

  if ((FUNC_0(VAR_15) | FUNC_0(VAR_16)) == 0) {
   return 0;
  }
 }
 return 1;
}
