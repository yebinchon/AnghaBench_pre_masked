
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int ifname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct hs20_osu_client *VAR_1,
            int VAR_2, xml_node_t *VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_1->xml, VAR_3);

 if (VAR_4 == ((void*)0))
  return;

 FUNC_2(VAR_0, "- Credential/CheckAAAServerCertStatus = %s", VAR_4);
 if (FUNC_0(VAR_4, "true") == 0 &&
     FUNC_1(VAR_1->ifname, VAR_2, "ocsp", "2") < 0)
  FUNC_2(VAR_0, "Failed to set cred ocsp");
 FUNC_4(VAR_1->xml, VAR_4);
}
