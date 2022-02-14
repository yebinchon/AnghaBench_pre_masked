
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; scalar_t__ server_dnsname_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct hs20_osu_client*,char*,int *) ;
 int FUNC_2 (struct hs20_osu_client*,char*) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int *,char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (struct hs20_osu_client*,int *,char*) ;
 int FUNC_10 (struct hs20_osu_client*,char*) ;
 int FUNC_11 (char*,size_t,char*,char*) ;
 char* FUNC_12 (char*,char) ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (char const*,char*,int) ;
 int * FUNC_16 (int ,int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (struct hs20_osu_client*,char*,char const*) ;
 int FUNC_21 (struct hs20_osu_client*,char*,...) ;
 int FUNC_22 (int ,int *) ;
 int * FUNC_23 (int ,char*) ;
 char* FUNC_24 (int ,int *) ;
 char* FUNC_25 (int ,int *) ;
 int FUNC_26 (int ,char*) ;

int FUNC_27(struct hs20_osu_client *VAR_6, const char *VAR_7,
      xml_node_t *VAR_8, char *VAR_9, size_t VAR_10)
{
 char *VAR_11;
 char *VAR_12, *VAR_13;
 xml_node_t *VAR_14, *VAR_15, *VAR_16;
 const char *VAR_17;
 int VAR_18;

 if (FUNC_15(VAR_7, "./Wi-Fi/", 8) != 0) {
  FUNC_19(VAR_2, "Unsupported location for addMO to add PPS MO: '%s'",
      VAR_7);
  FUNC_20(VAR_6, "Unsupported location for addMO to add PPS MO: '%s'",
        VAR_7);
  return -1;
 }

 VAR_12 = FUNC_13(VAR_7 + 8);
 if (VAR_12 == ((void*)0))
  return -1;
 VAR_13 = FUNC_12(VAR_12, '/');
 if (VAR_13) {
  if (FUNC_8(VAR_13, "/PerProviderSubscription") != 0) {
   FUNC_19(VAR_2, "Unsupported location for addMO to add PPS MO (extra directory): '%s'",
       VAR_7);
   FUNC_20(VAR_6, "Unsupported location for addMO to "
         "add PPS MO (extra directory): '%s'", VAR_7);
   FUNC_3(VAR_12);
   return -1;
  }
  *VAR_13 = '\0';
 }
 FUNC_19(VAR_2, "SP FQDN: %s", VAR_12);

 if (!FUNC_10(VAR_6, VAR_12)) {
  FUNC_19(VAR_2,
      "FQDN '%s' for new PPS MO did not have suffix match with server's dNSName values, count: %d",
      VAR_12, (int) VAR_6->server_dnsname_count);
  FUNC_20(VAR_6, "FQDN '%s' for new PPS MO did not have suffix match with server's dNSName values",
        VAR_12);
  FUNC_3(VAR_12);
  return -1;
 }

 if (!FUNC_18(VAR_12)) {
  FUNC_19(VAR_2, "Invalid FQDN '%s'", VAR_12);
  FUNC_20(VAR_6, "Invalid FQDN '%s'", VAR_12);
  FUNC_3(VAR_12);
  return -1;
 }

 FUNC_5("SP", VAR_4);
 FUNC_11(VAR_9, VAR_10, "SP/%s", VAR_12);
 if (FUNC_5(VAR_9, VAR_4) < 0) {
  if (VAR_5 != VAR_0) {
   int VAR_19 = VAR_5;
   FUNC_19(VAR_2, "mkdir(%s) failed: %s",
       VAR_9, FUNC_14(VAR_19));
   FUNC_3(VAR_12);
   return -1;
  }
 }

 FUNC_0("SP", VAR_4 | VAR_3);
 FUNC_0(VAR_9, VAR_4 | VAR_3);

 FUNC_11(VAR_9, VAR_10, "SP/%s/pps.xml", VAR_12);

 if (FUNC_7(VAR_9)) {
  FUNC_19(VAR_2, "PPS file '%s' exists - reject addMO",
      VAR_9);
  FUNC_20(VAR_6, "PPS file '%s' exists - reject addMO",
        VAR_9);
  FUNC_3(VAR_12);
  return -2;
 }
 FUNC_19(VAR_2, "Using PPS file: %s", VAR_9);

 VAR_11 = FUNC_25(VAR_6->xml, VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_19(VAR_2, "Could not extract MO text");
  FUNC_3(VAR_12);
  return -1;
 }
 FUNC_19(VAR_1, "[hs20] addMO text: '%s'", VAR_11);

 VAR_14 = FUNC_23(VAR_6->xml, VAR_11);
 FUNC_26(VAR_6->xml, VAR_11);
 if (VAR_14 == ((void*)0)) {
  FUNC_19(VAR_2, "[hs20] Could not parse addMO text");
  FUNC_3(VAR_12);
  return -1;
 }

 VAR_15 = FUNC_16(VAR_6->xml, VAR_14);
 if (VAR_15 == ((void*)0)) {
  FUNC_19(VAR_2, "[hs20] Could not parse addMO TNDS text");
  FUNC_3(VAR_12);
  return -1;
 }

 FUNC_1(VAR_6, "Parsed TNDS", VAR_15);

 VAR_17 = FUNC_24(VAR_6->xml, VAR_15);
 if (FUNC_8(VAR_17, "PerProviderSubscription") != 0) {
  FUNC_19(VAR_2, "[hs20] Unexpected PPS MO root node name '%s'",
      VAR_17);
  FUNC_3(VAR_12);
  return -1;
 }

 VAR_16 = FUNC_4(VAR_6->xml, VAR_15,
         "Credential/DigitalCertificate/"
         "CertSHA256Fingerprint");
 if (VAR_16 && FUNC_9(VAR_6, VAR_16, VAR_12) < 0) {
  FUNC_22(VAR_6->xml, VAR_15);
  FUNC_3(VAR_12);
  return -1;
 }
 FUNC_3(VAR_12);

 if (FUNC_6(VAR_6->xml, VAR_9, VAR_15) < 0) {
  FUNC_19(VAR_2, "Could not write MO to file");
  FUNC_22(VAR_6->xml, VAR_15);
  return -1;
 }
 FUNC_22(VAR_6->xml, VAR_15);

 FUNC_19(VAR_2, "A new PPS MO added as '%s'", VAR_9);
 FUNC_21(VAR_6, "A new PPS MO added as '%s'", VAR_9);

 VAR_18 = FUNC_2(VAR_6, VAR_9);
 if (VAR_18 < 0) {
  FUNC_19(VAR_2, "Remove invalid PPS MO file");
  FUNC_21(VAR_6, "Remove invalid PPS MO file");
  FUNC_17(VAR_9);
 }

 return VAR_18;
}
