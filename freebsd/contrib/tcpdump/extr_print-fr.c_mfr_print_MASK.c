
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct timeval {int dummy; } ;
struct ie_tlv_header_t {int dummy; } ;
struct TYPE_8__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;






 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int ,char*,int const) ;
 int FUNC_4 (TYPE_1__*,int const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_6 (TYPE_1__*,int const) ;
 int FUNC_7 (int ,char*,int const) ;
 int FUNC_8 (TYPE_1__*,struct timeval const*) ;

u_int
FUNC_9(netdissect_options *VAR_8,
          register const u_char *VAR_9, u_int VAR_10)
{
    u_int VAR_11,VAR_12,VAR_13 = 0;
    uint16_t VAR_14;
    uint8_t VAR_15,VAR_16;
    const uint8_t *VAR_17;
    FUNC_2(*VAR_9, 4);

    if ((VAR_9[0] & VAR_0) == VAR_2 && VAR_9[1] == 0) {
        FUNC_1((VAR_8, "FRF.16 Control, Flags [%s], %s, length %u",
               FUNC_3(VAR_5,"none",(VAR_9[0] & VAR_0)),
               FUNC_7(VAR_7,"Unknown Message (0x%02x)",VAR_9[2]),
               VAR_10));
        VAR_17 = VAR_9 + 3;
        VAR_11 = VAR_10 -3;
        VAR_13 = 3;

        if (!VAR_8->ndo_vflag)
            return VAR_13;

        while (VAR_11>sizeof(struct ie_tlv_header_t)) {
            FUNC_2(*VAR_17, sizeof(struct ie_tlv_header_t));
            VAR_15=VAR_17[0];
            VAR_16=VAR_17[1];

            FUNC_1((VAR_8, "\n\tIE %s (%u), length %u: ",
                   FUNC_7(VAR_6,"Unknown",VAR_15),
                   VAR_15,
                   VAR_16));


            if (VAR_15 == 0 || VAR_16 <= sizeof(struct ie_tlv_header_t))
                return VAR_13;

            FUNC_2(*VAR_17, VAR_16);
            VAR_17+=sizeof(struct ie_tlv_header_t);

            VAR_16-=sizeof(struct ie_tlv_header_t);
            VAR_11-=sizeof(struct ie_tlv_header_t);

            switch (VAR_15) {

            case 130:
                FUNC_1((VAR_8, "0x%08x", FUNC_0(VAR_17)));
                break;

            case 133:
            case 131:
                for (VAR_12 = 0; VAR_12 < VAR_16 && VAR_12 < VAR_4; VAR_12++) {
                    if (*(VAR_17+VAR_12) != 0)
                        FUNC_6(VAR_8, *(VAR_17 + VAR_12));
                    else
                        break;
                }
                break;

            case 129:
                if (VAR_16 == sizeof(struct timeval)) {
                    FUNC_8(VAR_8, (const struct timeval *)VAR_17);
                    break;
                }







            case 128:
            case 132:

            default:
                if (VAR_8->ndo_vflag <= 1)
                    FUNC_5(VAR_8, VAR_17, "\n\t  ", VAR_16);
                break;
            }


            if (VAR_8->ndo_vflag > 1 )
                FUNC_5(VAR_8, VAR_17, "\n\t  ", VAR_16);

            VAR_11-=VAR_16;
            VAR_17+=VAR_16;
        }
        return VAR_13;
    }
    VAR_14 = (VAR_9[0]&0x1e)<<7 | VAR_9[1];

    if ((VAR_9[0] & VAR_0) == VAR_3 ||
        (VAR_9[0] & VAR_0) == VAR_1) {
        FUNC_1((VAR_8, "FRF.16 Frag, seq %u, Flags [%s], ",
               VAR_14,
               FUNC_3(VAR_5,"none",(VAR_9[0] & VAR_0))));
        VAR_13 = 2;
        FUNC_4(VAR_8, VAR_9+VAR_13,VAR_10-VAR_13);
        return VAR_13;
    }


    FUNC_1((VAR_8, "FRF.16 Frag, seq %u, Flags [%s]",
           VAR_14,
           FUNC_3(VAR_5,"none",(VAR_9[0] & VAR_0))));
    FUNC_5(VAR_8, VAR_9, "\n\t", VAR_10);

    return VAR_13;

 trunc:
    FUNC_1((VAR_8, "[|mfr]"));
    return VAR_10;
}
