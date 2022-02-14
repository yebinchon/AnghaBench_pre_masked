
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;
 size_t FUNC_3 (char const*) ;

size_t
FUNC_4(void *VAR_2, const void *VAR_3, size_t VAR_4,
 const char *VAR_5, unsigned VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 unsigned char *VAR_11;
 size_t VAR_12;
 int VAR_13, VAR_14;

 VAR_8 = FUNC_3(VAR_5);


 if ((VAR_6 & VAR_1) != 0) {
  VAR_9 = (VAR_4 + 47) / 48;
 } else {
  VAR_9 = (VAR_4 + 56) / 57;
 }
 VAR_7 = (VAR_8 << 1) + 30 + (((VAR_4 + 2) / 3) << 2)
  + VAR_9 + 2;
 if ((VAR_6 & VAR_0) != 0) {
  VAR_7 += VAR_9 + 2;
 }

 if (VAR_2 == ((void*)0)) {
  return VAR_7;
 }

 VAR_10 = VAR_2;







 VAR_11 = (unsigned char *)VAR_10 + VAR_7 - VAR_4;
 FUNC_2(VAR_11, VAR_3, VAR_4);

 FUNC_1(VAR_10, "-----BEGIN ", 11);
 VAR_10 += 11;
 FUNC_1(VAR_10, VAR_5, VAR_8);
 VAR_10 += VAR_8;
 FUNC_1(VAR_10, "-----", 5);
 VAR_10 += 5;
 if ((VAR_6 & VAR_0) != 0) {
  *VAR_10 ++ = 0x0D;
 }
 *VAR_10 ++ = 0x0A;

 VAR_13 = 0;
 VAR_14 = (VAR_6 & VAR_1) != 0 ? 16 : 19;
 for (VAR_12 = 0; (VAR_12 + 2) < VAR_4; VAR_12 += 3) {
  uint32_t VAR_15;

  VAR_15 = ((uint32_t)VAR_11[VAR_12] << 16)
   | ((uint32_t)VAR_11[VAR_12 + 1] << 8)
   | (uint32_t)VAR_11[VAR_12 + 2];
  *VAR_10 ++ = FUNC_0(VAR_15 >> 18);
  *VAR_10 ++ = FUNC_0((VAR_15 >> 12) & 0x3F);
  *VAR_10 ++ = FUNC_0((VAR_15 >> 6) & 0x3F);
  *VAR_10 ++ = FUNC_0(VAR_15 & 0x3F);
  if (++ VAR_13 == VAR_14) {
   VAR_13 = 0;
   if ((VAR_6 & VAR_0) != 0) {
    *VAR_10 ++ = 0x0D;
   }
   *VAR_10 ++ = 0x0A;
  }
 }
 if (VAR_12 < VAR_4) {
  uint32_t VAR_16;

  VAR_16 = (uint32_t)VAR_11[VAR_12] << 16;
  if (VAR_12 + 1 < VAR_4) {
   VAR_16 |= (uint32_t)VAR_11[VAR_12 + 1] << 8;
  }
  *VAR_10 ++ = FUNC_0(VAR_16 >> 18);
  *VAR_10 ++ = FUNC_0((VAR_16 >> 12) & 0x3F);
  if (VAR_12 + 1 < VAR_4) {
   *VAR_10 ++ = FUNC_0((VAR_16 >> 6) & 0x3F);
  } else {
   *VAR_10 ++ = 0x3D;
  }
  *VAR_10 ++ = 0x3D;
  VAR_13 ++;
 }
 if (VAR_13 != 0) {
  if ((VAR_6 & VAR_0) != 0) {
   *VAR_10 ++ = 0x0D;
  }
  *VAR_10 ++ = 0x0A;
 }

 FUNC_1(VAR_10, "-----END ", 9);
 VAR_10 += 9;
 FUNC_1(VAR_10, VAR_5, VAR_8);
 VAR_10 += VAR_8;
 FUNC_1(VAR_10, "-----", 5);
 VAR_10 += 5;
 if ((VAR_6 & VAR_0) != 0) {
  *VAR_10 ++ = 0x0D;
 }
 *VAR_10 ++ = 0x0A;


 *VAR_10 ++ = 0x00;

 return VAR_7;
}
