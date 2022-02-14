
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int const) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_1, u_int VAR_2,
                          u_int VAR_3, const u_char *VAR_4)
{
        u_int VAR_5;

        switch (VAR_2) {

        case 131:
        case 128:
            if (VAR_3 < 1) {
                if (!VAR_1->ndo_vflag) {
                    FUNC_0((VAR_1, ", "));
         }
                FUNC_0((VAR_1, "Invalid REPORT TYPE IE"));
                return 1;
            }
            if (VAR_1->ndo_vflag) {
                FUNC_0((VAR_1, "%s (%u)",
                       FUNC_1(VAR_0,"unknown",VAR_4[0]),
                       VAR_4[0]));
     }
            return 1;

        case 134:
        case 130:
        case 133:
            if (!VAR_1->ndo_vflag) {
                FUNC_0((VAR_1, ", "));
     }
            if (VAR_3 < 2) {
                FUNC_0((VAR_1, "Invalid LINK VERIFY IE"));
                return 1;
            }
            FUNC_0((VAR_1, "TX Seq: %3d, RX Seq: %3d", VAR_4[0], VAR_4[1]));
            return 1;

        case 132:
        case 129:
            if (!VAR_1->ndo_vflag) {
                FUNC_0((VAR_1, ", "));
     }

            if ((VAR_3 < 3) ||
                (VAR_4[0] & 0x80) ||
                ((VAR_3 == 3) && !(VAR_4[1] & 0x80)) ||
                ((VAR_3 == 4) && ((VAR_4[1] & 0x80) || !(VAR_4[2] & 0x80))) ||
                ((VAR_3 == 5) && ((VAR_4[1] & 0x80) || (VAR_4[2] & 0x80) ||
                                   !(VAR_4[3] & 0x80))) ||
                (VAR_3 > 5) ||
                !(VAR_4[VAR_3 - 1] & 0x80)) {
                FUNC_0((VAR_1, "Invalid DLCI in PVC STATUS IE"));
                return 1;
     }

            VAR_5 = ((VAR_4[0] & 0x3F) << 4) | ((VAR_4[1] & 0x78) >> 3);
            if (VAR_3 == 4) {
                VAR_5 = (VAR_5 << 6) | ((VAR_4[2] & 0x7E) >> 1);
     }
            else if (VAR_3 == 5) {
                VAR_5 = (VAR_5 << 13) | (VAR_4[2] & 0x7F) | ((VAR_4[3] & 0x7E) >> 1);
     }

            FUNC_0((VAR_1, "DLCI %u: status %s%s", VAR_5,
                    VAR_4[VAR_3 - 1] & 0x8 ? "New, " : "",
                    VAR_4[VAR_3 - 1] & 0x2 ? "Active" : "Inactive"));
            return 1;
 }

        return 0;
}
