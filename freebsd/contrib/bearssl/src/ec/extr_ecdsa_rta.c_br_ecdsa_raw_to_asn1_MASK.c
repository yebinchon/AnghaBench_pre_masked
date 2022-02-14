
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (void*,unsigned char*,size_t) ;

size_t
FUNC_2(void *VAR_0, size_t VAR_1)
{






 unsigned char *VAR_2;
 size_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned char VAR_8[257];

 VAR_2 = VAR_0;
 if ((VAR_1 & 1) != 0) {
  return 0;
 }




 VAR_3 = VAR_1 >> 1;
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_2 + VAR_3, VAR_3);
 if (VAR_4 > 125 || VAR_5 > 125) {
  return 0;
 }




 VAR_8[0] = 0x30;
 VAR_6 = VAR_4 + VAR_5 + 4;
 if (VAR_6 >= 0x80) {
  VAR_8[1] = 0x81;
  VAR_8[2] = VAR_6;
  VAR_7 = 3;
 } else {
  VAR_8[1] = VAR_6;
  VAR_7 = 2;
 }




 VAR_8[VAR_7 ++] = 0x02;
 VAR_8[VAR_7 ++] = VAR_4;
 if (VAR_4 > VAR_3) {
  VAR_8[VAR_7] = 0x00;
  FUNC_1(VAR_8 + VAR_7 + 1, VAR_2, VAR_3);
 } else {
  FUNC_1(VAR_8 + VAR_7, VAR_2 + VAR_3 - VAR_4, VAR_4);
 }
 VAR_7 += VAR_4;




 VAR_8[VAR_7 ++] = 0x02;
 VAR_8[VAR_7 ++] = VAR_5;
 if (VAR_5 > VAR_3) {
  VAR_8[VAR_7] = 0x00;
  FUNC_1(VAR_8 + VAR_7 + 1, VAR_2 + VAR_3, VAR_3);
 } else {
  FUNC_1(VAR_8 + VAR_7, VAR_2 + VAR_1 - VAR_5, VAR_5);
 }
 VAR_7 += VAR_5;




 FUNC_1(VAR_0, VAR_8, VAR_7);
 return VAR_7;
}
