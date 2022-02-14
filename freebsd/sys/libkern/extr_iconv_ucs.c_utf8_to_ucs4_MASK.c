
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const char *VAR_0, size_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4 = 0;
 uint32_t VAR_5 = 0;




 if ((*VAR_0 & 0x80) == 0) {





  VAR_4 = 1;

  VAR_5 = *VAR_0 & 0x7f;
 } else if ((*VAR_0 & 0xe0) == 0xc0) {





  VAR_4 = 2;

  VAR_5 = *VAR_0 & 0x1f;
 } else if ((*VAR_0 & 0xf0) == 0xe0) {





  VAR_4 = 3;

  VAR_5 = *VAR_0 & 0x0f;
 } else if ((*VAR_0 & 0xf8) == 0xf0) {





  VAR_4 = 4;

  VAR_5 = *VAR_0 & 0x07;
 } else {

  return (0);
 }

 if (VAR_2 < VAR_4)
  return (0);




 for (VAR_3 = 1 ; VAR_3 < VAR_4 ; VAR_3++) {
  if ((*(VAR_0 + VAR_3) & 0xc0) != 0x80) {

   return (0);
  }

  VAR_5 <<= 6;
  VAR_5 |= *(VAR_0 + VAR_3) & 0x3f;
 }

 *VAR_1 = VAR_4;
 return (VAR_5);
}
