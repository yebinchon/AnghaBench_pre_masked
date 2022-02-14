
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_4__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4)
{
    const char *VAR_5 = "";

    while (VAR_4 > 0) {
        uint16_t VAR_6;
        uint8_t VAR_7;
        uint8_t VAR_8;

        FUNC_2((VAR_2, "%s", VAR_5));
        VAR_5 = ", ";

        VAR_6 = FUNC_0(VAR_3);
        VAR_7 = *(VAR_3 + 2);
        VAR_8 = 4 + ((*(VAR_3 + 3) & VAR_0) * 4);

        FUNC_2((VAR_2, "class %s (0x%x) type 0x%x%s len %u",
                  FUNC_3(VAR_6), VAR_6, VAR_7,
                  VAR_7 & VAR_1 ? "(C)" : "", VAR_8));

        if (VAR_8 > VAR_4) {
            FUNC_2((VAR_2, " [bad length]"));
            return;
        }

        if (VAR_2->ndo_vflag > 1 && VAR_8 > 4) {
            const uint32_t *VAR_9 = (const uint32_t *)(VAR_3 + 4);
            int VAR_10;

            FUNC_2((VAR_2, " data"));

            for (VAR_10 = 4; VAR_10 < VAR_8; VAR_10 += 4) {
                FUNC_2((VAR_2, " %08x", FUNC_1(VAR_9)));
                VAR_9++;
            }
        }

        VAR_3 += VAR_8;
        VAR_4 -= VAR_8;
    }
}
