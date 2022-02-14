
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct medsa_pkthdr {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (struct medsa_pkthdr const*) ;
 int FUNC_1 (struct medsa_pkthdr const*) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct medsa_pkthdr const*) ;
 int FUNC_5 (struct medsa_pkthdr const*) ;
 int FUNC_6 (struct medsa_pkthdr const*) ;
 int FUNC_7 (struct medsa_pkthdr const*) ;
 int FUNC_8 (struct medsa_pkthdr const*) ;



 int FUNC_9 (struct medsa_pkthdr const*) ;
 int FUNC_10 (struct medsa_pkthdr const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_12(netdissect_options *VAR_2,
   const struct medsa_pkthdr *VAR_3,
   u_int VAR_4)
{
 u_char VAR_5 = FUNC_8(VAR_3);

 FUNC_3((VAR_2, "%s",
    FUNC_11(VAR_1, "Unknown (%u)", VAR_5)));

 switch (VAR_5) {
 case 128:
  FUNC_3((VAR_2, ", %stagged", FUNC_7(VAR_3) ? "" : "un"));
  FUNC_3((VAR_2, ", dev.port:vlan %d.%d:%d",
     FUNC_5(VAR_3), FUNC_6(VAR_3), FUNC_10(VAR_3)));

  FUNC_3((VAR_2, ", %s",
     FUNC_11(VAR_0, "Unknown (%u)", FUNC_1(VAR_3))));
  if (FUNC_0(VAR_3))
   FUNC_3((VAR_2, ", CFI"));

  FUNC_3((VAR_2, ", pri %d: ", FUNC_4(VAR_3)));
  break;
 case 129:
  FUNC_3((VAR_2, ", %stagged", FUNC_7(VAR_3) ? "" : "un"));
  FUNC_3((VAR_2, ", dev.port:vlan %d.%d:%d",
     FUNC_5(VAR_3), FUNC_6(VAR_3), FUNC_10(VAR_3)));

  if (FUNC_0(VAR_3))
   FUNC_3((VAR_2, ", CFI"));

  FUNC_3((VAR_2, ", pri %d: ", FUNC_4(VAR_3)));
  break;
 case 130:
  FUNC_3((VAR_2, ", %stagged", FUNC_7(VAR_3) ? "" : "un"));
  if (FUNC_9(VAR_3))
   FUNC_3((VAR_2, ", dev.trunk:vlan %d.%d:%d",
      FUNC_5(VAR_3), FUNC_6(VAR_3), FUNC_10(VAR_3)));
  else
   FUNC_3((VAR_2, ", dev.port:vlan %d.%d:%d",
      FUNC_5(VAR_3), FUNC_6(VAR_3), FUNC_10(VAR_3)));

  if (FUNC_0(VAR_3))
   FUNC_3((VAR_2, ", CFI"));

  FUNC_3((VAR_2, ", pri %d: ", FUNC_4(VAR_3)));
  break;
 default:
  FUNC_2((const u_char *)VAR_3, VAR_4);
  return;
 }
}
