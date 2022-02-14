
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_5__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int const*) ;
 int const* VAR_0 ;
 int VAR_1 ;

void
FUNC_4(netdissect_options *VAR_2,
              const u_char * VAR_3, int VAR_4)
{
    int VAR_5;
    u_int VAR_6;
    const u_char *VAR_7;

    if (VAR_4 < 4)
 goto trunc;
    if (VAR_2->ndo_snapend < VAR_3)
 goto trunc;
    VAR_5 = VAR_2->ndo_snapend - VAR_3;
    if (VAR_5 < 4)
 goto trunc;
    VAR_7 = VAR_3 + VAR_5;
    VAR_6 = FUNC_0(VAR_3 + 1);
    VAR_4 -= 4;
    VAR_5 -= 4;

    VAR_0 = VAR_3;
    VAR_3 += 4;

    if (VAR_6 >= 4 && VAR_5 >= 4 && FUNC_2(VAR_3,"\377SMB",4) == 0) {
 if ((int)VAR_6 > VAR_5) {
     if ((int)VAR_6 > VAR_4)
  FUNC_1((VAR_2, " WARNING: Packet is continued in later TCP segments\n"));
     else
  FUNC_1((VAR_2, " WARNING: Short packet. Try increasing the snap length by %d\n",
      VAR_6 - VAR_5));
 } else
     FUNC_1((VAR_2, " "));
 FUNC_3(VAR_2, VAR_3, VAR_7 > VAR_3 + VAR_6 ? VAR_3 + VAR_6 : VAR_7);
    } else
 FUNC_1((VAR_2, " SMB-over-TCP packet:(raw data or continuation?)\n"));
    return;
trunc:
    FUNC_1((VAR_2, "%s", VAR_1));
}
