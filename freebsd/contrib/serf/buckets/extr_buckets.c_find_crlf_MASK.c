
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char,int) ;

__attribute__((used)) static void FUNC_1(const char **VAR_3, apr_size_t *VAR_4, int *VAR_5)
{
    const char *VAR_6 = *VAR_3;
    const char *VAR_7 = VAR_6 + *VAR_4;

    while (VAR_6 < VAR_7) {
        const char *VAR_8 = FUNC_0(VAR_6, '\r', *VAR_4);

        if (VAR_8 == ((void*)0)) {
            break;
        }
        ++VAR_8;

        if (VAR_8 < VAR_7 && VAR_8[0] == '\n') {
            *VAR_4 -= VAR_8 + 1 - VAR_6;
            *VAR_3 = VAR_8 + 1;
            *VAR_5 = VAR_0;
            return;
        }
        if (VAR_8 == VAR_7) {
            *VAR_4 = 0;
            *VAR_3 = VAR_7;
            *VAR_5 = VAR_1;
            return;
        }


        *VAR_4 -= VAR_8 - VAR_6;
        VAR_6 = VAR_8;
    }

    *VAR_3 = VAR_6 + *VAR_4;
    *VAR_4 -= *VAR_3 - VAR_6;
    *VAR_5 = VAR_2;
}
