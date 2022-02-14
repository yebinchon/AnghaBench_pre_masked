
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const**,int *) ;

int
FUNC_1(const char *VAR_1, uint32_t *VAR_2, size_t *VAR_3)
{
    const unsigned char *VAR_4;
    size_t VAR_5 = 0;
    int VAR_6;

    for (VAR_4 = (const unsigned char *)VAR_1; *VAR_4 != '\0'; ++VAR_4) {
 uint32_t VAR_7;

 VAR_6 = FUNC_0(&VAR_4, &VAR_7);
 if (VAR_6)
     return VAR_6;

 if (VAR_2) {
     if (VAR_5 >= *VAR_3)
  return VAR_0;
     VAR_2[VAR_5] = VAR_7;
 }
 VAR_5++;
    }
    *VAR_3 = VAR_5;
    return 0;
}
