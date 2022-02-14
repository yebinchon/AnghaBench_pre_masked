
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,scalar_t__,int,int) ;

void
FUNC_2(netdissect_options *VAR_0, register const u_char *VAR_1, register u_int VAR_2)
{
    if (!VAR_0->ndo_vflag) {
 FUNC_0((VAR_0, ", RPKI-RTR"));
 return;
    }
    while (VAR_2) {
 u_int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 1, 8);
 VAR_2 -= VAR_3;
 VAR_1 += VAR_3;
    }
}
