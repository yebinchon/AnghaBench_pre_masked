
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bgp_notification {int const bgpn_major; int const bgpn_minor; } ;
typedef int netdissect_options ;


 int VAR_0 ;






 int const VAR_1 ;
 int const FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct bgp_notification*,int const*,int) ;
 int FUNC_5 (int ,char*,int const) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_11,
                       const u_char *VAR_12, int VAR_13)
{
 struct bgp_notification VAR_14;
 const u_char *VAR_15;

 FUNC_3(VAR_12[0], VAR_0);
 FUNC_4(&VAR_14, VAR_12, VAR_0);


        if (VAR_13<VAR_0)
            return;

 FUNC_2((VAR_11, ", %s (%u)",
        FUNC_5(VAR_3, "Unknown Error",
     VAR_14.bgpn_major),
        VAR_14.bgpn_major));

        switch (VAR_14.bgpn_major) {

        case 130:
            FUNC_2((VAR_11, ", subcode %s (%u)",
     FUNC_5(VAR_7, "Unknown",
         VAR_14.bgpn_minor),
     VAR_14.bgpn_minor));
            break;
        case 129:
            FUNC_2((VAR_11, ", subcode %s (%u)",
     FUNC_5(VAR_8, "Unknown",
         VAR_14.bgpn_minor),
     VAR_14.bgpn_minor));
            break;
        case 128:
            FUNC_2((VAR_11, ", subcode %s (%u)",
     FUNC_5(VAR_9, "Unknown",
         VAR_14.bgpn_minor),
     VAR_14.bgpn_minor));
            break;
        case 131:
            FUNC_2((VAR_11, " subcode %s (%u)",
     FUNC_5(VAR_6, "Unknown",
         VAR_14.bgpn_minor),
     VAR_14.bgpn_minor));
            break;
        case 133:
            FUNC_2((VAR_11, " subcode %s (%u)",
     FUNC_5(VAR_4, "Unknown",
         VAR_14.bgpn_minor),
     VAR_14.bgpn_minor));
            break;
        case 132:
            FUNC_2((VAR_11, ", subcode %s (%u)",
     FUNC_5(VAR_5, "Unknown",
         VAR_14.bgpn_minor),
     VAR_14.bgpn_minor));




     if(VAR_14.bgpn_minor == VAR_1 && VAR_13 >= VAR_0 + 7) {
  VAR_15 = VAR_12 + VAR_0;
  FUNC_3(*VAR_15, 7);
  FUNC_2((VAR_11, ", AFI %s (%u), SAFI %s (%u), Max Prefixes: %u",
         FUNC_5(VAR_2, "Unknown",
      FUNC_0(VAR_15)),
         FUNC_0(VAR_15),
         FUNC_5(VAR_10, "Unknown", *(VAR_15+2)),
         *(VAR_15+2),
         FUNC_1(VAR_15+3)));
     }
            break;
        default:
            break;
        }

 return;
trunc:
 FUNC_2((VAR_11, "[|BGP]"));
}
