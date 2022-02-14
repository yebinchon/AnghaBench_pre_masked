
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_e ;


 int VAR_0 ;
 char* FUNC_0 (double,int,int*,int*,char*) ;

__attribute__((used)) static char *FUNC_1(double VAR_1, int VAR_2, char *VAR_3, boolean_e VAR_4)
{
    int VAR_5, VAR_6;
    register char *VAR_7, *VAR_8;
    register int VAR_9;
    char VAR_10[VAR_0];

    VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_5, VAR_10);
    VAR_8 = VAR_3;
    if (VAR_5)
        *VAR_8++ = '-';
    for (VAR_9 = VAR_2 - 1; VAR_9 > 0 && VAR_7[VAR_9] == '0'; VAR_9--)
        VAR_2--;
    if ((VAR_6 >= 0 && VAR_6 - VAR_2 > 4)
        || (VAR_6 < 0 && VAR_6 < -3)) {
        VAR_6--;
        *VAR_8++ = *VAR_7++;
        *VAR_8++ = '.';
        for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++)
            *VAR_8++ = *VAR_7++;
        *VAR_8++ = 'e';
        if (VAR_6 < 0) {
            VAR_6 = -VAR_6;
            *VAR_8++ = '-';
        }
        else
            *VAR_8++ = '+';
        if (VAR_6 / 100 > 0)
            *VAR_8++ = VAR_6 / 100 + '0';
        if (VAR_6 / 10 > 0)
            *VAR_8++ = (VAR_6 % 100) / 10 + '0';
        *VAR_8++ = VAR_6 % 10 + '0';
    }
    else {
        if (VAR_6 <= 0) {
            if (*VAR_7 != '0')
                *VAR_8++ = '.';
            while (VAR_6 < 0) {
                VAR_6++;
                *VAR_8++ = '0';
            }
        }
        for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {
            *VAR_8++ = *VAR_7++;
            if (VAR_9 == VAR_6)
                *VAR_8++ = '.';
        }
        if (VAR_2 < VAR_6) {
            while (VAR_2++ < VAR_6)
                *VAR_8++ = '0';
            *VAR_8++ = '.';
        }
    }
    if (VAR_8[-1] == '.' && !VAR_4)
        VAR_8--;
    *VAR_8 = '\0';
    return (VAR_3);
}
