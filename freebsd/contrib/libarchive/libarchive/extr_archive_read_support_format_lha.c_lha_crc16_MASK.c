
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static uint16_t
FUNC_0(uint16_t VAR_2, const void *VAR_3, size_t VAR_4)
{
 const unsigned char *VAR_5 = (const unsigned char *)VAR_3;
 const uint16_t *VAR_6;
 const union {
  uint32_t i;
  char c[4];
 } VAR_7 = { 0x01020304 };

 if (VAR_4 == 0)
  return VAR_2;


 if (((uintptr_t)VAR_5) & (uintptr_t)0x1) {
  VAR_2 = (VAR_2 >> 8) ^ VAR_1[0][(VAR_2 ^ *VAR_5++) & 0xff];
  VAR_4--;
 }
 VAR_6 = (const uint16_t *)VAR_5;





 for (;VAR_4 >= 8; VAR_4 -= 8) {
  do { if(VAR_7.c[0] == 1) { VAR_2 ^= __builtin_bswap16(*VAR_6); VAR_6++; } else VAR_2 ^= *VAR_6++; VAR_2 = VAR_1[1][VAR_2 & 0xff] ^ VAR_1[0][VAR_2 >> 8];} while (0);
  do { if(VAR_7.c[0] == 1) { VAR_2 ^= FUNC_0(*VAR_6); VAR_6++; } else VAR_2 ^= *VAR_6++; VAR_2 = VAR_1[1][VAR_2 & 0xff] ^ VAR_1[0][VAR_2 >> 8];} while (0);
  do { if(VAR_7.c[0] == 1) { VAR_2 ^= FUNC_0(*VAR_6); VAR_6++; } else VAR_2 ^= *VAR_6++; VAR_2 = VAR_1[1][VAR_2 & 0xff] ^ VAR_1[0][VAR_2 >> 8];} while (0);
  do { if(VAR_7.c[0] == 1) { VAR_2 ^= FUNC_0(*VAR_6); VAR_6++; } else VAR_2 ^= *VAR_6++; VAR_2 = VAR_1[1][VAR_2 & 0xff] ^ VAR_1[0][VAR_2 >> 8];} while (0);


 }

 VAR_5 = (const unsigned char *)VAR_6;
 for (;VAR_4; VAR_4--) {
  VAR_2 = (VAR_2 >> 8) ^ VAR_1[0][(VAR_2 ^ *VAR_5++) & 0xff];
 }
 return VAR_2;
}
