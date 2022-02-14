
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;



 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int VAR_0 ;




 int FUNC_6 (int ,char*,int const) ;
 int FUNC_7 (TYPE_1__*,int const*,int,int *) ;
 int FUNC_8 (TYPE_1__*,int const*,int,int *) ;
 int VAR_1 ;
 int FUNC_9 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_10 (netdissect_options *VAR_6, const u_char *VAR_7, u_int VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    const u_char *VAR_12;

    if (VAR_8 < VAR_0)
        goto trunc;

    VAR_12 = VAR_7;

    FUNC_3(*VAR_12, VAR_0);

    VAR_9 = FUNC_4(*VAR_12);

    FUNC_2((VAR_6, "UDLDv%u, Code %s (%x), Flags [%s] (0x%02x), length %u",
           FUNC_5(*VAR_12),
           FUNC_9(VAR_3, "Reserved", VAR_9),
           VAR_9,
           FUNC_6(VAR_4, "none", *(VAR_12+1)),
           *(VAR_12+1),
           VAR_8));




    if (VAR_6->ndo_vflag < 1) {
 return;
    }

    FUNC_2((VAR_6, "\n\tChecksum 0x%04x (unverified)", FUNC_0(VAR_12+2)));

    VAR_12 += VAR_0;

    while (VAR_12 < (VAR_7+VAR_8)) {

        FUNC_3(*VAR_12, 4);
 VAR_10 = FUNC_0(VAR_12);
        VAR_11 = FUNC_0(VAR_12+2);

        FUNC_2((VAR_6, "\n\t%s (0x%04x) TLV, length %u",
               FUNC_9(VAR_5, "Unknown", VAR_10),
               VAR_10, VAR_11));

        if (VAR_10 == 0)
            goto invalid;


        if (VAR_11 <= 4)
            goto invalid;

        VAR_11 -= 4;
        VAR_12 += 4;

        FUNC_3(*VAR_12, VAR_11);

        switch (VAR_10) {
        case 134:
        case 130:
        case 133:
            FUNC_2((VAR_6, ", "));
            FUNC_8(VAR_6, VAR_12, VAR_11, ((void*)0));
            break;

        case 132:
            FUNC_2((VAR_6, ", "));
            (void)FUNC_7(VAR_6, VAR_12, VAR_11, ((void*)0));
            break;

        case 131:
        case 128:
            if (VAR_11 != 1)
                goto invalid;
            FUNC_2((VAR_6, ", %us", (*VAR_12)));
            break;

        case 129:
            if (VAR_11 != 4)
                goto invalid;
            FUNC_2((VAR_6, ", %u", FUNC_1(VAR_12)));
            break;

        default:
            break;
        }
        VAR_12 += VAR_11;
    }

    return;

invalid:
    FUNC_2((VAR_6, "%s", VAR_1));
    return;
trunc:
    FUNC_2((VAR_6, "%s", VAR_2));
}
