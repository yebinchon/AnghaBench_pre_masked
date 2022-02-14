
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0,
                const u_char *VAR_1, u_int VAR_2, int VAR_3)
{
    u_int VAR_4 = 0;
    while (VAR_4 < VAR_2) {
        u_int VAR_5 = VAR_1[VAR_4++];
        if (VAR_5 == 0)
            return (int)VAR_4;
        if (VAR_4 > 1 && VAR_3)
            FUNC_1(VAR_0, '.');
        if (VAR_4+VAR_5 > VAR_2) {
            if (VAR_3)
                FUNC_2(VAR_0, VAR_1+VAR_4, VAR_2-VAR_4);
            break;
        }
        if (VAR_3)
            FUNC_2(VAR_0, VAR_1+VAR_4, VAR_5);
        VAR_4 += VAR_5;
    }
    if (VAR_3)
        FUNC_0((VAR_0, "[|DNS]"));
    return -1;
}
