
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int* VAR_1 ;

int
FUNC_0(const uint16_t *VAR_2, size_t VAR_3, char *VAR_4, size_t *VAR_5)
{
    uint16_t VAR_6;
    size_t VAR_7, VAR_8, VAR_9;

    for (VAR_9 = 0, VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
 VAR_6 = VAR_2[VAR_7];

 if (VAR_6 < 0x80) {
     VAR_8 = 1;
 } else if (VAR_6 < 0x800) {
     VAR_8 = 2;
 } else
     VAR_8 = 3;

 VAR_9 += VAR_8;

 if (VAR_4) {
     if (VAR_9 >= *VAR_5)
  return VAR_0;

     switch(VAR_8) {
     case 3:
  VAR_4[2] = (VAR_6 | 0x80) & 0xbf;
  VAR_6 = VAR_6 >> 6;
     case 2:
  VAR_4[1] = (VAR_6 | 0x80) & 0xbf;
  VAR_6 = VAR_6 >> 6;
     case 1:
  VAR_4[0] = VAR_6 | VAR_1[VAR_8 - 1];
     }
     VAR_4 += VAR_8;
 }
    }
    if (VAR_4) {
 if (VAR_9 >= *VAR_5)
     return VAR_0;
 *VAR_4 = '\0';
    }
    *VAR_5 = VAR_9;
    return 0;
}
