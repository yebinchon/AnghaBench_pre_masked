
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;
 int VAR_0 ;

void
FUNC_3(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3)
{
    int VAR_4 = 0, VAR_5 = VAR_3;

    if(!VAR_2 || VAR_3 <= 0)
        return;

    FUNC_0((VAR_1, ": RESP"));
    while (VAR_5 > 0) {
        VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_5);
        FUNC_1(VAR_4);
        VAR_2 += VAR_4;
        VAR_5 -= VAR_4;
    }

    return;

trunc:
    FUNC_0((VAR_1, "%s", VAR_0));
}
