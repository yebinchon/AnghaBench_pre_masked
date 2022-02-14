
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned char uint16_t ;


 unsigned char* VAR_0 ;
 int* VAR_1 ;
 unsigned char* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (unsigned char*,unsigned char*,int,unsigned char*) ;
 int FUNC_2 (unsigned char*,int,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char*,int*,int ) ;
 int FUNC_4 (unsigned char*,int*,int ) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_8 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_9 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_12 (unsigned char*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_13(unsigned char *VAR_5, size_t VAR_6,
 const unsigned char *VAR_7, size_t VAR_8, int VAR_9)
{






 uint16_t VAR_10[18], VAR_11[18], VAR_12[18], VAR_13[18], VAR_14[18];
 uint16_t VAR_15[19], VAR_16[18], VAR_17[19], VAR_18[18];
 uint16_t VAR_19[18], VAR_20[18], VAR_21[18], VAR_22[18], VAR_23[18];
 unsigned char VAR_24[32];
 uint32_t VAR_25;
 int VAR_26;

 (void)VAR_9;







 if (VAR_6 != 32 || VAR_8 > 32) {
  return 0;
 }
 VAR_5[31] &= 0x7F;





 FUNC_6(VAR_5);
 FUNC_5(VAR_17, 0x111);
 VAR_17[18] = 1;
 FUNC_1(VAR_15, VAR_5, 32, VAR_17);
 VAR_15[0] = 0x110;
 FUNC_4(VAR_15, VAR_1, FUNC_0(FUNC_4(VAR_15, VAR_1, 0)));





 FUNC_3(VAR_10, VAR_15, VAR_2, VAR_1, VAR_4);
 FUNC_11(VAR_12, VAR_10, (18 * sizeof(uint16_t)));
 FUNC_5(VAR_13, VAR_1[0]);
 FUNC_11(VAR_11, VAR_13, (18 * sizeof(uint16_t)));
 VAR_11[1] = 19;
 FUNC_11(VAR_14, VAR_11, (18 * sizeof(uint16_t)));

 FUNC_12(VAR_24, 0, (sizeof VAR_24) - VAR_8);
 FUNC_11(VAR_24 + (sizeof VAR_24) - VAR_8, VAR_7, VAR_8);
 VAR_24[31] &= 0xF8;
 VAR_24[0] &= 0x7F;
 VAR_24[0] |= 0x40;





 VAR_25 = 0;
 for (VAR_26 = 254; VAR_26 >= 0; VAR_26 --) {
  uint32_t VAR_27;

  VAR_27 = (VAR_24[31 - (VAR_26 >> 3)] >> (VAR_26 & 7)) & 1;
  VAR_25 ^= VAR_27;
  FUNC_10(VAR_11, VAR_12, VAR_25);
  FUNC_10(VAR_13, VAR_14, VAR_25);
  VAR_25 = VAR_27;
  FUNC_7(VAR_15, VAR_11, VAR_13);
  FUNC_8(VAR_16, VAR_15, VAR_15);
  FUNC_9(VAR_17, VAR_11, VAR_13);
  FUNC_8(VAR_18, VAR_17, VAR_17);
  FUNC_9(VAR_21, VAR_16, VAR_18);
  FUNC_7(VAR_19, VAR_12, VAR_14);
  FUNC_9(VAR_20, VAR_12, VAR_14);
  FUNC_8(VAR_22, VAR_20, VAR_15);
  FUNC_8(VAR_23, VAR_19, VAR_17);
  FUNC_7(VAR_12, VAR_22, VAR_23);
  FUNC_8(VAR_12, VAR_12, VAR_12);
  FUNC_9(VAR_14, VAR_22, VAR_23);
  FUNC_8(VAR_14, VAR_14, VAR_14);
  FUNC_8(VAR_14, VAR_14, VAR_10);
  FUNC_8(VAR_11, VAR_16, VAR_18);
  FUNC_8(VAR_13, VAR_0, VAR_21);
  FUNC_7(VAR_13, VAR_13, VAR_16);
  FUNC_8(VAR_13, VAR_21, VAR_13);







 }
 FUNC_10(VAR_11, VAR_12, VAR_25);
 FUNC_10(VAR_13, VAR_14, VAR_25);






 FUNC_11(VAR_15, VAR_13, (18 * sizeof(uint16_t)));
 for (VAR_26 = 0; VAR_26 < 15; VAR_26 ++) {
  FUNC_8(VAR_15, VAR_15, VAR_15);
  FUNC_8(VAR_15, VAR_15, VAR_13);
 }
 FUNC_11(VAR_17, VAR_15, (18 * sizeof(uint16_t)));
 for (VAR_26 = 0; VAR_26 < 14; VAR_26 ++) {
  int VAR_28;

  for (VAR_28 = 0; VAR_28 < 16; VAR_28 ++) {
   FUNC_8(VAR_17, VAR_17, VAR_17);
  }
  FUNC_8(VAR_17, VAR_17, VAR_15);
 }
 for (VAR_26 = 14; VAR_26 >= 0; VAR_26 --) {
  FUNC_8(VAR_17, VAR_17, VAR_17);
  if ((0xFFEB >> VAR_26) & 1) {
   FUNC_8(VAR_17, VAR_13, VAR_17);
  }
 }
 FUNC_8(VAR_17, VAR_11, VAR_17);







 FUNC_5(VAR_15, VAR_1[0]);
 VAR_15[1] = 1;
 FUNC_3(VAR_11, VAR_15, VAR_17, VAR_1, VAR_4);

 FUNC_2(VAR_5, 32, VAR_11);
 FUNC_6(VAR_5);
 return 1;


}
