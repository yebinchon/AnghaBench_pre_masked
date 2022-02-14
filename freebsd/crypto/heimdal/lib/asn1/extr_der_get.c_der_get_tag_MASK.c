
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Der_type ;
typedef scalar_t__ Der_class ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0 (const unsigned char *VAR_2, size_t VAR_3,
      Der_class *VAR_4, Der_type *VAR_5,
      unsigned int *VAR_6, size_t *VAR_7)
{
    size_t VAR_8 = 0;
    if (VAR_3 < 1)
 return VAR_1;
    *VAR_4 = (Der_class)(((*VAR_2) >> 6) & 0x03);
    *VAR_5 = (Der_type)(((*VAR_2) >> 5) & 0x01);
    *VAR_6 = (*VAR_2) & 0x1f;
    VAR_2++; VAR_3--; VAR_8++;
    if(*VAR_6 == 0x1f) {
 unsigned int VAR_9;
 unsigned int VAR_10;
 *VAR_6 = 0;
 do {
     if(VAR_3 < 1)
  return VAR_1;
     VAR_9 = *VAR_2 & 128;
     VAR_10 = *VAR_6 * 128 + (*VAR_2 % 128);

     if (VAR_10 < *VAR_6)
  return VAR_0;
     *VAR_6 = VAR_10;
     VAR_2++; VAR_3--; VAR_8++;
 } while(VAR_9);
    }
    if(VAR_7) *VAR_7 = VAR_8;
    return 0;
}
