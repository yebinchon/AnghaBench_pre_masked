
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;

size_t
FUNC_2(void *VAR_0, size_t VAR_1)
{
 unsigned char *VAR_2, *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned char VAR_9[254];

 VAR_2 = VAR_0;
 if (VAR_1 < 8) {
  return 0;
 }




 if (VAR_2[0] != 0x30) {
  return 0;
 }







 VAR_5 = VAR_2[1];
 if (VAR_5 > 0x80) {
  if (VAR_5 != 0x81) {
   return 0;
  }
  VAR_5 = VAR_2[2];
  if (VAR_5 != VAR_1 - 3) {
   return 0;
  }
  VAR_8 = 3;
 } else {
  if (VAR_5 != VAR_1 - 2) {
   return 0;
  }
  VAR_8 = 2;
 }




 if (VAR_2[VAR_8 ++] != 0x02) {
  return 0;
 }
 VAR_6 = VAR_2[VAR_8 ++];
 if (VAR_6 >= 0x80) {
  return 0;
 }
 VAR_3 = VAR_2 + VAR_8;
 VAR_8 += VAR_6;




 if (VAR_8 + 2 > VAR_1) {
  return 0;
 }
 if (VAR_2[VAR_8 ++] != 0x02) {
  return 0;
 }
 VAR_7 = VAR_2[VAR_8 ++];
 if (VAR_7 >= 0x80 || VAR_7 != VAR_1 - VAR_8) {
  return 0;
 }
 VAR_4 = VAR_2 + VAR_8;




 while (VAR_6 > 0 && *VAR_3 == 0) {
  VAR_6 --;
  VAR_3 ++;
 }
 while (VAR_7 > 0 && *VAR_4 == 0) {
  VAR_7 --;
  VAR_4 ++;
 }






 VAR_5 = VAR_6 > VAR_7 ? VAR_6 : VAR_7;
 VAR_1 = VAR_5 << 1;
 FUNC_1(VAR_9, 0, VAR_1);
 FUNC_0(VAR_9 + VAR_5 - VAR_6, VAR_3, VAR_6);
 FUNC_0(VAR_9 + VAR_1 - VAR_7, VAR_4, VAR_7);
 FUNC_0(VAR_0, VAR_9, VAR_1);
 return VAR_1;
}
