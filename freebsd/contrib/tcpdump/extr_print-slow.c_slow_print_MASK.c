
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const) ;



 int FUNC_2 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int) ;

void
FUNC_6(netdissect_options *VAR_3,
           register const u_char *VAR_4, register u_int VAR_5)
{
    int VAR_6;
    u_int VAR_7;

    if (VAR_5 < 1)
        goto tooshort;
    FUNC_1(*VAR_4);
    VAR_7 = *VAR_4;




    switch (VAR_7) {
    case 130:
        if (VAR_5 < 2)
            goto tooshort;
        FUNC_1(*(VAR_4+1));
        if (*(VAR_4+1) != VAR_0) {
            FUNC_0((VAR_3, "LACP version %u packet not supported", *(VAR_4+1)));
            return;
        }
        VAR_6 = 1;
        break;

    case 129:
        if (VAR_5 < 2)
            goto tooshort;
        FUNC_1(*(VAR_4+1));
        if (*(VAR_4+1) != VAR_1) {
            FUNC_0((VAR_3, "MARKER version %u packet not supported", *(VAR_4+1)));
            return;
        }
        VAR_6 = 1;
        break;

    case 128:
        VAR_6 = 0;
        break;

    default:

        VAR_6 = -1;
        break;
    }

    if (VAR_6 == 1) {
        FUNC_0((VAR_3, "%sv%u, length %u",
               FUNC_5(VAR_2, "unknown (%u)", VAR_7),
               *(VAR_4+1),
               VAR_5));
    } else {

        FUNC_0((VAR_3, "%s, length %u",
               FUNC_5(VAR_2, "unknown (%u)", VAR_7),
               VAR_5));
    }


    if (VAR_6 == -1) {
        FUNC_2(VAR_3, VAR_4, "\n\t", VAR_5);
        return;
    }

    if (!VAR_3->ndo_vflag)
        return;

    switch (VAR_7) {
    default:
        break;

    case 128:

        VAR_5 -= 1;
        VAR_4 += 1;
        FUNC_4(VAR_3, VAR_4, VAR_5);
        break;

    case 130:
    case 129:

        VAR_5 -= 2;
        VAR_4 += 2;
        FUNC_3(VAR_3, VAR_4, VAR_5, VAR_7);
        break;
    }
    return;

tooshort:
    if (!VAR_3->ndo_vflag)
        FUNC_0((VAR_3, " (packet is too short)"));
    else
        FUNC_0((VAR_3, "\n\t\t packet is too short"));
    return;

trunc:
    if (!VAR_3->ndo_vflag)
        FUNC_0((VAR_3, " (packet exceeded snapshot)"));
    else
        FUNC_0((VAR_3, "\n\t\t packet exceeded snapshot"));
}
