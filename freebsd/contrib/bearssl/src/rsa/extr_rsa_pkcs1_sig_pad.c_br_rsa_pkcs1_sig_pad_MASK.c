
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (unsigned char*,int,size_t) ;

uint32_t
FUNC_2(const unsigned char *VAR_0,
 const unsigned char *VAR_1, size_t VAR_2,
 uint32_t VAR_3, unsigned char *VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 VAR_7 = (VAR_3 + 7) >> 3;

 if (VAR_0 == ((void*)0)) {
  if (VAR_7 < VAR_2 + 11) {
   return 0;
  }
  VAR_4[0] = 0x00;
  VAR_4[1] = 0x01;
  VAR_5 = VAR_7 - VAR_2;
  FUNC_1(VAR_4 + 2, 0xFF, VAR_5 - 3);
  VAR_4[VAR_5 - 1] = 0x00;
 } else {
  VAR_6 = VAR_0[0];





  if (VAR_7 < (VAR_6 + VAR_2 + 21)) {
   return 0;
  }
  VAR_4[0] = 0x00;
  VAR_4[1] = 0x01;
  VAR_5 = VAR_7 - VAR_6 - VAR_2 - 11;
  FUNC_1(VAR_4 + 2, 0xFF, VAR_5 - 2);
  VAR_4[VAR_5] = 0x00;
  VAR_4[VAR_5 + 1] = 0x30;
  VAR_4[VAR_5 + 2] = VAR_6 + VAR_2 + 8;
  VAR_4[VAR_5 + 3] = 0x30;
  VAR_4[VAR_5 + 4] = VAR_6 + 4;
  VAR_4[VAR_5 + 5] = 0x06;
  FUNC_0(VAR_4 + VAR_5 + 6, VAR_0, VAR_6 + 1);
  VAR_5 += VAR_6 + 7;
  VAR_4[VAR_5 ++] = 0x05;
  VAR_4[VAR_5 ++] = 0x00;
  VAR_4[VAR_5 ++] = 0x04;
  VAR_4[VAR_5 ++] = VAR_2;
 }
 FUNC_0(VAR_4 + VAR_5, VAR_1, VAR_2);
 return 1;
}
