
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_int ;
typedef int u_char ;
struct medsa_pkthdr {int ether_type; } ;
struct lladdr_info {int dummy; } ;
struct TYPE_7__ {int ndo_suppress_default_print; scalar_t__ ndo_eflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct medsa_pkthdr const) ;
 int FUNC_4 (struct medsa_pkthdr const*) ;
 int FUNC_5 (struct medsa_pkthdr const*) ;
 int FUNC_6 (struct medsa_pkthdr const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,int const*,int,int,struct lladdr_info const*,struct lladdr_info const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (TYPE_1__*,int const*,int,int,struct lladdr_info const*,struct lladdr_info const*) ;
 int FUNC_9 (TYPE_1__*,struct medsa_pkthdr const*,int) ;
 int FUNC_10 (int ,char*,scalar_t__) ;
 int VAR_2 ;

void
FUNC_11(netdissect_options *VAR_3,
     const u_char *VAR_4, u_int VAR_5, u_int VAR_6,
     const struct lladdr_info *VAR_7, const struct lladdr_info *VAR_8)
{
 const struct medsa_pkthdr *VAR_9;
 u_short VAR_10;

 VAR_9 = (const struct medsa_pkthdr *)VAR_4;
 FUNC_3(*VAR_9);

 if (!VAR_3->ndo_eflag)
  FUNC_2((VAR_3, "MEDSA %d.%d:%d: ",
     FUNC_4(VAR_9), FUNC_5(VAR_9), FUNC_6(VAR_9)));
 else
  FUNC_9(VAR_3, VAR_9, VAR_6);

 VAR_4 += 8;
 VAR_5 -= 8;
 VAR_6 -= 8;

 VAR_10 = FUNC_0(&VAR_9->ether_type);
 if (VAR_10 <= VAR_0) {

  if (FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8) < 0) {

   if (!VAR_3->ndo_suppress_default_print)
    FUNC_1(VAR_4, VAR_6);
  }
 } else {
  if (VAR_3->ndo_eflag)
   FUNC_2((VAR_3, "ethertype %s (0x%04x) ",
      FUNC_10(VAR_1, "Unknown",
       VAR_10),
      VAR_10));
  if (FUNC_7(VAR_3, VAR_10, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8) == 0) {

   if (!VAR_3->ndo_eflag)
    FUNC_2((VAR_3, "ethertype %s (0x%04x) ",
       FUNC_10(VAR_1, "Unknown",
        VAR_10),
       VAR_10));

   if (!VAR_3->ndo_suppress_default_print)
    FUNC_1(VAR_4, VAR_6);
  }
 }
 return;
trunc:
 FUNC_2((VAR_3, "%s", VAR_2));
}
