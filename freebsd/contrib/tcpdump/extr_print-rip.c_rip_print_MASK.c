
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct rip_netinfo {int dummy; } ;
struct rip {int rip_vers; int rip_cmd; } ;
struct TYPE_7__ {int ndo_vflag; int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;






 int FUNC_1 (TYPE_1__*,int const*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,struct rip_netinfo const*) ;
 int FUNC_3 (TYPE_1__*,struct rip_netinfo const*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;

void
FUNC_5(netdissect_options *VAR_2,
          const u_char *VAR_3, u_int VAR_4)
{
 register const struct rip *VAR_5;
 register const struct rip_netinfo *VAR_6;
 register u_int VAR_7, VAR_8;

 if (VAR_2->ndo_snapend < VAR_3) {
  FUNC_0((VAR_2, " %s", VAR_1));
  return;
 }
 VAR_7 = VAR_2->ndo_snapend - VAR_3;
 if (VAR_7 > VAR_4)
  VAR_7 = VAR_4;
 if (VAR_7 < sizeof(*VAR_5)) {
  FUNC_0((VAR_2, " %s", VAR_1));
  return;
 }
 VAR_7 -= sizeof(*VAR_5);

 VAR_5 = (const struct rip *)VAR_3;

 FUNC_0((VAR_2, "%sRIPv%u",
               (VAR_2->ndo_vflag >= 1) ? "\n\t" : "",
               VAR_5->rip_vers));

 switch (VAR_5->rip_vers) {
 case 0:
                FUNC_1(VAR_2, (const uint8_t *)&VAR_5->rip_cmd, "\n\t", VAR_4);
  break;
 default:

                FUNC_0((VAR_2, ", %s, length: %u",
                       FUNC_4(VAR_0,
                               "unknown command (%u)",
                               VAR_5->rip_cmd),
                       VAR_4));

                if (VAR_2->ndo_vflag < 1)
                    return;

  switch (VAR_5->rip_cmd) {
  case 131:
  case 130:
   VAR_8 = VAR_4 / sizeof(*VAR_6);
   FUNC_0((VAR_2, ", routes: %u%s", VAR_8, VAR_5->rip_vers == 2 ? " or less" : ""));
   VAR_6 = (const struct rip_netinfo *)(VAR_5 + 1);
   for (; VAR_7 >= sizeof(*VAR_6); ++VAR_6) {
    if (VAR_5->rip_vers == 1)
    {
     FUNC_2(VAR_2, VAR_6);
     VAR_7 -= sizeof(*VAR_6);
    }
    else if (VAR_5->rip_vers == 2)
     VAR_7 -= FUNC_3(VAR_2, VAR_6, VAR_7);
                                else
                                    break;
   }
   if (VAR_7)
    FUNC_0((VAR_2, "%s", VAR_1));
   break;

  case 129:
  case 133:
  case 132:
   break;

  case 128:

         default:
                    if (VAR_2->ndo_vflag <= 1) {
                        if(!FUNC_1(VAR_2, (const uint8_t *)VAR_5, "\n\t", VAR_4))
                            return;
                    }
                    break;
                }

                if (VAR_2->ndo_vflag> 1) {
                    if(!FUNC_1(VAR_2, (const uint8_t *)VAR_5, "\n\t", VAR_4))
                        return;
                }
        }
}
