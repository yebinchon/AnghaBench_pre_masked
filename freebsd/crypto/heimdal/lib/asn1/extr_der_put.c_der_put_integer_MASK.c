
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0 (unsigned char *VAR_1, size_t VAR_2, const int *VAR_3, size_t *VAR_4)
{
    unsigned char *VAR_5 = VAR_1;
    int VAR_6 = *VAR_3;

    if(VAR_6 >= 0) {
 do {
     if(VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = VAR_6 % 256;
     VAR_2--;
     VAR_6 /= 256;
 } while(VAR_6);
 if(VAR_1[1] >= 128) {
     if(VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = 0;
     VAR_2--;
 }
    } else {
 VAR_6 = ~VAR_6;
 do {
     if(VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = ~(VAR_6 % 256);
     VAR_2--;
     VAR_6 /= 256;
 } while(VAR_6);
 if(VAR_1[1] < 128) {
     if(VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = 0xff;
     VAR_2--;
 }
    }
    *VAR_4 = VAR_5 - VAR_1;
    return 0;
}
