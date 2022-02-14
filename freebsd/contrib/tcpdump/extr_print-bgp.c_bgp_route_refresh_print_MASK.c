
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct bgp_route_refresh {int safi; int afi; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3,
                        const u_char *VAR_4, int VAR_5)
{
        const struct bgp_route_refresh *VAR_6;

 FUNC_2(VAR_4[0], VAR_0);


        if (VAR_5<VAR_0)
            return;

        VAR_6 = (const struct bgp_route_refresh *)VAR_4;

        FUNC_1((VAR_3, "\n\t  AFI %s (%u), SAFI %s (%u)",
               FUNC_4(VAR_1,"Unknown",


     FUNC_0(&VAR_6->afi)),
               FUNC_0(&VAR_6->afi),
               FUNC_4(VAR_2,"Unknown",
     VAR_6->safi),
               VAR_6->safi));

        if (VAR_3->ndo_vflag > 1) {
            FUNC_2(*VAR_4, VAR_5);
            FUNC_3(VAR_3, VAR_4, "\n\t  ", VAR_5);
        }

        return;
trunc:
 FUNC_1((VAR_3, "[|BGP]"));
}
