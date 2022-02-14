
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

u32 FUNC_1(const signed char *VAR_2, int VAR_3)
{
 u32 VAR_4[] = { 0x9464a485, 0x542e1a94, 0x3e846bff, 0xb75bcfc3 };

 u32 VAR_5 = VAR_4[0], VAR_6 = VAR_4[1];
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12;



 VAR_11 = (u32) VAR_3 | ((u32) VAR_3 << 8);
 VAR_11 |= VAR_11 << 16;

 while (VAR_3 >= 16) {
  VAR_7 = (u32) VAR_2[0] |
      (u32) VAR_2[1] << 8 | (u32) VAR_2[2] << 16 | (u32) VAR_2[3] << 24;
  VAR_8 = (u32) VAR_2[4] |
      (u32) VAR_2[5] << 8 | (u32) VAR_2[6] << 16 | (u32) VAR_2[7] << 24;
  VAR_9 = (u32) VAR_2[8] |
      (u32) VAR_2[9] << 8 |
      (u32) VAR_2[10] << 16 | (u32) VAR_2[11] << 24;
  VAR_10 = (u32) VAR_2[12] |
      (u32) VAR_2[13] << 8 |
      (u32) VAR_2[14] << 16 | (u32) VAR_2[15] << 24;

  FUNC_0(VAR_1);

  VAR_3 -= 16;
  VAR_2 += 16;
 }

 if (VAR_3 >= 12) {
  VAR_7 = (u32) VAR_2[0] |
      (u32) VAR_2[1] << 8 | (u32) VAR_2[2] << 16 | (u32) VAR_2[3] << 24;
  VAR_8 = (u32) VAR_2[4] |
      (u32) VAR_2[5] << 8 | (u32) VAR_2[6] << 16 | (u32) VAR_2[7] << 24;
  VAR_9 = (u32) VAR_2[8] |
      (u32) VAR_2[9] << 8 |
      (u32) VAR_2[10] << 16 | (u32) VAR_2[11] << 24;

  VAR_10 = VAR_11;
  for (VAR_12 = 12; VAR_12 < VAR_3; VAR_12++) {
   VAR_10 <<= 8;
   VAR_10 |= VAR_2[VAR_12];
  }
 } else if (VAR_3 >= 8) {
  VAR_7 = (u32) VAR_2[0] |
      (u32) VAR_2[1] << 8 | (u32) VAR_2[2] << 16 | (u32) VAR_2[3] << 24;
  VAR_8 = (u32) VAR_2[4] |
      (u32) VAR_2[5] << 8 | (u32) VAR_2[6] << 16 | (u32) VAR_2[7] << 24;

  VAR_9 = VAR_10 = VAR_11;
  for (VAR_12 = 8; VAR_12 < VAR_3; VAR_12++) {
   VAR_9 <<= 8;
   VAR_9 |= VAR_2[VAR_12];
  }
 } else if (VAR_3 >= 4) {
  VAR_7 = (u32) VAR_2[0] |
      (u32) VAR_2[1] << 8 | (u32) VAR_2[2] << 16 | (u32) VAR_2[3] << 24;

  VAR_8 = VAR_9 = VAR_10 = VAR_11;
  for (VAR_12 = 4; VAR_12 < VAR_3; VAR_12++) {
   VAR_8 <<= 8;
   VAR_8 |= VAR_2[VAR_12];
  }
 } else {
  VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11;
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_7 <<= 8;
   VAR_7 |= VAR_2[VAR_12];
  }
 }

 FUNC_0(VAR_0);


 return VAR_5 ^ VAR_6;
}
