
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;







 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (unsigned short) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (TYPE_1__*,int*,int) ;
 int VAR_1 ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int const,int const*,int,int*) ;
 int FUNC_12 (int const,int const,int const,int const*,int*,int,int*) ;
 int FUNC_13 (TYPE_1__*,int const*,int const*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_14(netdissect_options *VAR_3,
               const u_char *VAR_4, u_int VAR_5)
{
    u_int VAR_6;
    u_short VAR_7;
    u_char VAR_8[16] =
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0, 0, 0 };
    u_char VAR_9[16] = {0};

    FUNC_4(*VAR_4, 4);
    if (VAR_5 < 4)
        goto invalid;
    VAR_7 = FUNC_0(VAR_4 + 2);
    FUNC_3((VAR_3, " (%u)", VAR_7));


    VAR_6 = 0;
    while(VAR_6 < VAR_7) {
        const u_char *VAR_10;
        u_int VAR_11, VAR_12;

        VAR_10 = VAR_4 + 4 + VAR_6;

        FUNC_4(*VAR_10, 1);
        if((VAR_11 = VAR_10[0]) == VAR_0) {
            FUNC_3((VAR_3, VAR_3->ndo_vflag ? "\n\tPad 1" : " pad1"));
            VAR_6 += 1;
            continue;
        }

        FUNC_4(*VAR_10, 2);
        FUNC_2(VAR_6, 2);
        VAR_12 = VAR_10[1];

        FUNC_4(*VAR_10, 2 + VAR_12);
        FUNC_2(VAR_6, 2 + VAR_12);

        switch(VAR_11) {
        case 134: {
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " padN"));
            else
                FUNC_3((VAR_3, "\n\tPad %d", VAR_12 + 2));
        }
            break;

        case 141: {
            u_short VAR_13, VAR_14;
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " ack-req"));
            else {
                FUNC_3((VAR_3, "\n\tAcknowledgment Request "));
                if(VAR_12 < 6) goto invalid;
                VAR_13 = FUNC_0(VAR_10 + 4);
                VAR_14 = FUNC_0(VAR_10 + 6);
                FUNC_3((VAR_3, "%04x %s", VAR_13, FUNC_7(VAR_14)));
            }
        }
            break;

        case 142: {
            u_short VAR_15;
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " ack"));
            else {
                FUNC_3((VAR_3, "\n\tAcknowledgment "));
                if(VAR_12 < 2) goto invalid;
                VAR_15 = FUNC_0(VAR_10 + 2);
                FUNC_3((VAR_3, "%04x", VAR_15));
            }
        }
            break;

        case 140: {
            u_short VAR_16, VAR_17;
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " hello"));
            else {
                FUNC_3((VAR_3, "\n\tHello "));
                if(VAR_12 < 6) goto invalid;
                VAR_16 = FUNC_0(VAR_10 + 4);
                VAR_17 = FUNC_0(VAR_10 + 6);
                FUNC_3((VAR_3, "seqno %u interval %s", VAR_16, FUNC_7(VAR_17)));

                if(VAR_12 > 6)
                    FUNC_13(VAR_3, VAR_10 + 8, VAR_10 + 2 + VAR_12, VAR_11);
            }
        }
            break;

        case 138: {
            unsigned short VAR_18, VAR_19;
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " ihu"));
            else {
                u_char VAR_20[16];
                int VAR_21;
                FUNC_3((VAR_3, "\n\tIHU "));
                if(VAR_12 < 6) goto invalid;
                VAR_18 = FUNC_0(VAR_10 + 4);
                VAR_19 = FUNC_0(VAR_10 + 6);
                VAR_21 = FUNC_11(VAR_10[2], VAR_10 + 8, VAR_12 - 6, VAR_20);
                if(VAR_21 < 0) { FUNC_3((VAR_3, "%s", VAR_2)); break; }
                FUNC_3((VAR_3, "%s txcost %u interval %s",
                       FUNC_5(VAR_3, VAR_20), VAR_18, FUNC_7(VAR_19)));

                if((u_int)VAR_21 < VAR_12 - 6)
                    FUNC_13(VAR_3, VAR_10 + 8 + VAR_21, VAR_10 + 2 + VAR_12,
                                  VAR_11);
            }
        }
            break;

        case 131: {
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " router-id"));
            else {
                FUNC_3((VAR_3, "\n\tRouter Id"));
                if(VAR_12 < 10) goto invalid;
                FUNC_3((VAR_3, " %s", FUNC_6(VAR_10 + 4)));
            }
        }
            break;

        case 135: {
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " nh"));
            else {
                int VAR_22;
                u_char VAR_23[16];
                FUNC_3((VAR_3, "\n\tNext Hop"));
                if(VAR_12 < 2) goto invalid;
                VAR_22 = FUNC_11(VAR_10[2], VAR_10 + 4, VAR_12 - 2, VAR_23);
                if(VAR_22 < 0) goto invalid;
                FUNC_3((VAR_3, " %s", FUNC_5(VAR_3, VAR_23)));
            }
        }
            break;

        case 129: {
            if (!VAR_3->ndo_vflag) {
                FUNC_3((VAR_3, " update"));
                if(VAR_12 < 1)
                    FUNC_3((VAR_3, "/truncated"));
                else
                    FUNC_3((VAR_3, "%s%s%s",
                           (VAR_10[3] & 0x80) ? "/prefix": "",
                           (VAR_10[3] & 0x40) ? "/id" : "",
                           (VAR_10[3] & 0x3f) ? "/unknown" : ""));
            } else {
                u_short VAR_24, VAR_25, VAR_26;
                u_char VAR_27;
                int VAR_28;
                u_char VAR_29[16];
                FUNC_3((VAR_3, "\n\tUpdate"));
                if(VAR_12 < 10) goto invalid;
                VAR_27 = VAR_10[4] + (VAR_10[2] == 1 ? 96 : 0);
                VAR_28 = FUNC_12(VAR_10[2], VAR_10[4], VAR_10[5],
                                    VAR_10 + 12,
                                    VAR_10[2] == 1 ? VAR_8 : VAR_9,
                                    VAR_12 - 10, VAR_29);
                if(VAR_28 < 0) goto invalid;
                VAR_24 = FUNC_0(VAR_10 + 6);
                VAR_25 = FUNC_0(VAR_10 + 8);
                VAR_26 = FUNC_0(VAR_10 + 10);
                FUNC_3((VAR_3, "%s%s%s %s metric %u seqno %u interval %s",
                       (VAR_10[3] & 0x80) ? "/prefix": "",
                       (VAR_10[3] & 0x40) ? "/id" : "",
                       (VAR_10[3] & 0x3f) ? "/unknown" : "",
                       FUNC_9(VAR_3, VAR_29, VAR_27),
                       VAR_26, VAR_25, FUNC_8(VAR_24)));
                if(VAR_10[3] & 0x80) {
                    if(VAR_10[2] == 1)
                        FUNC_10(VAR_8, VAR_29, 16);
                    else
                        FUNC_10(VAR_9, VAR_29, 16);
                }

                if((u_int)VAR_28 < VAR_12 - 10)
                    FUNC_13(VAR_3, VAR_10 + 12 + VAR_28, VAR_10 + 2 + VAR_12, VAR_11);
            }
        }
            break;

        case 133: {
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " request"));
            else {
                int VAR_30;
                u_char VAR_31[16], VAR_32;
                FUNC_3((VAR_3, "\n\tRequest "));
                if(VAR_12 < 2) goto invalid;
                VAR_32 = VAR_10[3] + (VAR_10[2] == 1 ? 96 : 0);
                VAR_30 = FUNC_12(VAR_10[2], VAR_10[3], 0,
                                    VAR_10 + 4, ((void*)0), VAR_12 - 2, VAR_31);
                if(VAR_30 < 0) goto invalid;
                FUNC_3((VAR_3, "for %s",
                       VAR_10[2] == 0 ? "any" : FUNC_9(VAR_3, VAR_31, VAR_32)));
            }
        }
            break;

        case 137 : {
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " mh-request"));
            else {
                int VAR_33;
                u_short VAR_34;
                u_char VAR_35[16], VAR_36;
                FUNC_3((VAR_3, "\n\tMH-Request "));
                if(VAR_12 < 14) goto invalid;
                VAR_34 = FUNC_0(VAR_10 + 4);
                VAR_33 = FUNC_12(VAR_10[2], VAR_10[3], 0,
                                    VAR_10 + 16, ((void*)0), VAR_12 - 14, VAR_35);
                if(VAR_33 < 0) goto invalid;
                VAR_36 = VAR_10[3] + (VAR_10[2] == 1 ? 96 : 0);
                FUNC_3((VAR_3, "(%u hops) for %s seqno %u id %s",
                       VAR_10[6], FUNC_9(VAR_3, VAR_35, VAR_36),
                       VAR_34, FUNC_6(VAR_10 + 8)));
            }
        }
            break;
        case 130 :
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " tspc"));
            else {
                FUNC_3((VAR_3, "\n\tTS/PC "));
                if(VAR_12 < 6) goto invalid;
                FUNC_3((VAR_3, "timestamp %u packetcounter %u", FUNC_1 (VAR_10 + 4),
                       FUNC_0(VAR_10 + 2)));
            }
            break;
        case 139 : {
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " hmac"));
            else {
                unsigned VAR_37;
                FUNC_3((VAR_3, "\n\tHMAC "));
                if(VAR_12 < 18) goto invalid;
                FUNC_3((VAR_3, "key-id %u digest-%u ", FUNC_0(VAR_10 + 2), VAR_12 - 2));
                for (VAR_37 = 0; VAR_37 < VAR_12 - 2; VAR_37++)
                    FUNC_3((VAR_3, "%02X", VAR_10[4 + VAR_37]));
            }
        }
            break;

        case 128 : {
            if(!VAR_3->ndo_vflag) {
                FUNC_3((VAR_3, " ss-update"));
            } else {
                u_char VAR_38[16], VAR_39[16];
                u_short VAR_40, VAR_41, VAR_42;
                u_char VAR_43, VAR_44, VAR_45, VAR_46;
                int VAR_47;
                int VAR_48 = 10;
                FUNC_3((VAR_3, "\n\tSS-Update"));
                if(VAR_12 < 10) goto invalid;
                VAR_43 = VAR_10[2];
                VAR_45 = VAR_10[3];
                VAR_44 = VAR_10[4];
                VAR_46 = VAR_10[5];
                VAR_40 = FUNC_0(VAR_10 + 6);
                VAR_41 = FUNC_0(VAR_10 + 8);
                VAR_42 = FUNC_0(VAR_10 + 10);
                VAR_47 = FUNC_12(VAR_43, VAR_44, VAR_46, VAR_10 + 2 + VAR_48,
                                    VAR_43 == 1 ? VAR_8 : VAR_9,
                                    VAR_12 - VAR_48, VAR_38);
                if(VAR_47 < 0) goto invalid;
                if(VAR_43 == 1)
                    VAR_44 += 96;
                VAR_48 += VAR_47;
                VAR_47 = FUNC_12(VAR_43, VAR_45, 0, VAR_10 + 2 + VAR_48,
                                    ((void*)0), VAR_12 - VAR_48, VAR_39);
                if(VAR_47 < 0) goto invalid;
                if(VAR_43 == 1)
                    VAR_45 += 96;
                VAR_48 += VAR_47;

                FUNC_3((VAR_3, " %s from", FUNC_9(VAR_3, VAR_38, VAR_44)));
                FUNC_3((VAR_3, " %s metric %u seqno %u interval %s",
                          FUNC_9(VAR_3, VAR_39, VAR_45),
                          VAR_42, VAR_41, FUNC_8(VAR_40)));

                if((u_int)VAR_48 < VAR_12)
                    FUNC_13(VAR_3, VAR_10 + 2 + VAR_48,
                                  VAR_10 + 2 + VAR_12, VAR_11);
            }
        }
            break;

        case 132 : {
            if(!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " ss-request"));
            else {
                int VAR_49, VAR_50 = 3;
                u_char VAR_51, VAR_52, VAR_53, VAR_54[16], VAR_55[16];
                FUNC_3((VAR_3, "\n\tSS-Request "));
                if(VAR_12 < 3) goto invalid;
                VAR_51 = VAR_10[2];
                VAR_52 = VAR_10[3];
                VAR_53 = VAR_10[4];
                VAR_49 = FUNC_12(VAR_51, VAR_52, 0, VAR_10 + 2 + VAR_50,
                                    ((void*)0), VAR_12 - VAR_50, VAR_54);
                if(VAR_49 < 0) goto invalid;
                if(VAR_51 == 1)
                    VAR_52 += 96;
                VAR_50 += VAR_49;
                VAR_49 = FUNC_12(VAR_51, VAR_53, 0, VAR_10 + 2 + VAR_50,
                                    ((void*)0), VAR_12 - VAR_50, VAR_55);
                if(VAR_49 < 0) goto invalid;
                if(VAR_51 == 1)
                    VAR_53 += 96;
                VAR_50 += VAR_49;
                if(VAR_51 == 0) {
                    FUNC_3((VAR_3, "for any"));
                } else {
                    FUNC_3((VAR_3, "for (%s, ", FUNC_9(VAR_3, VAR_54, VAR_52)));
                    FUNC_3((VAR_3, "%s)", FUNC_9(VAR_3, VAR_55, VAR_53)));
                }
            }
        }
            break;

        case 136 : {
            if(!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " ss-mh-request"));
            else {
                int VAR_56, VAR_57 = 14;
                u_short VAR_58;
                u_char VAR_59, VAR_60, VAR_61, VAR_62[16], VAR_63[16], VAR_64;
                const u_char *VAR_65 = ((void*)0);
                FUNC_3((VAR_3, "\n\tSS-MH-Request "));
                if(VAR_12 < 14) goto invalid;
                VAR_59 = VAR_10[2];
                VAR_60 = VAR_10[3];
                VAR_58 = FUNC_0(VAR_10 + 4);
                VAR_64 = VAR_10[6];
                VAR_61 = VAR_10[7];
                VAR_65 = VAR_10 + 8;
                VAR_56 = FUNC_12(VAR_59, VAR_60, 0, VAR_10 + 2 + VAR_57,
                                    ((void*)0), VAR_12 - VAR_57, VAR_62);
                if(VAR_56 < 0) goto invalid;
                if(VAR_59 == 1)
                    VAR_60 += 96;
                VAR_57 += VAR_56;
                VAR_56 = FUNC_12(VAR_59, VAR_61, 0, VAR_10 + 2 + VAR_57,
                                    ((void*)0), VAR_12 - VAR_57, VAR_63);
                if(VAR_56 < 0) goto invalid;
                if(VAR_59 == 1)
                    VAR_61 += 96;
                FUNC_3((VAR_3, "(%u hops) for (%s, ",
                          VAR_64, FUNC_9(VAR_3, VAR_62, VAR_60)));
                FUNC_3((VAR_3, "%s) seqno %u id %s",
                          FUNC_9(VAR_3, VAR_63, VAR_61),
                          VAR_58, FUNC_6(VAR_65)));
            }
        }
            break;

        default:
            if (!VAR_3->ndo_vflag)
                FUNC_3((VAR_3, " unknown"));
            else
                FUNC_3((VAR_3, "\n\tUnknown message type %d", VAR_11));
        }
        VAR_6 += VAR_12 + 2;
    }
    return;

 trunc:
    FUNC_3((VAR_3, " %s", VAR_2));
    return;

 invalid:
    FUNC_3((VAR_3, "%s", VAR_1));
    return;
}
