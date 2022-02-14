
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,int const) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5;
    static char VAR_6[sizeof("xxxx.xxxx.xxxx.yy-zz")];
    char *VAR_7 = VAR_6;
    int VAR_8;

    VAR_8 = VAR_2;
    if (VAR_8 > VAR_4)
        VAR_8 = VAR_4;
    for (VAR_5 = 1; VAR_5 <= VAR_8; VAR_5++) {
        FUNC_0(VAR_7, sizeof(VAR_6) - (VAR_7 - VAR_6), "%02x", *VAR_3++);
 VAR_7 += FUNC_1(VAR_7);
 if (VAR_5 == 2 || VAR_5 == 4)
     *VAR_7++ = '.';
 }
    if (VAR_4 >= VAR_1) {
        FUNC_0(VAR_7, sizeof(VAR_6) - (VAR_7 - VAR_6), ".%02x", *VAR_3++);
 VAR_7 += FUNC_1(VAR_7);
    }
    if (VAR_4 == VAR_0)
        FUNC_0(VAR_7, sizeof(VAR_6) - (VAR_7 - VAR_6), "-%02x", *VAR_3);
    return (VAR_6);
}
