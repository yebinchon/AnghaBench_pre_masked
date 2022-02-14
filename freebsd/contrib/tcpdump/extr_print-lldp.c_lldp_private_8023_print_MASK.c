
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int const FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;




 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*,int const) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_10,
                        const u_char *VAR_11, u_int VAR_12)
{
    int VAR_13, VAR_14 = VAR_0;

    if (VAR_12 < 4) {
        return VAR_14;
    }
    VAR_13 = *(VAR_11+3);

    FUNC_2((VAR_10, "\n\t  %s Subtype (%u)",
           FUNC_4(VAR_3, "unknown", VAR_13),
           VAR_13));

    switch (VAR_13) {
    case 130:
        if (VAR_12 < 9) {
            return VAR_14;
        }
        FUNC_2((VAR_10, "\n\t    autonegotiation [%s] (0x%02x)",
               FUNC_3(VAR_2, "none", *(VAR_11+4)),
               *(VAR_11 + 4)));
        FUNC_2((VAR_10, "\n\t    PMD autoneg capability [%s] (0x%04x)",
               FUNC_3(VAR_9,"unknown", FUNC_0(VAR_11+5)),
               FUNC_0(VAR_11 + 5)));
        FUNC_2((VAR_10, "\n\t    MAU type %s (0x%04x)",
               FUNC_4(VAR_5, "unknown", FUNC_0(VAR_11+7)),
               FUNC_0(VAR_11 + 7)));
        break;

    case 129:
        if (VAR_12 < 7) {
            return VAR_14;
        }
        FUNC_2((VAR_10, "\n\t    MDI power support [%s], power pair %s, power class %s",
               FUNC_3(VAR_8, "none", *(VAR_11+4)),
               FUNC_4(VAR_7, "unknown", *(VAR_11+5)),
               FUNC_4(VAR_6, "unknown", *(VAR_11 + 6))));
        break;

    case 131:
        if (VAR_12 < 9) {
            return VAR_14;
        }
        FUNC_2((VAR_10, "\n\t    aggregation status [%s], aggregation port ID %u",
               FUNC_3(VAR_4, "none", *(VAR_11+4)),
               FUNC_1(VAR_11 + 5)));
        break;

    case 128:
        if (VAR_12 < 6) {
            return VAR_14;
        }
        FUNC_2((VAR_10, "\n\t    MTU size %u", FUNC_0(VAR_11 + 4)));
        break;

    default:
        VAR_14 = VAR_1;
        break;
    }

    return VAR_14;
}
