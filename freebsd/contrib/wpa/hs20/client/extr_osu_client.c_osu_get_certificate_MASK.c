
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int client_cert_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct hs20_osu_client*,char*) ;
 scalar_t__ FUNC_2 (struct hs20_osu_client*,char*) ;
 scalar_t__ FUNC_3 (struct hs20_osu_client*,char*,char*,char*) ;
 int * FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct hs20_osu_client*,char*,char*) ;
 char* FUNC_9 (int ,int *,char*) ;
 int FUNC_10 (int ,char*) ;
 char* FUNC_11 (int ,int *,int *) ;
 char* FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,char*) ;

int FUNC_14(struct hs20_osu_client *VAR_3, xml_node_t *VAR_4)
{
 xml_node_t *VAR_5;
 char *VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 char *VAR_9;
 int VAR_10 = -1;

 VAR_9 = FUNC_9(VAR_3->xml, VAR_4,
     "enrollmentProtocol");
 if (!VAR_9)
  return -1;
 FUNC_7(VAR_0, "getCertificate - enrollmentProtocol=%s", VAR_9);
 FUNC_8(VAR_3, "getCertificate - enrollmentProtocol=%s", VAR_9);
 if (FUNC_6(VAR_9, "EST") != 0) {
  FUNC_7(VAR_0, "Unsupported enrollmentProtocol");
  FUNC_10(VAR_3->xml, VAR_9);
  return -1;
 }
 FUNC_10(VAR_3->xml, VAR_9);

 VAR_5 = FUNC_4(VAR_3->xml, VAR_4, "enrollmentServerURI");
 if (VAR_5 == ((void*)0)) {
  FUNC_7(VAR_0, "Could not find enrollmentServerURI node");
  FUNC_10(VAR_3->xml, VAR_9);
  return -1;
 }
 VAR_6 = FUNC_12(VAR_3->xml, VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_0, "Could not get URL text");
  return -1;
 }
 FUNC_7(VAR_0, "enrollmentServerURI: %s", VAR_6);
 FUNC_8(VAR_3, "enrollmentServerURI: %s", VAR_6);

 VAR_5 = FUNC_4(VAR_3->xml, VAR_4, "estUserID");
 if (VAR_5 == ((void*)0) && !VAR_3->client_cert_present) {
  FUNC_7(VAR_0, "Could not find estUserID node");
  goto fail;
 }
 if (VAR_5) {
  VAR_7 = FUNC_12(VAR_3->xml, VAR_5);
  if (VAR_7 == ((void*)0)) {
   FUNC_7(VAR_0, "Could not get estUserID text");
   goto fail;
  }
  FUNC_7(VAR_0, "estUserID: %s", VAR_7);
  FUNC_8(VAR_3, "estUserID: %s", VAR_7);
 }

 VAR_5 = FUNC_4(VAR_3->xml, VAR_4, "estPassword");
 if (VAR_5 == ((void*)0) && !VAR_3->client_cert_present) {
  FUNC_7(VAR_0, "Could not find estPassword node");
  goto fail;
 }
 if (VAR_5) {
  VAR_8 = FUNC_11(VAR_3->xml, VAR_5, ((void*)0));
  if (VAR_8 == ((void*)0)) {
   FUNC_7(VAR_0, "Could not get estPassword text");
   goto fail;
  }
  FUNC_7(VAR_0, "estPassword: %s", VAR_8);
 }

 FUNC_5("Cert", VAR_2);
 FUNC_0("Cert", VAR_2 | VAR_1);

 if (FUNC_2(VAR_3, VAR_6) < 0 ||
     FUNC_1(VAR_3, VAR_6) < 0 ||
     FUNC_3(VAR_3, VAR_6, VAR_7, VAR_8) < 0)
  goto fail;

 VAR_10 = 0;
fail:
 FUNC_13(VAR_3->xml, VAR_6);
 FUNC_13(VAR_3->xml, VAR_7);
 FUNC_13(VAR_3->xml, VAR_8);

 return VAR_10;
}
