
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {char const* fqdn; char const* ca_fname; int client_cert_present; int xml; int ifname; } ;
typedef int pps_fname_buf ;
typedef int client_key_buf ;
typedef int client_cert_buf ;
typedef int ca_fname_buf ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (struct hs20_osu_client*,int *,char*,char**,char**) ;
 scalar_t__ FUNC_2 (int ,char*,char*,int) ;
 int * FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct hs20_osu_client*,char const*,char const*,char*,char*,char*,char*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 void* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;
 int FUNC_12 (struct hs20_osu_client*,char const*,char const*,char*,char*,char*,char*,int *) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ,int) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct hs20_osu_client*,char*) ;
 int FUNC_17 (int ,int *) ;
 char* FUNC_18 (int ,int *) ;
 int FUNC_19 (int ,char*) ;

__attribute__((used)) static int FUNC_20(struct hs20_osu_client *VAR_2, const char *VAR_3,
         const char *VAR_4, const char *VAR_5)
{
 xml_node_t *VAR_6, *VAR_7;
 char VAR_8[300];
 char VAR_9[200];
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 char VAR_13[200];
 char *VAR_14 = ((void*)0);
 char VAR_15[200];
 char *VAR_16 = ((void*)0);
 int VAR_17;

 FUNC_15(VAR_1, "Subscription remediation requested with Server URL: %s",
     VAR_3);

 if (!VAR_4) {
  char VAR_18[256];
  FUNC_15(VAR_1, "Determining PPS file based on Home SP information");
  if (FUNC_11(VAR_3, "fqdn=", 5) == 0) {
   FUNC_15(VAR_1, "Use requested FQDN from command line");
   FUNC_7(VAR_18, sizeof(VAR_18), "%s", VAR_3 + 5);
   VAR_3 = ((void*)0);
  } else if (FUNC_2(VAR_2->ifname, "provisioning_sp", VAR_18,
       sizeof(VAR_18)) < 0) {
   FUNC_15(VAR_1, "Could not get provisioning Home SP FQDN from wpa_supplicant");
   return -1;
  }
  FUNC_6(VAR_2->fqdn);
  VAR_2->fqdn = FUNC_10(VAR_18);
  if (VAR_2->fqdn == ((void*)0))
   return -1;
  FUNC_15(VAR_1, "Home SP FQDN for current credential: %s",
      VAR_18);
  FUNC_7(VAR_8, sizeof(VAR_8),
       "SP/%s/pps.xml", VAR_2->fqdn);
  VAR_4 = VAR_8;

  FUNC_7(VAR_9, sizeof(VAR_9), "SP/%s/ca.pem",
       VAR_2->fqdn);
  VAR_5 = VAR_9;
 }

 if (!FUNC_5(VAR_4)) {
  FUNC_15(VAR_1, "PPS file '%s' does not exist or is not accessible",
      VAR_4);
  return -1;
 }
 FUNC_15(VAR_1, "Using PPS file: %s", VAR_4);

 if (VAR_5 && !FUNC_5(VAR_5)) {
  FUNC_15(VAR_1, "CA file '%s' does not exist or is not accessible",
      VAR_5);
  return -1;
 }
 FUNC_15(VAR_1, "Using server trust root: %s", VAR_5);
 VAR_2->ca_fname = VAR_5;

 VAR_6 = FUNC_3(VAR_2->xml, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_15(VAR_1, "Could not read PPS MO");
  return -1;
 }

 if (!VAR_2->fqdn) {
  char *VAR_19;
  VAR_7 = FUNC_0(VAR_2->xml, VAR_6, "HomeSP/FQDN");
  if (VAR_7 == ((void*)0)) {
   FUNC_15(VAR_1, "No HomeSP/FQDN found from PPS");
   return -1;
  }
  VAR_19 = FUNC_18(VAR_2->xml, VAR_7);
  if (VAR_19 == ((void*)0)) {
   FUNC_15(VAR_1, "No HomeSP/FQDN text found from PPS");
   return -1;
  }
  VAR_2->fqdn = FUNC_10(VAR_19);
  FUNC_19(VAR_2->xml, VAR_19);
  if (!VAR_2->fqdn) {
   FUNC_15(VAR_1, "No FQDN known");
   return -1;
  }
 }

 VAR_7 = FUNC_0(VAR_2->xml, VAR_6,
         "SubscriptionUpdate/UpdateMethod");
 if (VAR_7) {
  char *VAR_20;
  VAR_20 = FUNC_18(VAR_2->xml, VAR_7);
  if (VAR_20 && FUNC_8(VAR_20, "OMA-DM-ClientInitiated") == 0)
   VAR_17 = 0;
  else
   VAR_17 = 1;
 } else {
  FUNC_15(VAR_1, "No UpdateMethod specified - assume SPP");
  VAR_17 = 1;
 }

 FUNC_1(VAR_2, VAR_6, "SubscriptionUpdate/UsernamePassword",
      &VAR_10, &VAR_11);
 if (VAR_10)
  FUNC_15(VAR_1, "Using username: %s", VAR_10);
 if (VAR_11)
  FUNC_15(VAR_0, "Using password: %s", VAR_11);

 if (VAR_10 == ((void*)0) && VAR_11 == ((void*)0) &&
     FUNC_0(VAR_2->xml, VAR_6, "Credential/DigitalCertificate")) {
  FUNC_15(VAR_1, "Using client certificate");
  FUNC_7(VAR_13, sizeof(VAR_13),
       "SP/%s/client-cert.pem", VAR_2->fqdn);
  VAR_14 = VAR_13;
  FUNC_7(VAR_15, sizeof(VAR_15),
       "SP/%s/client-key.pem", VAR_2->fqdn);
  VAR_16 = VAR_15;
  VAR_2->client_cert_present = 1;
 }

 VAR_7 = FUNC_0(VAR_2->xml, VAR_6, "SubscriptionUpdate/URI");
 if (VAR_7) {
  VAR_12 = FUNC_18(VAR_2->xml, VAR_7);
  if (VAR_12 &&
      (!VAR_3 || FUNC_9(VAR_3, VAR_12) != 0)) {
   FUNC_15(VAR_1, "Override sub rem URI based on PPS: %s",
       VAR_12);
   VAR_3 = VAR_12;
  }
 }
 if (!VAR_3) {
  FUNC_15(VAR_1, "Server URL not known");
  return -1;
 }

 FUNC_16(VAR_2, "Wait for IP address for subscriptiom remediation");
 FUNC_15(VAR_1, "Wait for IP address before starting subscription remediation");

 if (FUNC_14(VAR_2->ifname, 15) < 0) {
  FUNC_15(VAR_1, "Could not get IP address for WLAN - try connection anyway");
 }

 if (VAR_17)
  FUNC_12(VAR_2, VAR_3, VAR_4,
       VAR_14, VAR_16,
       VAR_10, VAR_11, VAR_6);
 else
  FUNC_4(VAR_2, VAR_3, VAR_4,
          VAR_14, VAR_16,
          VAR_10, VAR_11, VAR_6);

 FUNC_19(VAR_2->xml, VAR_12);
 FUNC_19(VAR_2->xml, VAR_10);
 FUNC_13(VAR_11);
 FUNC_17(VAR_2->xml, VAR_6);
 return 0;
}
