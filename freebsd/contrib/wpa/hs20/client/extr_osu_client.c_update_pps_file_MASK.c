
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; int fqdn; scalar_t__ client_cert_present; } ;
typedef int backup ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int *,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct hs20_osu_client*,int *,int ) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*,int,char*,char const*) ;
 int FUNC_9 (int ,char*,...) ;
 char* FUNC_10 (int ,int *) ;

int FUNC_11(struct hs20_osu_client *VAR_3, const char *VAR_4,
      xml_node_t *VAR_5)
{
 char *VAR_6;
 FILE *VAR_7;
 char VAR_8[300];

 if (VAR_3->client_cert_present) {
  xml_node_t *VAR_9;
  VAR_9 = FUNC_4(VAR_3->xml, VAR_5,
          "Credential/DigitalCertificate/"
          "CertSHA256Fingerprint");
  if (VAR_9 && FUNC_5("Cert/est_cert.der") &&
      FUNC_6(VAR_3, VAR_9, VAR_3->fqdn) < 0) {
   FUNC_9(VAR_1, "EST certificate update processing failed on PPS MO update");
   return -1;
  }
 }

 FUNC_9(VAR_1, "Updating PPS MO %s", VAR_4);

 VAR_6 = FUNC_10(VAR_3->xml, VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_9(VAR_0, "No node found");
  return -1;
 }
 FUNC_9(VAR_2, "[hs20] Updated PPS: '%s'", VAR_6);

 FUNC_8(VAR_8, sizeof(VAR_8), "%s.bak", VAR_4);
 FUNC_7(VAR_4, VAR_8);
 VAR_7 = FUNC_1(VAR_4, "w");
 if (VAR_7 == ((void*)0)) {
  FUNC_9(VAR_1, "Could not write PPS");
  FUNC_7(VAR_8, VAR_4);
  FUNC_3(VAR_6);
  return -1;
 }
 FUNC_2(VAR_7, "%s\n", VAR_6);
 FUNC_0(VAR_7);

 FUNC_3(VAR_6);

 return 0;
}
