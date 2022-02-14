
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct eap_frame_t {int const type; int const* length; int version; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;





 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct eap_frame_t const) ;
 int FUNC_6 (int const,int) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int ,char*,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (TYPE_1__*,int const*,int) ;
 int FUNC_12 (int ,char*,int const) ;

void
FUNC_13(netdissect_options *VAR_5,
          register const u_char *VAR_6,
          u_int VAR_7)
{
    const struct eap_frame_t *VAR_8;
    const u_char *VAR_9;
    u_int VAR_10, VAR_11, VAR_12;
    int VAR_13=0, VAR_14;

    VAR_9 = VAR_6;
    VAR_10 = VAR_7;
    VAR_8 = (const struct eap_frame_t *)VAR_6;
    FUNC_5(*VAR_8);


    if (VAR_5->ndo_vflag < 1) {
 FUNC_4((VAR_5, "%s (%u) v%u, len %u",
               FUNC_12(VAR_2, "unknown", VAR_8->type),
               VAR_8->type,
               VAR_8->version,
               FUNC_2(VAR_8->length)));
 return;
    }

    FUNC_4((VAR_5, "%s (%u) v%u, len %u",
           FUNC_12(VAR_2, "unknown", VAR_8->type),
           VAR_8->type,
           VAR_8->version,
           FUNC_2(VAR_8->length)));

    VAR_9 += sizeof(const struct eap_frame_t);
    VAR_10 -= sizeof(const struct eap_frame_t);

    switch (VAR_8->type) {
    case 141:
        FUNC_9(VAR_9);
        VAR_11 = *(VAR_9);
        FUNC_7(VAR_9+2);
        VAR_14 = FUNC_2(VAR_9+2);
        FUNC_4((VAR_5, ", %s (%u), id %u, len %u",
               FUNC_12(VAR_1, "unknown", VAR_11),
               VAR_11,
               *(VAR_9+1),
               VAR_14));

        FUNC_6(*VAR_9, VAR_14);

        if (VAR_11 <= 2) {
            FUNC_9(VAR_9+4);
            VAR_12 = *(VAR_9+4);
            FUNC_4((VAR_5, "\n\t\t Type %s (%u)",
                   FUNC_12(VAR_4, "unknown", VAR_12),
                   VAR_12));

            switch (VAR_12) {
            case 135:
                if (VAR_14 - 5 > 0) {
                    FUNC_4((VAR_5, ", Identity: "));
                    FUNC_11(VAR_5, VAR_9 + 5, VAR_14 - 5);
                }
                break;

            case 132:
                if (VAR_14 - 5 > 0) {
                    FUNC_4((VAR_5, ", Notification: "));
                    FUNC_11(VAR_5, VAR_9 + 5, VAR_14 - 5);
                }
                break;

            case 133:
                VAR_13 = 5;






                while (VAR_13 < VAR_14) {
                    FUNC_9(VAR_9+VAR_13);
                    FUNC_4((VAR_5, " %s (%u),",
                           FUNC_12(VAR_4, "unknown", *(VAR_9+VAR_13)),
                           *(VAR_9 + VAR_13)));
                    VAR_13++;
                }
                break;

            case 128:
            case 129:
                FUNC_9(VAR_9 + 5);
                if (VAR_12 == 128)
                    FUNC_4((VAR_5, " TTLSv%u",
                           FUNC_1(*(VAR_9 + 5))));
                FUNC_4((VAR_5, " flags [%s] 0x%02x,",
                       FUNC_10(VAR_3, "none", *(VAR_9+5)),
                       *(VAR_9 + 5)));

                if (FUNC_0(*(VAR_9+5))) {
                    FUNC_8(VAR_9 + 6);
      FUNC_4((VAR_5, " len %u", FUNC_3(VAR_9 + 6)));
                }
                break;

            case 137:
                FUNC_9(VAR_9 + 5);
                FUNC_4((VAR_5, " FASTv%u",
                       FUNC_1(*(VAR_9 + 5))));
                FUNC_4((VAR_5, " flags [%s] 0x%02x,",
                       FUNC_10(VAR_3, "none", *(VAR_9+5)),
                       *(VAR_9 + 5)));

                if (FUNC_0(*(VAR_9+5))) {
                    FUNC_8(VAR_9 + 6);
                    FUNC_4((VAR_5, " len %u", FUNC_3(VAR_9 + 6)));
                }


                break;

            case 140:
            case 130:
                FUNC_9(VAR_9 + 5);
                FUNC_4((VAR_5, " subtype [%s] 0x%02x,",
                       FUNC_12(VAR_0, "unknown", *(VAR_9+5)),
                       *(VAR_9 + 5)));


                break;

            case 134:
            case 131:
            case 136:
            case 139:
            case 138:
            default:
                break;
            }
        }
        break;

    case 142:
    case 143:
    default:
        break;
    }
    return;

 trunc:
    FUNC_4((VAR_5, "\n\t[|EAP]"));
}
