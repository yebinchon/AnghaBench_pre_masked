
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t temp ;


 int FUNC_0 (int const*) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

int
FUNC_1(u32 VAR_5[ ], const u8 VAR_6[], int VAR_7)
{
    int VAR_8 = 0;
 u32 VAR_9;

 VAR_5[0] = FUNC_0(VAR_6 );
 VAR_5[1] = FUNC_0(VAR_6 + 4);
 VAR_5[2] = FUNC_0(VAR_6 + 8);
 VAR_5[3] = FUNC_0(VAR_6 + 12);
 if (VAR_7 == 128) {
  for (;;) {
   VAR_9 = VAR_5[3];
   VAR_5[4] = VAR_5[0] ^
    (VAR_2[(VAR_9 >> 16) & 0xff] & 0xff000000) ^
    (VAR_3[(VAR_9 >> 8) & 0xff] & 0x00ff0000) ^
    (VAR_0[(VAR_9 ) & 0xff] & 0x0000ff00) ^
    (VAR_1[(VAR_9 >> 24) ] & 0x000000ff) ^
    VAR_4[VAR_8];
   VAR_5[5] = VAR_5[1] ^ VAR_5[4];
   VAR_5[6] = VAR_5[2] ^ VAR_5[5];
   VAR_5[7] = VAR_5[3] ^ VAR_5[6];
   if (++VAR_8 == 10) {
    return 10;
   }
   VAR_5 += 4;
  }
 }
 VAR_5[4] = FUNC_0(VAR_6 + 16);
 VAR_5[5] = FUNC_0(VAR_6 + 20);
 if (VAR_7 == 192) {
  for (;;) {
   VAR_9 = VAR_5[ 5];
   VAR_5[ 6] = VAR_5[ 0] ^
    (VAR_2[(VAR_9 >> 16) & 0xff] & 0xff000000) ^
    (VAR_3[(VAR_9 >> 8) & 0xff] & 0x00ff0000) ^
    (VAR_0[(VAR_9 ) & 0xff] & 0x0000ff00) ^
    (VAR_1[(VAR_9 >> 24) ] & 0x000000ff) ^
    VAR_4[VAR_8];
   VAR_5[ 7] = VAR_5[ 1] ^ VAR_5[ 6];
   VAR_5[ 8] = VAR_5[ 2] ^ VAR_5[ 7];
   VAR_5[ 9] = VAR_5[ 3] ^ VAR_5[ 8];
   if (++VAR_8 == 8) {
    return 12;
   }
   VAR_5[10] = VAR_5[ 4] ^ VAR_5[ 9];
   VAR_5[11] = VAR_5[ 5] ^ VAR_5[10];
   VAR_5 += 6;
  }
 }
 VAR_5[6] = FUNC_0(VAR_6 + 24);
 VAR_5[7] = FUNC_0(VAR_6 + 28);
 if (VAR_7 == 256) {
  for (;;) {
   VAR_9 = VAR_5[ 7];
   VAR_5[ 8] = VAR_5[ 0] ^
    (VAR_2[(VAR_9 >> 16) & 0xff] & 0xff000000) ^
    (VAR_3[(VAR_9 >> 8) & 0xff] & 0x00ff0000) ^
    (VAR_0[(VAR_9 ) & 0xff] & 0x0000ff00) ^
    (VAR_1[(VAR_9 >> 24) ] & 0x000000ff) ^
    VAR_4[VAR_8];
   VAR_5[ 9] = VAR_5[ 1] ^ VAR_5[ 8];
   VAR_5[10] = VAR_5[ 2] ^ VAR_5[ 9];
   VAR_5[11] = VAR_5[ 3] ^ VAR_5[10];
   if (++VAR_8 == 7) {
    return 14;
   }
   VAR_9 = VAR_5[11];
   VAR_5[12] = VAR_5[ 4] ^
    (VAR_2[(VAR_9 >> 24) ] & 0xff000000) ^
    (VAR_3[(VAR_9 >> 16) & 0xff] & 0x00ff0000) ^
    (VAR_0[(VAR_9 >> 8) & 0xff] & 0x0000ff00) ^
    (VAR_1[(VAR_9 ) & 0xff] & 0x000000ff);
   VAR_5[13] = VAR_5[ 5] ^ VAR_5[12];
   VAR_5[14] = VAR_5[ 6] ^ VAR_5[13];
        VAR_5[15] = VAR_5[ 7] ^ VAR_5[14];
   VAR_5 += 8;
  }
 }
 return 0;
}
