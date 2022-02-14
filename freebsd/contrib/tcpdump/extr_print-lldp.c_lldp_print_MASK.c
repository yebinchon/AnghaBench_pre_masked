
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int tlv ;
struct TYPE_14__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int const,int) ;





 int VAR_1 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*,int const*,int) ;
 char* FUNC_9 (TYPE_1__*,int const*,int) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int const*,int) ;
 int FUNC_12 (TYPE_1__*,int const*,int) ;
 int FUNC_13 (TYPE_1__*,int const*,int) ;
 int FUNC_14 (TYPE_1__*,int const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_16 (TYPE_1__*,int const*,int) ;
 int FUNC_17 (int ,char*,int) ;

void
FUNC_18(netdissect_options *VAR_7,
           register const u_char *VAR_8, register u_int VAR_9)
{
    uint8_t VAR_10;
    uint16_t VAR_11, VAR_12, VAR_13;
    u_int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    const u_char *VAR_19;
    char *VAR_20;

    VAR_19 = VAR_8;
    VAR_15 = VAR_9;

    FUNC_4((VAR_7, "LLDP, length %u", VAR_9));

    while (VAR_15 >= sizeof(VAR_11)) {

        FUNC_5(*VAR_19, sizeof(VAR_11));

        VAR_11 = FUNC_0(VAR_19);

        VAR_17 = FUNC_3(VAR_11);
        VAR_18 = FUNC_2(VAR_11);
        VAR_16 = VAR_0;

        VAR_15 -= sizeof(VAR_11);
        VAR_19 += sizeof(VAR_11);

        if (VAR_7->ndo_vflag) {
            FUNC_4((VAR_7, "\n\t%s TLV (%u), length %u",
                   FUNC_17(VAR_5, "Unknown", VAR_17),
                   VAR_17, VAR_18));
        }


        if (!VAR_17 || !VAR_18) {
            break;
        }

        FUNC_5(*VAR_19, VAR_18);
        if (VAR_15 < VAR_18) {
            goto trunc;
        }

        switch (VAR_17) {

        case 154:
            if (VAR_7->ndo_vflag) {
                if (VAR_18 < 2) {
                    goto trunc;
                }
                VAR_10 = *VAR_19;
                FUNC_4((VAR_7, "\n\t  Subtype %s (%u): ",
                       FUNC_17(VAR_3, "Unknown", VAR_10),
                       VAR_10));

                switch (VAR_10) {
                case 150:
                    if (VAR_18 < 1+6) {
                        goto trunc;
                    }
                    FUNC_4((VAR_7, "%s", FUNC_7(VAR_7, VAR_19 + 1)));
                    break;

                case 152:
                case 151:
                case 155:
                case 153:
                case 148:
                    FUNC_16(VAR_7, VAR_19 + 1, VAR_18 - 1);
                    break;

                case 149:
                    VAR_20 = FUNC_9(VAR_7, VAR_19+1, VAR_18-1);
                    if (VAR_20 == ((void*)0)) {
                        goto trunc;
                    }
                    FUNC_4((VAR_7, "%s", VAR_20));
                    break;

                default:
                    VAR_16 = VAR_1;
                    break;
                }
            }
            break;

        case 144:
            if (VAR_7->ndo_vflag) {
                if (VAR_18 < 2) {
                    goto trunc;
                }
                VAR_10 = *VAR_19;
                FUNC_4((VAR_7, "\n\t  Subtype %s (%u): ",
                       FUNC_17(VAR_4, "Unknown", VAR_10),
                       VAR_10));

                switch (VAR_10) {
                case 140:
                    if (VAR_18 < 1+6) {
                        goto trunc;
                    }
                    FUNC_4((VAR_7, "%s", FUNC_7(VAR_7, VAR_19 + 1)));
                    break;

                case 142:
                case 141:
                case 146:
                case 143:
                case 138:
                    FUNC_16(VAR_7, VAR_19 + 1, VAR_18 - 1);
                    break;

                case 139:
                    VAR_20 = FUNC_9(VAR_7, VAR_19+1, VAR_18-1);
                    if (VAR_20 == ((void*)0)) {
                        goto trunc;
                    }
                    FUNC_4((VAR_7, "%s", VAR_20));
                    break;

                default:
                    VAR_16 = VAR_1;
                    break;
                }
            }
            break;

        case 133:
            if (VAR_7->ndo_vflag) {
                if (VAR_18 < 2) {
                    goto trunc;
                }
                FUNC_4((VAR_7, ": TTL %us", FUNC_0(VAR_19)));
            }
            break;

        case 145:
            if (VAR_7->ndo_vflag) {
                FUNC_4((VAR_7, ": "));
                FUNC_16(VAR_7, VAR_19, VAR_18);
            }
            break;

        case 134:




            FUNC_4((VAR_7, ": "));
            FUNC_16(VAR_7, VAR_19, VAR_18);
            break;

        case 135:
            if (VAR_7->ndo_vflag) {
                FUNC_4((VAR_7, "\n\t  "));
                FUNC_16(VAR_7, VAR_19, VAR_18);
            }
            break;

        case 136:
            if (VAR_7->ndo_vflag) {






                if (VAR_18 < 4) {
                    goto trunc;
                }
                VAR_12 = FUNC_0(VAR_19);
                VAR_13 = FUNC_0(VAR_19+2);
                FUNC_4((VAR_7, "\n\t  System  Capabilities [%s] (0x%04x)",
                       FUNC_6(VAR_2, "none", VAR_12), VAR_12));
                FUNC_4((VAR_7, "\n\t  Enabled Capabilities [%s] (0x%04x)",
                       FUNC_6(VAR_2, "none", VAR_13), VAR_13));
            }
            break;

        case 147:
            if (VAR_7->ndo_vflag) {
                if (!FUNC_8(VAR_7, VAR_19, VAR_18)) {
                    goto trunc;
                }
            }
            break;

        case 137:
            if (VAR_7->ndo_vflag) {
                if (VAR_18 < 3) {
                    goto trunc;
                }
                VAR_14 = FUNC_1(VAR_19);
                FUNC_4((VAR_7, ": OUI %s (0x%06x)", FUNC_17(VAR_6, "Unknown", VAR_14), VAR_14));

                switch (VAR_14) {
                case 130:
                    VAR_16 = FUNC_10(VAR_7, VAR_19, VAR_18);
                    break;
                case 129:
                    VAR_16 = FUNC_11(VAR_7, VAR_19, VAR_18);
                    break;
  case 131:
                    VAR_16 = FUNC_13(VAR_7, VAR_19, VAR_18);
                    break;
                case 128:
                    VAR_16 = FUNC_14(VAR_7, VAR_19, VAR_18);
                    break;
                case 132:
                    VAR_16 = FUNC_12(VAR_7, VAR_19, VAR_18);
                    break;
                default:
                    VAR_16 = VAR_1;
                    break;
                }
            }
            break;

        default:
            VAR_16 = VAR_1;
            break;
        }


        if (VAR_7->ndo_vflag > 1 || (VAR_7->ndo_vflag && VAR_16)) {
            FUNC_15(VAR_7, VAR_19, "\n\t  ", VAR_18);
        }

        VAR_15 -= VAR_18;
        VAR_19 += VAR_18;
    }
    return;
 trunc:
    FUNC_4((VAR_7, "\n\t[|LLDP]"));
}
