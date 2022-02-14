
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

int
FUNC_0(const uint32_t *VAR_3, size_t VAR_4, char *VAR_5, size_t *VAR_6)
{
    uint32_t VAR_7;
    size_t VAR_8, VAR_9, VAR_10;

    for (VAR_10 = 0, VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
 VAR_7 = VAR_3[VAR_8];

 if (VAR_7 < 0x80) {
     VAR_9 = 1;
 } else if (VAR_7 < 0x800) {
     VAR_9 = 2;
 } else if (VAR_7 < 0x10000) {
     VAR_9 = 3;
 } else if (VAR_7 <= 0x10FFFF) {
     VAR_9 = 4;
 } else
     return VAR_0;

 VAR_10 += VAR_9;

 if (VAR_5) {
     if (VAR_10 >= *VAR_6)
  return VAR_1;

     switch(VAR_9) {
     case 4:
  VAR_5[3] = (VAR_7 | 0x80) & 0xbf;
  VAR_7 = VAR_7 >> 6;
     case 3:
  VAR_5[2] = (VAR_7 | 0x80) & 0xbf;
  VAR_7 = VAR_7 >> 6;
     case 2:
  VAR_5[1] = (VAR_7 | 0x80) & 0xbf;
  VAR_7 = VAR_7 >> 6;
     case 1:
  VAR_5[0] = VAR_7 | VAR_2[VAR_9 - 1];
     }
 }
 VAR_5 += VAR_9;
    }
    if (VAR_5) {
 if (VAR_10 + 1 >= *VAR_6)
     return VAR_1;
 *VAR_5 = '\0';
    }
    *VAR_6 = VAR_10;
    return 0;
}
