
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(netdissect_options *VAR_1, register const u_char *VAR_2, int VAR_3, const u_char **VAR_4)
{
    int VAR_5;
    u_char VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    if (VAR_3 == 0)
        goto trunc;
    FUNC_0(*VAR_2);
    VAR_9 = 0;
    VAR_8 = 0;
    if (*VAR_2 == '-') {
        VAR_8 = 1;
        VAR_2++;
        VAR_3--;
    }
    VAR_5 = 0;
    VAR_7 = 0;

    for (;;) {
        if (VAR_3 == 0)
            goto trunc;
        FUNC_0(*VAR_2);
        VAR_6 = *VAR_2;
        if (!(VAR_6 >= '0' && VAR_6 <= '9')) {
            if (!VAR_7) {
                VAR_2++;
                goto invalid;
            }
            break;
        }
        VAR_6 -= '0';
        if (VAR_5 > (VAR_0 / 10)) {

            VAR_9 = 1;
        } else {
            VAR_5 *= 10;
            if (VAR_5 == ((VAR_0 / 10) * 10) && VAR_6 > (VAR_0 % 10)) {

                VAR_9 = 1;
            } else
                VAR_5 += VAR_6;
        }
        VAR_2++;
        VAR_3--;
        VAR_7 = 1;
    }





    if (*VAR_2 != '\r') {
        VAR_2++;
        goto invalid;
    }
    VAR_2++;
    VAR_3--;
    if (VAR_3 == 0)
        goto trunc;
    FUNC_0(*VAR_2);
    if (*VAR_2 != '\n') {
        VAR_2++;
        goto invalid;
    }
    VAR_2++;
    VAR_3--;
    *VAR_4 = VAR_2;
    if (VAR_8) {

        if (VAR_9 || VAR_5 != 1)
            return (-4);
        VAR_5 = -1;
    }
    return (VAR_9 ? -3 : VAR_5);

trunc:
    *VAR_4 = VAR_2;
    return (-2);

invalid:
    *VAR_4 = VAR_2;
    return (-5);
}
