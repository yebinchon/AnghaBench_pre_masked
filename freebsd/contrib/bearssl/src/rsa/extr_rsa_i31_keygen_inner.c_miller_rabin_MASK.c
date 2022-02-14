
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_prng_class ;
typedef int (* br_i31_modpow_opt_type ) (int*,unsigned char*,size_t,int const*,int,int*,size_t) ;


 int const FUNC_0 (int const) ;
 int FUNC_1 (unsigned char*,size_t,int const*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const**,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(const br_prng_class **VAR_0, const uint32_t *VAR_1, int VAR_2,
 uint32_t *VAR_3, size_t VAR_4, br_i31_modpow_opt_type VAR_5)
{
 unsigned char *VAR_6;
 size_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;
 unsigned VAR_12;
 uint32_t VAR_13;




 VAR_6 = (unsigned char *)VAR_3;
 VAR_8 = ((VAR_1[0] - (VAR_1[0] >> 5)) + 7) >> 3;
 FUNC_1(VAR_6, VAR_8, VAR_1);
 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10 ++) {
  unsigned VAR_14;

  VAR_14 = VAR_6[VAR_10];
  VAR_6[VAR_10] = (unsigned char)((VAR_14 >> 1) | VAR_12);
  VAR_12 = VAR_14 << 7;
 }




 VAR_9 = (VAR_8 + 3) >> 2;
 VAR_3 += VAR_9;
 VAR_4 -= VAR_9;

 VAR_7 = (VAR_1[0] + 31) >> 5;
 VAR_11 = VAR_1[0] - 1 - FUNC_0(VAR_1[0] & 31);
 VAR_13 = FUNC_2(VAR_1[1]);
 while (VAR_2 -- > 0) {
  uint32_t *VAR_15, *VAR_16;
  uint32_t VAR_17, VAR_18;
  size_t VAR_19;






  VAR_15 = VAR_3;
  VAR_15[0] = VAR_1[0];
  VAR_15[VAR_7] = 0;
  FUNC_3(VAR_0, VAR_15, VAR_11);






  VAR_16 = VAR_3 + 1 + VAR_7;
  VAR_19 = VAR_4 - 1 - VAR_7;
  if ((VAR_19 & 1) != 0) {






   VAR_16 ++;
   VAR_19 --;
  }
  VAR_5(VAR_15, VAR_6, VAR_8, VAR_1, VAR_13, VAR_16, VAR_19);






  VAR_17 = VAR_15[1] ^ 1;
  VAR_18 = VAR_15[1] ^ (VAR_1[1] - 1);
  for (VAR_10 = 2; VAR_10 <= VAR_7; VAR_10 ++) {
   VAR_17 |= VAR_15[VAR_10];
   VAR_18 |= VAR_15[VAR_10] ^ VAR_1[VAR_10];
  }

  if ((FUNC_0(VAR_17) | FUNC_0(VAR_18)) == 0) {
   return 0;
  }
 }
 return 1;
}
