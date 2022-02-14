
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_4(uint32_t *VAR_0, const uint32_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_10 = VAR_1[0];
 VAR_11 = VAR_1[1];
 VAR_12 = VAR_1[2];
 VAR_13 = VAR_1[3];
 VAR_14 = VAR_1[4];

 VAR_15 = VAR_11 * 5;
 VAR_16 = VAR_12 * 5;
 VAR_17 = VAR_13 * 5;
 VAR_18 = VAR_14 * 5;

 VAR_5 = VAR_0[0];
 VAR_6 = VAR_0[1];
 VAR_7 = VAR_0[2];
 VAR_8 = VAR_0[3];
 VAR_9 = VAR_0[4];

 VAR_4 = VAR_2;
 while (VAR_3 > 0) {
  uint64_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
  uint64_t VAR_24;
  unsigned char VAR_25[16];




  if (VAR_3 < 16) {
   FUNC_3(VAR_25, 0, sizeof VAR_25);
   FUNC_2(VAR_25, VAR_4, VAR_3);
   VAR_4 = VAR_25;
   VAR_3 = 16;
  }





  VAR_5 += FUNC_1(VAR_4) & 0x03FFFFFF;
  VAR_6 += (FUNC_1(VAR_4 + 3) >> 2) & 0x03FFFFFF;
  VAR_7 += (FUNC_1(VAR_4 + 6) >> 4) & 0x03FFFFFF;
  VAR_8 += (FUNC_1(VAR_4 + 9) >> 6) & 0x03FFFFFF;
  VAR_9 += (FUNC_1(VAR_4 + 12) >> 8) | 0x01000000;






  VAR_19 = ((uint64_t)(VAR_5) * (uint64_t)(VAR_10)) + ((uint64_t)(VAR_6) * (uint64_t)(VAR_18)) + ((uint64_t)(VAR_7) * (uint64_t)(VAR_17)) + ((uint64_t)(VAR_8) * (uint64_t)(VAR_16)) + ((uint64_t)(VAR_9) * (uint64_t)(VAR_15));
  VAR_20 = ((uint64_t)(VAR_5) * (uint64_t)(VAR_11)) + ((uint64_t)(VAR_6) * (uint64_t)(VAR_10)) + ((uint64_t)(VAR_7) * (uint64_t)(VAR_18)) + ((uint64_t)(VAR_8) * (uint64_t)(VAR_17)) + ((uint64_t)(VAR_9) * (uint64_t)(VAR_16));
  VAR_21 = ((uint64_t)(VAR_5) * (uint64_t)(VAR_12)) + ((uint64_t)(VAR_6) * (uint64_t)(VAR_11)) + ((uint64_t)(VAR_7) * (uint64_t)(VAR_10)) + ((uint64_t)(VAR_8) * (uint64_t)(VAR_18)) + ((uint64_t)(VAR_9) * (uint64_t)(VAR_17));
  VAR_22 = ((uint64_t)(VAR_5) * (uint64_t)(VAR_13)) + ((uint64_t)(VAR_6) * (uint64_t)(VAR_12)) + ((uint64_t)(VAR_7) * (uint64_t)(VAR_11)) + ((uint64_t)(VAR_8) * (uint64_t)(VAR_10)) + ((uint64_t)(VAR_9) * (uint64_t)(VAR_18));
  VAR_23 = ((uint64_t)(VAR_5) * (uint64_t)(VAR_14)) + ((uint64_t)(VAR_6) * (uint64_t)(VAR_13)) + ((uint64_t)(VAR_7) * (uint64_t)(VAR_12)) + ((uint64_t)(VAR_8) * (uint64_t)(VAR_11)) + ((uint64_t)(VAR_9) * (uint64_t)(VAR_10));
  VAR_24 = VAR_19 >> 26;
  VAR_5 = (uint32_t)VAR_19 & 0x3FFFFFF;
  VAR_20 += VAR_24;
  VAR_24 = VAR_20 >> 26;
  VAR_6 = (uint32_t)VAR_20 & 0x3FFFFFF;
  VAR_21 += VAR_24;
  VAR_24 = VAR_21 >> 26;
  VAR_7 = (uint32_t)VAR_21 & 0x3FFFFFF;
  VAR_22 += VAR_24;
  VAR_24 = VAR_22 >> 26;
  VAR_8 = (uint32_t)VAR_22 & 0x3FFFFFF;
  VAR_23 += VAR_24;
  VAR_24 = VAR_23 >> 26;
  VAR_9 = (uint32_t)VAR_23 & 0x3FFFFFF;
  VAR_5 += (uint32_t)VAR_24 * 5;
  VAR_6 += VAR_5 >> 26;
  VAR_5 &= 0x3FFFFFF;

  VAR_4 += 16;
  VAR_3 -= 16;
 }

 VAR_0[0] = VAR_5;
 VAR_0[1] = VAR_6;
 VAR_0[2] = VAR_7;
 VAR_0[3] = VAR_8;
 VAR_0[4] = VAR_9;
}
