
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; int xml; } ;
typedef int dir ;
typedef int buf ;


 int VAR_0 ;
 int * FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(struct hs20_osu_client *VAR_1, int VAR_2,
          xml_node_t *VAR_3, const char *VAR_4, int VAR_5)
{
 char *VAR_6 = FUNC_6(VAR_1->xml, VAR_3);
 char VAR_7[200], VAR_8[200];
 int VAR_9;

 if (VAR_6 == ((void*)0))
  return;

 FUNC_5(VAR_0, "- Credential/Realm = %s", VAR_6);
 if (FUNC_4(VAR_1->ifname, VAR_2, "realm", VAR_6) < 0)
  FUNC_5(VAR_0, "Failed to set cred realm");
 FUNC_7(VAR_1->xml, VAR_6);

 if (VAR_5)
  return;

 if (FUNC_0(VAR_8, sizeof(VAR_8)) == ((void*)0))
  return;
 VAR_9 = FUNC_2(VAR_7, sizeof(VAR_7), "%s/SP/%s/aaa-ca.pem", VAR_8, VAR_4);
 if (FUNC_3(sizeof(VAR_7), VAR_9))
  return;
 if (FUNC_1(VAR_7)) {
  if (FUNC_4(VAR_1->ifname, VAR_2, "ca_cert", VAR_7) < 0) {
   FUNC_5(VAR_0, "Failed to set CA cert");
  }
 }
}
