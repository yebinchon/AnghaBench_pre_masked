
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;

uint32_t
FUNC_3(const unsigned char *VAR_0, size_t VAR_1,
 const unsigned char *VAR_2, size_t VAR_3,
 unsigned char *VAR_4)
{
 static const unsigned char VAR_5[] = {
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
 };

 unsigned char VAR_6[43];
 size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_1 < 11) {
  return 0;
 }
 if (FUNC_0(VAR_0, VAR_5, sizeof VAR_5) != 0) {
  return 0;
 }
 for (VAR_7 = sizeof VAR_5; VAR_7 < VAR_1; VAR_7 ++) {
  if (VAR_0[VAR_7] != 0xFF) {
   break;
  }
 }







 if (VAR_2 == ((void*)0)) {
  if (VAR_1 - VAR_7 != VAR_3 + 1 || VAR_0[VAR_7] != 0x00) {
   return 0;
  }
 } else {
  VAR_9 = VAR_2[0];
  VAR_10 = VAR_9 + 9;
  FUNC_2(VAR_6, 0, VAR_10);
  VAR_11 = VAR_1 - VAR_7 - VAR_3;
  if (VAR_11 == VAR_10) {
   VAR_8 = VAR_9 + 2;
  } else if (VAR_11 == VAR_10 + 2) {
   VAR_8 = VAR_9 + 4;
   VAR_10 = VAR_11;
   VAR_6[VAR_10 - 4] = 0x05;
  } else {
   return 0;
  }
  VAR_6[1] = 0x30;
  VAR_6[2] = VAR_8 + VAR_3 + 4;
  VAR_6[3] = 0x30;
  VAR_6[4] = VAR_8;
  VAR_6[5] = 0x06;
  FUNC_1(VAR_6 + 6, VAR_2, VAR_9 + 1);
  VAR_6[VAR_10 - 2] = 0x04;
  VAR_6[VAR_10 - 1] = VAR_3;
  if (FUNC_0(VAR_6, VAR_0 + VAR_7, VAR_10) != 0) {
   return 0;
  }
 }
 FUNC_1(VAR_4, VAR_0 + VAR_1 - VAR_3, VAR_3);
 return 1;
}
