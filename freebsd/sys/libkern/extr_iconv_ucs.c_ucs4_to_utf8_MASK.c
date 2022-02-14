
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;



__attribute__((used)) static u_char *
FUNC_0(uint32_t VAR_0, char *VAR_1, size_t *VAR_2, size_t VAR_3)
{
 u_char VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;




 if (VAR_0 < 0x80) {
  VAR_7 = 1;
  VAR_4 = 0;
 } else if (VAR_0 < 0x800) {
  VAR_7 = 2;
  VAR_4 = 0xc0;
 } else if (VAR_0 < 0x10000) {
  VAR_7 = 3;
  VAR_4 = 0xe0;
 } else if (VAR_0 < 0x200000) {
  VAR_7 = 4;
  VAR_4 = 0xf0;
 } else {
  return (((void*)0));
 }

 if (VAR_3 < VAR_7)
  return (((void*)0));




 VAR_5 = VAR_1;
 for (VAR_6 = VAR_7 - 1 ; VAR_6 >= 1 ; VAR_6--) {

  *(VAR_5 + VAR_6) = (VAR_0 & 0x3f) | 0x80;
  VAR_0 >>= 6;
 }
 *VAR_5 = VAR_0 | VAR_4;

 *VAR_2 = VAR_7;

 return (VAR_5);
}
