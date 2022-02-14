
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
typedef int netdissect_options ;





 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__ const*) ;
 scalar_t__* FUNC_2 (int *,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_1,
             const u_char *VAR_2, u_int VAR_3, int VAR_4)
{
    u_int VAR_5, VAR_6;
    const u_char *VAR_7, *VAR_8;
    uint8_t VAR_9, VAR_10;

    VAR_5 = 0;
    while (VAR_5 < VAR_3) {
        if (VAR_5 + 2 > VAR_3)
            return -1;
        VAR_7 = VAR_2 + VAR_5;
        VAR_9 = (uint8_t)VAR_7[0];
        VAR_10 = (uint8_t)VAR_7[1];
        VAR_8 = VAR_7 + 2;

        FUNC_0((VAR_1, "\n"));
        for (VAR_6 = VAR_4; VAR_6 > 0; VAR_6--)
            FUNC_0((VAR_1, "\t"));

        FUNC_0((VAR_1, "%s", FUNC_3(VAR_0, "Unknown", VAR_9)));
        FUNC_0((VAR_1," (%u)", VAR_10 + 2 ));
        if (VAR_5 + 2 + VAR_10 > VAR_3)
            return -1;

        switch (VAR_9) {
        case 130:
        case 128: {
            if (VAR_10 < 4 || VAR_10 % 4 != 0) {
                return -1;
            }
            for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6 += 4)
                FUNC_0((VAR_1, " %s", FUNC_1(VAR_1, VAR_8 + VAR_6)));
        }
            break;
        case 129: {
            const u_char *VAR_11 = VAR_8;
            while (VAR_11 < VAR_8 + VAR_10) {
                FUNC_0((VAR_1, " "));
                if ((VAR_11 = FUNC_2(VAR_1, VAR_11, VAR_8 + VAR_10)) == ((void*)0))
                    return -1;
            }
        }
            break;
        }

        VAR_5 += 2 + VAR_10;
    }
    return 0;
}
