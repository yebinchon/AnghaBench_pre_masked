
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0 (unsigned char *VAR_1, size_t VAR_2, size_t VAR_3, size_t *VAR_4)
{
    if (VAR_2 < 1)
 return VAR_0;

    if (VAR_3 < 128) {
 *VAR_1 = VAR_3;
 *VAR_4 = 1;
    } else {
 size_t VAR_5 = 0;

 while(VAR_3 > 0) {
     if(VAR_2 < 2)
  return VAR_0;
     *VAR_1-- = VAR_3 % 256;
     VAR_3 /= 256;
     VAR_2--;
     VAR_5++;
 }
 *VAR_1 = 0x80 | VAR_5;
 if(VAR_4)
     *VAR_4 = VAR_5 + 1;
    }
    return 0;
}
