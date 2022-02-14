
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct TYPE_4__ {scalar_t__ ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_3,
             int VAR_4, u_int VAR_5, u_int VAR_6, uint8_t *VAR_7, uint16_t VAR_8)
{
    if (VAR_3->ndo_qflag) {
        FUNC_1((VAR_3, "Q.922, DLCI %u, length %u: ",
                     VAR_6,
                     VAR_4));
    } else {
        if (VAR_8 <= 0xff)
            FUNC_1((VAR_3, "Q.922, hdr-len %u, DLCI %u, Flags [%s], NLPID %s (0x%02x), length %u: ",
                         VAR_5,
                         VAR_6,
                         FUNC_2(VAR_1, "none", FUNC_0(VAR_7)),
                         FUNC_3(VAR_2,"unknown", VAR_8),
                         VAR_8,
                         VAR_4));
        else
            FUNC_1((VAR_3, "Q.922, hdr-len %u, DLCI %u, Flags [%s], cisco-ethertype %s (0x%04x), length %u: ",
                         VAR_5,
                         VAR_6,
                         FUNC_2(VAR_1, "none", FUNC_0(VAR_7)),
                         FUNC_3(VAR_0, "unknown", VAR_8),
                         VAR_8,
                         VAR_4));
    }
}
