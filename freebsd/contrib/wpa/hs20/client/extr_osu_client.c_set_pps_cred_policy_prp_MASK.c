
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int val ;
struct hs20_osu_client {int xml; int ifname; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,char*) ;
 scalar_t__ FUNC_2 (int ,int,char*,char*) ;
 int FUNC_3 (char*,int,char*,char*,int,int,char const*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*,...) ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct hs20_osu_client *VAR_1, int VAR_2,
        xml_node_t *VAR_3)
{
 xml_node_t *VAR_4;
 char *VAR_5 = ((void*)0), *VAR_6;
 char *VAR_7, *VAR_8 = ((void*)0);
 const char *VAR_9;
 char VAR_10[200];
 int VAR_11;

 VAR_4 = FUNC_1(VAR_1->xml, VAR_3, "Priority");
 if (VAR_4 == ((void*)0))
  return;
 VAR_7 = FUNC_7(VAR_1->xml, VAR_4);
 if (VAR_7 == ((void*)0))
  return;
 FUNC_6(VAR_0, "- Policy/PreferredRoamingPartnerList/<X+>/Priority = %s",
     VAR_7);
 VAR_11 = FUNC_0(VAR_7);
 FUNC_8(VAR_1->xml, VAR_7);

 VAR_4 = FUNC_1(VAR_1->xml, VAR_3, "Country");
 if (VAR_4) {
  VAR_8 = FUNC_7(VAR_1->xml, VAR_4);
  if (VAR_8 == ((void*)0))
   return;
  VAR_9 = VAR_8;
  FUNC_6(VAR_0, "- Policy/PreferredRoamingPartnerList/<X+>/Country = %s",
      VAR_9);
 } else {
  VAR_9 = "*";
 }

 VAR_4 = FUNC_1(VAR_1->xml, VAR_3, "FQDN_Match");
 if (VAR_4 == ((void*)0))
  goto out;
 VAR_5 = FUNC_7(VAR_1->xml, VAR_4);
 if (VAR_5 == ((void*)0))
  goto out;
 FUNC_6(VAR_0, "- Policy/PreferredRoamingPartnerList/<X+>/FQDN_Match = %s",
     VAR_5);
 VAR_6 = FUNC_5(VAR_5, ',');
 if (VAR_6 == ((void*)0))
  goto out;
 *VAR_6++ = '\0';

 FUNC_3(VAR_10, sizeof(VAR_10), "%s,%d,%d,%s", VAR_5,
   FUNC_4(VAR_6, "includeSubdomains") != 0, VAR_11, VAR_9);
 if (FUNC_2(VAR_1->ifname, VAR_2, "roaming_partner", VAR_10) < 0)
  FUNC_6(VAR_0, "Failed to set cred roaming_partner");
out:
 FUNC_8(VAR_1->xml, VAR_8);
 FUNC_8(VAR_1->xml, VAR_5);
}
