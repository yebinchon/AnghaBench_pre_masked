
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;



 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_6 (int ,char*,int const) ;

int
FUNC_7(netdissect_options *VAR_2,
                     const uint8_t *VAR_3, u_int VAR_4)
{
    u_int VAR_5, VAR_6;


    while (VAR_4 > 0) {
        FUNC_3(*VAR_3, 4);
        if (VAR_4 < 4) {
            FUNC_2((VAR_2, "\n\t    Remaining LS length %u < 4", VAR_4));
            return -1;
        }
        VAR_5 = FUNC_0(VAR_3);
        VAR_6 = FUNC_0(VAR_3+2);
        VAR_3+=4;
        VAR_4-=4;

        FUNC_2((VAR_2, "\n\t    %s TLV (%u), length %u, value: ",
               FUNC_6(VAR_1,"unknown",VAR_5),
               VAR_5,
               VAR_6));

        if (VAR_6 > VAR_4) {
            FUNC_2((VAR_2, "\n\t    Bogus length %u > %u", VAR_6,
                   VAR_4));
            return -1;
        }


        if (VAR_5 == 0 || VAR_6 ==0) {
            return -1;
        }

        FUNC_3(*VAR_3, VAR_6);
        switch(VAR_5) {

        case 129:
            if (VAR_6 != 4) {
                FUNC_2((VAR_2, "\n\t    Bogus length %u != 4", VAR_6));
                return -1;
            }
            FUNC_2((VAR_2, "%us", FUNC_1(VAR_3)));
            break;

        case 128:
            if (VAR_6 != 1) {
                FUNC_2((VAR_2, "\n\t    Bogus length %u != 1", VAR_6));
                return -1;
            }
            FUNC_2((VAR_2, "%s (%u)",
                   FUNC_6(VAR_0, "Unknown", *VAR_3),
                   *VAR_3));
            break;

        case 130:
            if (VAR_6 != 4) {
                FUNC_2((VAR_2, "\n\t    Bogus length %u != 4", VAR_6));
                return -1;
            }
            FUNC_2((VAR_2, "%s", FUNC_4(VAR_2, VAR_3)));
            break;

        default:
            if (VAR_2->ndo_vflag <= 1) {
                if (!FUNC_5(VAR_2, VAR_3, "\n\t      ", VAR_6))
                    return -1;
            }
            break;

        }

        if (VAR_6%4 != 0)
            VAR_6+=4-(VAR_6%4);
        VAR_4-=VAR_6;
        VAR_3+=VAR_6;
    }

    return 0;
trunc:
    return -1;
}
