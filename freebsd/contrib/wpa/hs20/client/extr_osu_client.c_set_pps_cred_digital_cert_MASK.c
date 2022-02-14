
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; } ;
typedef int dir ;
typedef int buf ;


 int VAR_0 ;
 int * FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct hs20_osu_client *VAR_1, int VAR_2,
          xml_node_t *VAR_3, const char *VAR_4)
{
 char VAR_5[200], VAR_6[200];
 int VAR_7;

 FUNC_5(VAR_0, "- Credential/DigitalCertificate");

 if (FUNC_0(VAR_6, sizeof(VAR_6)) == ((void*)0))
  return;


 if (FUNC_4(VAR_1->ifname, VAR_2, "username", "cert") < 0) {
  FUNC_5(VAR_0, "Failed to set username");
 }

 VAR_7 = FUNC_2(VAR_5, sizeof(VAR_5), "%s/SP/%s/client-cert.pem", VAR_6,
     VAR_4);
 if (FUNC_3(sizeof(VAR_5), VAR_7))
  return;
 if (FUNC_1(VAR_5)) {
  if (FUNC_4(VAR_1->ifname, VAR_2, "client_cert", VAR_5) < 0) {
   FUNC_5(VAR_0, "Failed to set client_cert");
  }
 }

 VAR_7 = FUNC_2(VAR_5, sizeof(VAR_5), "%s/SP/%s/client-key.pem", VAR_6,
     VAR_4);
 if (FUNC_3(sizeof(VAR_5), VAR_7))
  return;
 if (FUNC_1(VAR_5)) {
  if (FUNC_4(VAR_1->ifname, VAR_2, "private_key", VAR_5) < 0) {
   FUNC_5(VAR_0, "Failed to set private_key");
  }
 }
}
