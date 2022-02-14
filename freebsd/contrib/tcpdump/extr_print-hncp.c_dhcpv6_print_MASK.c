
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;





 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int const*) ;
 int VAR_1 ;
 int * FUNC_3 (int *,int const*,int const*) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_2,
             const u_char *VAR_3, u_int VAR_4, int VAR_5)
{
    u_int VAR_6, VAR_7;
    const u_char *VAR_8, *VAR_9;
    uint16_t VAR_10, VAR_11;

    VAR_6 = 0;
    while (VAR_6 < VAR_4) {
        if (VAR_6 + 4 > VAR_4)
            return -1;
        VAR_8 = VAR_3 + VAR_6;
        VAR_10 = FUNC_0(VAR_8);
        VAR_11 = FUNC_0(VAR_8 + 2);
        VAR_9 = VAR_8 + 4;

        FUNC_1((VAR_2, "\n"));
        for (VAR_7 = VAR_5; VAR_7 > 0; VAR_7--)
            FUNC_1((VAR_2, "\t"));

        FUNC_1((VAR_2, "%s", FUNC_4(VAR_0, "Unknown", VAR_10)));
        FUNC_1((VAR_2," (%u)", VAR_11 + 4 ));
        if (VAR_6 + 4 + VAR_11 > VAR_4)
            return -1;

        switch (VAR_10) {
            case 130:
            case 128: {
                if (VAR_11 % 16 != 0) {
                    FUNC_1((VAR_2, " %s", VAR_1));
                    return -1;
                }
                for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7 += 16)
                    FUNC_1((VAR_2, " %s", FUNC_2(VAR_2, VAR_9 + VAR_7)));
            }
                break;
            case 129: {
                const u_char *VAR_12 = VAR_9;
                while (VAR_12 < VAR_9 + VAR_11) {
                    FUNC_1((VAR_2, " "));
                    if ((VAR_12 = FUNC_3(VAR_2, VAR_12, VAR_9 + VAR_11)) == ((void*)0))
                        return -1;
                }
            }
                break;
        }

        VAR_6 += 4 + VAR_11;
    }
    return 0;
}
