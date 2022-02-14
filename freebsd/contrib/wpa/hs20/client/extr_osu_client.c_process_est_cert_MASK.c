
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int u8 ;
struct hs20_osu_client {int xml; } ;
typedef int digest1 ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,size_t,int,int *) ;
 scalar_t__ FUNC_3 (char*,int *,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 char* FUNC_6 (char*,size_t*) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,int const**,size_t*,int *) ;
 char const* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct hs20_osu_client*,char*) ;
 char* FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static int FUNC_17(struct hs20_osu_client *VAR_3, xml_node_t *VAR_4,
       const char *VAR_5)
{
 u8 VAR_6[VAR_1], VAR_7[VAR_1];
 char *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11;
 char *VAR_12;
 char VAR_13[200];

 FUNC_13(VAR_0, "PPS for certificate credential - fqdn=%s", VAR_5);

 VAR_12 = FUNC_15(VAR_3->xml, VAR_4);
 if (VAR_12 == ((void*)0))
  return -1;
 if (FUNC_3(VAR_12, VAR_6, VAR_1) < 0) {
  FUNC_13(VAR_0, "Invalid SHA256 hash value");
  FUNC_14(VAR_3, "Invalid client certificate SHA256 hash value in PPS");
  FUNC_16(VAR_3->xml, VAR_12);
  return -1;
 }
 FUNC_16(VAR_3->xml, VAR_12);

 VAR_8 = FUNC_6("Cert/est_cert.der", &VAR_10);
 if (VAR_8 == ((void*)0)) {
  FUNC_13(VAR_0, "Could not find client certificate from EST");
  FUNC_14(VAR_3, "Could not find client certificate from EST");
  return -1;
 }

 if (FUNC_10(1, (const u8 **) &VAR_8, &VAR_10, VAR_7) < 0) {
  FUNC_4(VAR_8);
  return -1;
 }
 FUNC_4(VAR_8);

 if (FUNC_5(VAR_6, VAR_7, sizeof(VAR_6)) != 0) {
  FUNC_13(VAR_0, "Client certificate from EST does not match fingerprint from PPS MO");
  FUNC_14(VAR_3, "Client certificate from EST does not match fingerprint from PPS MO");
  return -1;
 }

 FUNC_13(VAR_0, "Client certificate from EST matches PPS MO");
 FUNC_12("Cert/est_cert.der");

 FUNC_7(VAR_13, sizeof(VAR_13), "SP/%s/client-ca.pem", VAR_5);
 if (FUNC_8("Cert/est-cacerts.pem", VAR_13) < 0) {
  FUNC_13(VAR_0, "Could not move est-cacerts.pem to client-ca.pem: %s",
      FUNC_11(VAR_2));
  return -1;
 }
 VAR_9 = FUNC_6(VAR_13, &VAR_11);

 FUNC_7(VAR_13, sizeof(VAR_13), "SP/%s/client-cert.pem", VAR_5);
 if (FUNC_8("Cert/est_cert.pem", VAR_13) < 0) {
  FUNC_13(VAR_0, "Could not move est_cert.pem to client-cert.pem: %s",
      FUNC_11(VAR_2));
  FUNC_4(VAR_9);
  return -1;
 }

 if (VAR_9) {
  FILE *VAR_14 = FUNC_1(VAR_13, "a");
  if (VAR_14) {
   FUNC_2(VAR_9, VAR_11, 1, VAR_14);
   FUNC_0(VAR_14);
  }
  FUNC_4(VAR_9);
 }

 FUNC_7(VAR_13, sizeof(VAR_13), "SP/%s/client-key.pem", VAR_5);
 if (FUNC_8("Cert/privkey-plain.pem", VAR_13) < 0) {
  FUNC_13(VAR_0, "Could not move privkey-plain.pem to client-key.pem: %s",
      FUNC_11(VAR_2));
  return -1;
 }

 FUNC_12("Cert/est-req.b64");
 FUNC_12("Cert/est-req.pem");
 FUNC_9("Cert");

 return 0;
}
