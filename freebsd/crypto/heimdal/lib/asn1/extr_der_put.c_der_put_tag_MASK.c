
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Der_type ;
typedef int Der_class ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int) ;

int
FUNC_1 (unsigned char *VAR_1, size_t VAR_2, Der_class VAR_3, Der_type VAR_4,
      unsigned int VAR_5, size_t *VAR_6)
{
    if (VAR_5 <= 30) {
 if (VAR_2 < 1)
     return VAR_0;
 *VAR_1 = FUNC_0(VAR_3, VAR_4, VAR_5);
 *VAR_6 = 1;
    } else {
 size_t VAR_7 = 0;
 unsigned int VAR_8 = 0;

 do {
     if (VAR_2 < 1)
  return VAR_0;
     *VAR_1-- = VAR_5 % 128 | VAR_8;
     VAR_2--;
     VAR_7++;
     VAR_5 /= 128;
     VAR_8 = 0x80;
 } while(VAR_5 > 0);
 if (VAR_2 < 1)
     return VAR_0;
 *VAR_1-- = FUNC_0(VAR_3, VAR_4, 0x1f);
 VAR_7++;
 *VAR_6 = VAR_7;
    }
    return 0;
}
