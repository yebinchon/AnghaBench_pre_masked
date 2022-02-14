
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const**,int*) ;

int
FUNC_1(const char *VAR_2, uint16_t *VAR_3, size_t *VAR_4)
{
    const unsigned char *VAR_5;
    size_t VAR_6 = 0;
    int VAR_7;

    for (VAR_5 = (const unsigned char *)VAR_2; *VAR_5 != '\0'; ++VAR_5) {
 uint32_t VAR_8;

 VAR_7 = FUNC_0(&VAR_5, &VAR_8);
 if (VAR_7)
     return VAR_7;

 if (VAR_8 & 0xffff0000)
     return VAR_0;

 if (VAR_3) {
     if (VAR_6 >= *VAR_4)
  return VAR_1;
     VAR_3[VAR_6] = VAR_8;
 }
 VAR_6++;
    }
    *VAR_4 = VAR_6;
    return 0;
}
