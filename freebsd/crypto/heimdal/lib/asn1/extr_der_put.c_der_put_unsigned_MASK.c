
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0 (unsigned char *VAR_1, size_t VAR_2, const unsigned *VAR_3, size_t *VAR_4)
{
    unsigned char *VAR_5 = VAR_1;
    unsigned VAR_6 = *VAR_3;

    if (VAR_6) {
 while (VAR_2 > 0 && VAR_6) {
     *VAR_1-- = VAR_6 % 256;
     VAR_6 /= 256;
     --VAR_2;
 }
 if (VAR_6 != 0)
     return VAR_0;
 else {
     if(VAR_1[1] >= 128) {
  if(VAR_2 < 1)
      return VAR_0;
  *VAR_1-- = 0;
     }
     *VAR_4 = VAR_5 - VAR_1;
     return 0;
 }
    } else if (VAR_2 < 1)
 return VAR_0;
    else {
 *VAR_1 = 0;
 *VAR_4 = 1;
 return 0;
    }
}
