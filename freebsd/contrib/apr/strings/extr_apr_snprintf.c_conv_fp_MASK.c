
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_e ;
typedef int apr_size_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (double,int,int*,int*,char*) ;
 char* FUNC_1 (double,int,int*,int*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (int ,int,int*,char*,int*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *FUNC_6(register char VAR_3, register double VAR_4,
    boolean_e VAR_5, int VAR_6, int *VAR_7,
    char *VAR_8, apr_size_t *VAR_9)
{
    register char *VAR_10 = VAR_8;
    register char *VAR_11;
    int VAR_12;
    char VAR_13[VAR_2];

    if (VAR_3 == 'f')
        VAR_11 = FUNC_1(VAR_4, VAR_6, &VAR_12, VAR_7, VAR_13);
    else
        VAR_11 = FUNC_0(VAR_4, VAR_6 + 1, &VAR_12, VAR_7, VAR_13);




    if (FUNC_2(*VAR_11)) {
        *VAR_9 = FUNC_5(VAR_11);
        FUNC_4(VAR_8, VAR_11, *VAR_9 + 1);
        *VAR_7 = VAR_1;
        return (VAR_8);
    }

    if (VAR_3 == 'f') {
        if (VAR_12 <= 0) {
            *VAR_10++ = '0';
            if (VAR_6 > 0) {
                *VAR_10++ = '.';
                while (VAR_12++ < 0)
                    *VAR_10++ = '0';
            }
            else if (VAR_5)
                *VAR_10++ = '.';
        }
        else {
            while (VAR_12-- > 0)
                *VAR_10++ = *VAR_11++;
            if (VAR_6 > 0 || VAR_5)
                *VAR_10++ = '.';
        }
    }
    else {
        *VAR_10++ = *VAR_11++;
        if (VAR_6 > 0 || VAR_5)
            *VAR_10++ = '.';
    }




    while (*VAR_11)
        *VAR_10++ = *VAR_11++;

    if (VAR_3 != 'f') {
        char VAR_14[VAR_0];
        apr_size_t VAR_15;
        int VAR_16;

        *VAR_10++ = VAR_3;
        VAR_12--;
        if (VAR_12 != 0) {
            VAR_11 = FUNC_3((apr_int32_t) VAR_12, VAR_1, &VAR_16,
                        &VAR_14[VAR_0], &VAR_15);
            *VAR_10++ = VAR_16 ? '-' : '+';




            if (VAR_15 == 1)
                *VAR_10++ = '0';
            while (VAR_15--)
                *VAR_10++ = *VAR_11++;
        }
        else {
            *VAR_10++ = '+';
            *VAR_10++ = '0';
            *VAR_10++ = '0';
        }
    }

    *VAR_9 = VAR_10 - VAR_8;
    return (VAR_8);
}
