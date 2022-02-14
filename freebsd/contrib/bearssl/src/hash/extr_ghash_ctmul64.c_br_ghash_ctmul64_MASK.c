
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int) ;

void
FUNC_6(void *VAR_0, const void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4, *VAR_5;
 unsigned char *VAR_6;
 uint64_t VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_4 = VAR_2;
 VAR_6 = VAR_0;
 VAR_5 = VAR_1;
 VAR_8 = FUNC_1(VAR_6);
 VAR_7 = FUNC_1(VAR_6 + 8);
 VAR_10 = FUNC_1(VAR_5);
 VAR_9 = FUNC_1(VAR_5 + 8);
 VAR_12 = FUNC_5(VAR_9);
 VAR_13 = FUNC_5(VAR_10);
 VAR_11 = VAR_9 ^ VAR_10;
 VAR_14 = VAR_12 ^ VAR_13;
 while (VAR_3 > 0) {
  const unsigned char *VAR_15;
  unsigned char VAR_16[16];
  uint64_t VAR_17, VAR_18, VAR_19, VAR_20;
  uint64_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
  uint64_t VAR_27, VAR_28, VAR_29, VAR_30;

  if (VAR_3 >= 16) {
   VAR_15 = VAR_4;
   VAR_4 += 16;
   VAR_3 -= 16;
  } else {
   FUNC_3(VAR_16, VAR_4, VAR_3);
   FUNC_4(VAR_16 + VAR_3, 0, (sizeof VAR_16) - VAR_3);
   VAR_15 = VAR_16;
   VAR_3 = 0;
  }
  VAR_8 ^= FUNC_1(VAR_15);
  VAR_7 ^= FUNC_1(VAR_15 + 8);

  VAR_17 = FUNC_5(VAR_7);
  VAR_18 = FUNC_5(VAR_8);
  VAR_19 = VAR_7 ^ VAR_8;
  VAR_20 = VAR_17 ^ VAR_18;

  VAR_21 = FUNC_0(VAR_7, VAR_9);
  VAR_22 = FUNC_0(VAR_8, VAR_10);
  VAR_23 = FUNC_0(VAR_19, VAR_11);
  VAR_24 = FUNC_0(VAR_17, VAR_12);
  VAR_25 = FUNC_0(VAR_18, VAR_13);
  VAR_26 = FUNC_0(VAR_20, VAR_14);
  VAR_23 ^= VAR_21 ^ VAR_22;
  VAR_26 ^= VAR_24 ^ VAR_25;
  VAR_24 = FUNC_5(VAR_24) >> 1;
  VAR_25 = FUNC_5(VAR_25) >> 1;
  VAR_26 = FUNC_5(VAR_26) >> 1;

  VAR_27 = VAR_21;
  VAR_28 = VAR_24 ^ VAR_23;
  VAR_29 = VAR_22 ^ VAR_26;
  VAR_30 = VAR_25;

  VAR_30 = (VAR_30 << 1) | (VAR_29 >> 63);
  VAR_29 = (VAR_29 << 1) | (VAR_28 >> 63);
  VAR_28 = (VAR_28 << 1) | (VAR_27 >> 63);
  VAR_27 = (VAR_27 << 1);

  VAR_29 ^= VAR_27 ^ (VAR_27 >> 1) ^ (VAR_27 >> 2) ^ (VAR_27 >> 7);
  VAR_28 ^= (VAR_27 << 63) ^ (VAR_27 << 62) ^ (VAR_27 << 57);
  VAR_30 ^= VAR_28 ^ (VAR_28 >> 1) ^ (VAR_28 >> 2) ^ (VAR_28 >> 7);
  VAR_29 ^= (VAR_28 << 63) ^ (VAR_28 << 62) ^ (VAR_28 << 57);

  VAR_7 = VAR_29;
  VAR_8 = VAR_30;
 }

 FUNC_2(VAR_6, VAR_8);
 FUNC_2(VAR_6 + 8, VAR_7);
}
