
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int*,int const*,int) ;

uint32_t
FUNC_4(const void *VAR_0,
 const void *VAR_1, uint32_t VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 uint32_t VAR_6[8], VAR_7[3];
 size_t VAR_8;

 static const uint32_t VAR_9[] = {
  0x61707865, 0x3320646e, 0x79622d32, 0x6b206574
 };

 VAR_5 = VAR_3;
 for (VAR_8 = 0; VAR_8 < 8; VAR_8 ++) {
  VAR_6[VAR_8] = FUNC_1((const unsigned char *)VAR_0 + (VAR_8 << 2));
 }
 for (VAR_8 = 0; VAR_8 < 3; VAR_8 ++) {
  VAR_7[VAR_8] = FUNC_1((const unsigned char *)VAR_1 + (VAR_8 << 2));
 }
 while (VAR_4 > 0) {
  uint32_t VAR_10[16];
  int VAR_11;
  size_t VAR_12;
  unsigned char VAR_13[64];

  FUNC_3(&VAR_10[0], VAR_9, sizeof VAR_9);
  FUNC_3(&VAR_10[4], VAR_6, sizeof VAR_6);
  VAR_10[12] = VAR_2;
  FUNC_3(&VAR_10[13], VAR_7, sizeof VAR_7);
  for (VAR_11 = 0; VAR_11 < 10; VAR_11 ++) {
   do { VAR_10[0] += VAR_10[4]; VAR_10[12] ^= VAR_10[0]; VAR_10[12] = (VAR_10[12] << 16) | (VAR_10[12] >> 16); VAR_10[8] += VAR_10[12]; VAR_10[4] ^= VAR_10[8]; VAR_10[4] = (VAR_10[4] << 12) | (VAR_10[4] >> 20); VAR_10[0] += VAR_10[4]; VAR_10[12] ^= VAR_10[0]; VAR_10[12] = (VAR_10[12] << 8) | (VAR_10[12] >> 24); VAR_10[8] += VAR_10[12]; VAR_10[4] ^= VAR_10[8]; VAR_10[4] = (VAR_10[4] << 7) | (VAR_10[4] >> 25); } while (0);
   do { VAR_10[1] += VAR_10[5]; VAR_10[13] ^= VAR_10[1]; VAR_10[13] = (VAR_10[13] << 16) | (VAR_10[13] >> 16); VAR_10[9] += VAR_10[13]; VAR_10[5] ^= VAR_10[9]; VAR_10[5] = (VAR_10[5] << 12) | (VAR_10[5] >> 20); VAR_10[1] += VAR_10[5]; VAR_10[13] ^= VAR_10[1]; VAR_10[13] = (VAR_10[13] << 8) | (VAR_10[13] >> 24); VAR_10[9] += VAR_10[13]; VAR_10[5] ^= VAR_10[9]; VAR_10[5] = (VAR_10[5] << 7) | (VAR_10[5] >> 25); } while (0);
   do { VAR_10[2] += VAR_10[6]; VAR_10[14] ^= VAR_10[2]; VAR_10[14] = (VAR_10[14] << 16) | (VAR_10[14] >> 16); VAR_10[10] += VAR_10[14]; VAR_10[6] ^= VAR_10[10]; VAR_10[6] = (VAR_10[6] << 12) | (VAR_10[6] >> 20); VAR_10[2] += VAR_10[6]; VAR_10[14] ^= VAR_10[2]; VAR_10[14] = (VAR_10[14] << 8) | (VAR_10[14] >> 24); VAR_10[10] += VAR_10[14]; VAR_10[6] ^= VAR_10[10]; VAR_10[6] = (VAR_10[6] << 7) | (VAR_10[6] >> 25); } while (0);
   do { VAR_10[3] += VAR_10[7]; VAR_10[15] ^= VAR_10[3]; VAR_10[15] = (VAR_10[15] << 16) | (VAR_10[15] >> 16); VAR_10[11] += VAR_10[15]; VAR_10[7] ^= VAR_10[11]; VAR_10[7] = (VAR_10[7] << 12) | (VAR_10[7] >> 20); VAR_10[3] += VAR_10[7]; VAR_10[15] ^= VAR_10[3]; VAR_10[15] = (VAR_10[15] << 8) | (VAR_10[15] >> 24); VAR_10[11] += VAR_10[15]; VAR_10[7] ^= VAR_10[11]; VAR_10[7] = (VAR_10[7] << 7) | (VAR_10[7] >> 25); } while (0);
   do { VAR_10[0] += VAR_10[5]; VAR_10[15] ^= VAR_10[0]; VAR_10[15] = (VAR_10[15] << 16) | (VAR_10[15] >> 16); VAR_10[10] += VAR_10[15]; VAR_10[5] ^= VAR_10[10]; VAR_10[5] = (VAR_10[5] << 12) | (VAR_10[5] >> 20); VAR_10[0] += VAR_10[5]; VAR_10[15] ^= VAR_10[0]; VAR_10[15] = (VAR_10[15] << 8) | (VAR_10[15] >> 24); VAR_10[10] += VAR_10[15]; VAR_10[5] ^= VAR_10[10]; VAR_10[5] = (VAR_10[5] << 7) | (VAR_10[5] >> 25); } while (0);
   do { VAR_10[1] += VAR_10[6]; VAR_10[12] ^= VAR_10[1]; VAR_10[12] = (VAR_10[12] << 16) | (VAR_10[12] >> 16); VAR_10[11] += VAR_10[12]; VAR_10[6] ^= VAR_10[11]; VAR_10[6] = (VAR_10[6] << 12) | (VAR_10[6] >> 20); VAR_10[1] += VAR_10[6]; VAR_10[12] ^= VAR_10[1]; VAR_10[12] = (VAR_10[12] << 8) | (VAR_10[12] >> 24); VAR_10[11] += VAR_10[12]; VAR_10[6] ^= VAR_10[11]; VAR_10[6] = (VAR_10[6] << 7) | (VAR_10[6] >> 25); } while (0);
   do { VAR_10[2] += VAR_10[7]; VAR_10[13] ^= VAR_10[2]; VAR_10[13] = (VAR_10[13] << 16) | (VAR_10[13] >> 16); VAR_10[8] += VAR_10[13]; VAR_10[7] ^= VAR_10[8]; VAR_10[7] = (VAR_10[7] << 12) | (VAR_10[7] >> 20); VAR_10[2] += VAR_10[7]; VAR_10[13] ^= VAR_10[2]; VAR_10[13] = (VAR_10[13] << 8) | (VAR_10[13] >> 24); VAR_10[8] += VAR_10[13]; VAR_10[7] ^= VAR_10[8]; VAR_10[7] = (VAR_10[7] << 7) | (VAR_10[7] >> 25); } while (0);
   do { VAR_10[3] += VAR_10[4]; VAR_10[14] ^= VAR_10[3]; VAR_10[14] = (VAR_10[14] << 16) | (VAR_10[14] >> 16); VAR_10[9] += VAR_10[14]; VAR_10[4] ^= VAR_10[9]; VAR_10[4] = (VAR_10[4] << 12) | (VAR_10[4] >> 20); VAR_10[3] += VAR_10[4]; VAR_10[14] ^= VAR_10[3]; VAR_10[14] = (VAR_10[14] << 8) | (VAR_10[14] >> 24); VAR_10[9] += VAR_10[14]; VAR_10[4] ^= VAR_10[9]; VAR_10[4] = (VAR_10[4] << 7) | (VAR_10[4] >> 25); } while (0);



  }
  for (VAR_8 = 0; VAR_8 < 4; VAR_8 ++) {
   FUNC_2(&VAR_13[VAR_8 << 2], VAR_10[VAR_8] + VAR_9[VAR_8]);
  }
  for (VAR_8 = 4; VAR_8 < 12; VAR_8 ++) {
   FUNC_2(&VAR_13[VAR_8 << 2], VAR_10[VAR_8] + VAR_6[VAR_8 - 4]);
  }
  FUNC_2(&VAR_13[48], VAR_10[12] + VAR_2);
  for (VAR_8 = 13; VAR_8 < 16; VAR_8 ++) {
   FUNC_2(&VAR_13[VAR_8 << 2], VAR_10[VAR_8] + VAR_7[VAR_8 - 13]);
  }

  VAR_12 = VAR_4 < 64 ? VAR_4 : 64;
  for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8 ++) {
   VAR_5[VAR_8] ^= VAR_13[VAR_8];
  }
  VAR_5 += VAR_12;
  VAR_4 -= VAR_12;
  VAR_2 ++;
 }
 return VAR_2;
}
