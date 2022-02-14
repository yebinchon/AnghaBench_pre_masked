
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u_short ;
struct rip_netinfo {int rip_metric; int rip_dest; int rip_family; int rip_router; int rip_dest_mask; int rip_tag; } ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int const*,char*,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_3,
                   register const struct rip_netinfo *VAR_4)
{
 register u_short VAR_5;


 VAR_5 = FUNC_0(&VAR_4->rip_family);
 if (VAR_5 != VAR_0 && VAR_5 != 0) {
  FUNC_2((VAR_3, "\n\t AFI %s, ", FUNC_5(VAR_2, "Unknown (%u)", VAR_5)));
  FUNC_4(VAR_3, (const uint8_t *)&VAR_4->rip_family, "\n\t  ", VAR_1);
  return;
 }
 if (FUNC_0(&VAR_4->rip_tag) ||
     FUNC_1(&VAR_4->rip_dest_mask) ||
     FUNC_1(&VAR_4->rip_router)) {

                FUNC_4(VAR_3, (const uint8_t *)&VAR_4->rip_family, "\n\t  ", VAR_1);
  return;
 }
 if (VAR_5 == 0) {
  FUNC_2((VAR_3, "\n\t  AFI 0, %s, metric: %u",
   FUNC_3(VAR_3, &VAR_4->rip_dest),
   FUNC_1(&VAR_4->rip_metric)));
  return;
 }
 FUNC_2((VAR_3, "\n\t  %s, metric: %u",
               FUNC_3(VAR_3, &VAR_4->rip_dest),
        FUNC_1(&VAR_4->rip_metric)));
}
