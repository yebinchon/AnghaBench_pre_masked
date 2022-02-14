
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int*,size_t,int,int,int,int) ;
 int FUNC_4 (int*,int*,size_t,int,int,int,int,int const*,int) ;
 int FUNC_5 (int*,int const*,size_t) ;
 int FUNC_6 (int*,int ,size_t) ;

uint32_t
FUNC_7(uint16_t *VAR_0, const uint16_t *VAR_1, const uint16_t *VAR_2, uint16_t VAR_3,
 uint16_t *VAR_4)
{
 size_t VAR_5, VAR_6;
 uint16_t *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_5 = (VAR_2[0] + 15) >> 4;
 VAR_7 = VAR_4;
 VAR_8 = VAR_7 + VAR_5;
 VAR_9 = VAR_0 + 1;
 VAR_10 = VAR_8 + VAR_5;
 FUNC_5(VAR_7, VAR_1 + 1, VAR_5 * sizeof *VAR_1);
 FUNC_5(VAR_8, VAR_2 + 1, VAR_5 * sizeof *VAR_2);
 FUNC_6(VAR_10, 0, VAR_5 * sizeof *VAR_10);





 for (VAR_11 = ((VAR_2[0] - (VAR_2[0] >> 4)) << 1) + 14; VAR_11 >= 14; VAR_11 -= 14) {
  size_t VAR_13;
  uint32_t VAR_14, VAR_15;
  uint32_t VAR_16, VAR_17, VAR_18, VAR_19;
  uint32_t VAR_20, VAR_21, VAR_22, VAR_23;
  int32_t VAR_24, VAR_25, VAR_26, VAR_27;
  int VAR_28;
  VAR_14 = (uint32_t)-1;
  VAR_15 = (uint32_t)-1;
  VAR_16 = 0;
  VAR_17 = 0;
  VAR_18 = 0;
  VAR_19 = 0;
  VAR_13 = VAR_5;
  while (VAR_13 -- > 0) {
   uint32_t VAR_29, VAR_30;

   VAR_29 = VAR_7[VAR_13];
   VAR_30 = VAR_8[VAR_13];
   VAR_16 ^= (VAR_16 ^ VAR_29) & VAR_14;
   VAR_17 ^= (VAR_17 ^ VAR_29) & VAR_15;
   VAR_18 ^= (VAR_18 ^ VAR_30) & VAR_14;
   VAR_19 ^= (VAR_19 ^ VAR_30) & VAR_15;
   VAR_15 = VAR_14;
   VAR_14 &= (((VAR_29 | VAR_30) + 0xFFFF) >> 16) - (uint32_t)1;
  }







  VAR_17 |= VAR_16 & VAR_15;
  VAR_16 &= ~VAR_15;
  VAR_19 |= VAR_18 & VAR_15;
  VAR_18 &= ~VAR_15;
  VAR_20 = (VAR_16 << 15) + VAR_17;
  VAR_21 = (VAR_18 << 15) + VAR_19;
  VAR_22 = VAR_7[0];
  VAR_23 = VAR_8[0];
  VAR_24 = 1;
  VAR_25 = 0;
  VAR_26 = 0;
  VAR_27 = 1;
  for (VAR_28 = 0; VAR_28 < 15; VAR_28 ++) {
   uint32_t VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
   VAR_31 = FUNC_1(VAR_20, VAR_21);
   VAR_32 = (VAR_22 >> VAR_28) & 1;
   VAR_33 = (VAR_23 >> VAR_28) & 1;
   VAR_34 = VAR_32 & VAR_33 & VAR_31;
   VAR_35 = VAR_32 & VAR_33 & FUNC_2(VAR_31);
   VAR_36 = VAR_34 | FUNC_2(VAR_32);




   VAR_22 -= VAR_23 & -VAR_34;
   VAR_20 -= VAR_21 & -VAR_34;
   VAR_24 -= VAR_26 & -(int32_t)VAR_34;
   VAR_25 -= VAR_27 & -(int32_t)VAR_34;
   VAR_23 -= VAR_22 & -VAR_35;
   VAR_21 -= VAR_20 & -VAR_35;
   VAR_26 -= VAR_24 & -(int32_t)VAR_35;
   VAR_27 -= VAR_25 & -(int32_t)VAR_35;




   VAR_22 += VAR_22 & (VAR_36 - 1);
   VAR_24 += VAR_24 & ((int32_t)VAR_36 - 1);
   VAR_25 += VAR_25 & ((int32_t)VAR_36 - 1);
   VAR_20 ^= (VAR_20 ^ (VAR_20 >> 1)) & -VAR_36;
   VAR_23 += VAR_23 & -VAR_36;
   VAR_26 += VAR_26 & -(int32_t)VAR_36;
   VAR_27 += VAR_27 & -(int32_t)VAR_36;
   VAR_21 ^= (VAR_21 ^ (VAR_21 >> 1)) & (VAR_36 - 1);
  }




  VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_5, VAR_24, VAR_25, VAR_26, VAR_27);
  VAR_24 -= VAR_24 * ((VAR_12 & 1) << 1);
  VAR_25 -= VAR_25 * ((VAR_12 & 1) << 1);
  VAR_26 -= VAR_26 * (VAR_12 & 2);
  VAR_27 -= VAR_27 * (VAR_12 & 2);
  FUNC_4(VAR_9, VAR_10, VAR_5, VAR_24, VAR_25, VAR_26, VAR_27, VAR_2 + 1, VAR_3);
 }







 VAR_12 = (VAR_7[0] | VAR_8[0]) ^ 1;
 VAR_9[0] |= VAR_10[0];
 for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6 ++) {
  VAR_12 |= VAR_7[VAR_6] | VAR_8[VAR_6];
  VAR_9[VAR_6] |= VAR_10[VAR_6];
 }
 return FUNC_0(VAR_12);
}
