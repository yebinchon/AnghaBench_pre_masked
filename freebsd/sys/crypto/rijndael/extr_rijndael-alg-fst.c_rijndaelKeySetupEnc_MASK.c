
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t temp ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,char*) ;
 int* VAR_0 ;
 int* VAR_1 ;

int FUNC_2(u32 VAR_2[ ], const u8 VAR_3[], int VAR_4) {
    int VAR_5 = 0;
 u32 VAR_6;

 FUNC_1(VAR_4 == 128 || VAR_4 == 192 || VAR_4 == 256,
     ("Invalid key size (%d).", VAR_4));
 VAR_2[0] = FUNC_0(VAR_3 );
 VAR_2[1] = FUNC_0(VAR_3 + 4);
 VAR_2[2] = FUNC_0(VAR_3 + 8);
 VAR_2[3] = FUNC_0(VAR_3 + 12);
 if (VAR_4 == 128) {
  for (;;) {
   VAR_6 = VAR_2[3];
   VAR_2[4] = VAR_2[0] ^
    (VAR_0[(VAR_6 >> 16) & 0xff] & 0xff000000) ^
    (VAR_0[(VAR_6 >> 8) & 0xff] & 0x00ff0000) ^
    (VAR_0[(VAR_6 ) & 0xff] & 0x0000ff00) ^
    (VAR_0[(VAR_6 >> 24) ] & 0x000000ff) ^
    VAR_1[VAR_5];
   VAR_2[5] = VAR_2[1] ^ VAR_2[4];
   VAR_2[6] = VAR_2[2] ^ VAR_2[5];
   VAR_2[7] = VAR_2[3] ^ VAR_2[6];
   if (++VAR_5 == 10) {
    return 10;
   }
   VAR_2 += 4;
  }
 }
 VAR_2[4] = FUNC_0(VAR_3 + 16);
 VAR_2[5] = FUNC_0(VAR_3 + 20);
 if (VAR_4 == 192) {
  for (;;) {
   VAR_6 = VAR_2[ 5];
   VAR_2[ 6] = VAR_2[ 0] ^
    (VAR_0[(VAR_6 >> 16) & 0xff] & 0xff000000) ^
    (VAR_0[(VAR_6 >> 8) & 0xff] & 0x00ff0000) ^
    (VAR_0[(VAR_6 ) & 0xff] & 0x0000ff00) ^
    (VAR_0[(VAR_6 >> 24) ] & 0x000000ff) ^
    VAR_1[VAR_5];
   VAR_2[ 7] = VAR_2[ 1] ^ VAR_2[ 6];
   VAR_2[ 8] = VAR_2[ 2] ^ VAR_2[ 7];
   VAR_2[ 9] = VAR_2[ 3] ^ VAR_2[ 8];
   if (++VAR_5 == 8) {
    return 12;
   }
   VAR_2[10] = VAR_2[ 4] ^ VAR_2[ 9];
   VAR_2[11] = VAR_2[ 5] ^ VAR_2[10];
   VAR_2 += 6;
  }
 }
 VAR_2[6] = FUNC_0(VAR_3 + 24);
 VAR_2[7] = FUNC_0(VAR_3 + 28);
 if (VAR_4 == 256) {
        for (;;) {
         VAR_6 = VAR_2[ 7];
         VAR_2[ 8] = VAR_2[ 0] ^
          (VAR_0[(VAR_6 >> 16) & 0xff] & 0xff000000) ^
          (VAR_0[(VAR_6 >> 8) & 0xff] & 0x00ff0000) ^
          (VAR_0[(VAR_6 ) & 0xff] & 0x0000ff00) ^
          (VAR_0[(VAR_6 >> 24) ] & 0x000000ff) ^
          VAR_1[VAR_5];
         VAR_2[ 9] = VAR_2[ 1] ^ VAR_2[ 8];
         VAR_2[10] = VAR_2[ 2] ^ VAR_2[ 9];
         VAR_2[11] = VAR_2[ 3] ^ VAR_2[10];
   if (++VAR_5 == 7) {
    return 14;
   }
         VAR_6 = VAR_2[11];
         VAR_2[12] = VAR_2[ 4] ^
          (VAR_0[(VAR_6 >> 24) ] & 0xff000000) ^
          (VAR_0[(VAR_6 >> 16) & 0xff] & 0x00ff0000) ^
          (VAR_0[(VAR_6 >> 8) & 0xff] & 0x0000ff00) ^
          (VAR_0[(VAR_6 ) & 0xff] & 0x000000ff);
         VAR_2[13] = VAR_2[ 5] ^ VAR_2[12];
         VAR_2[14] = VAR_2[ 6] ^ VAR_2[13];
         VAR_2[15] = VAR_2[ 7] ^ VAR_2[14];

   VAR_2 += 8;
        }
 }
 return 0;
}
