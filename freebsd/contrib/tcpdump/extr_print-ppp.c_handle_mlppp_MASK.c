
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,char*,int const) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_1,
             const u_char *VAR_2, int VAR_3)
{
    if (!VAR_1->ndo_eflag)
        FUNC_0((VAR_1, "MLPPP, "));

    if (VAR_3 < 2) {
        FUNC_0((VAR_1, "[|mlppp]"));
        return;
    }
    if (!FUNC_1(VAR_2)) {
        FUNC_0((VAR_1, "[|mlppp]"));
        return;
    }

    FUNC_0((VAR_1, "seq 0x%03x, Flags [%s], length %u",
           (FUNC_0(VAR_2))&0x0fff,
           FUNC_2(VAR_0, "none", *VAR_2 & 0xc0),
           VAR_3));
}
