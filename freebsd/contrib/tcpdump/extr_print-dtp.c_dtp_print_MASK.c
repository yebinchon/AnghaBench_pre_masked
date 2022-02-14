
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;




 int VAR_0 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int const*,int,int const*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_3 ;

void
FUNC_6 (netdissect_options *VAR_4, const u_char *VAR_5, u_int VAR_6)
{
    int VAR_7, VAR_8;
    const u_char *VAR_9;

    if (VAR_6 < VAR_0)
        goto trunc;

    VAR_9 = VAR_5;

    FUNC_2(*VAR_9, VAR_0);

    FUNC_1((VAR_4, "DTPv%u, length %u",
           (*VAR_9),
           VAR_6));




    if (VAR_4->ndo_vflag < 1) {
 return;
    }

    VAR_9 += VAR_0;

    while (VAR_9 < (VAR_5+VAR_6)) {

        FUNC_2(*VAR_9, 4);
 VAR_7 = FUNC_0(VAR_9);
        VAR_8 = FUNC_0(VAR_9+2);

        if (VAR_7 == 0)
            return;
        FUNC_1((VAR_4, "\n\t%s (0x%04x) TLV, length %u",
               FUNC_5(VAR_1, "Unknown", VAR_7),
               VAR_7, VAR_8));


        if (VAR_8 < 4)
            goto invalid;
        FUNC_2(*VAR_9, VAR_8);

        switch (VAR_7) {
 case 131:
  FUNC_1((VAR_4, ", "));
  FUNC_4(VAR_4, VAR_9+4, VAR_8-4, VAR_5+VAR_6);
  break;

 case 128:
 case 130:
                if (VAR_8 < 5)
                    goto invalid;
                FUNC_1((VAR_4, ", 0x%x", *(VAR_9+4)));
                break;

 case 129:
                if (VAR_8 < 10)
                    goto invalid;
                FUNC_1((VAR_4, ", %s", FUNC_3(VAR_4, VAR_9+4)));
                break;

        default:
            break;
        }
        VAR_9 += VAR_8;
    }

    return;

 invalid:
    FUNC_1((VAR_4, "%s", VAR_2));
    return;
 trunc:
    FUNC_1((VAR_4, "%s", VAR_3));
}
