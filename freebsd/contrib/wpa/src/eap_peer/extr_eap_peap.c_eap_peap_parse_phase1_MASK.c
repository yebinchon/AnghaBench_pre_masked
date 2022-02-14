
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_peap_data {int force_new_label; int peap_outer_success; int soh; int crypto_binding; int force_peap_version; int peap_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct eap_peap_data *VAR_4,
      const char *VAR_5)
{
 const char *VAR_6;

 VAR_6 = FUNC_1(VAR_5, "peapver=");
 if (VAR_6) {
  VAR_4->force_peap_version = FUNC_0(VAR_6 + 8);
  VAR_4->peap_version = VAR_4->force_peap_version;
  FUNC_2(VAR_0, "EAP-PEAP: Forced PEAP version %d",
      VAR_4->force_peap_version);
 }

 if (FUNC_1(VAR_5, "peaplabel=1")) {
  VAR_4->force_new_label = 1;
  FUNC_2(VAR_0, "EAP-PEAP: Force new label for key "
      "derivation");
 }

 if (FUNC_1(VAR_5, "peap_outer_success=0")) {
  VAR_4->peap_outer_success = 0;
  FUNC_2(VAR_0, "EAP-PEAP: terminate authentication on "
      "tunneled EAP-Success");
 } else if (FUNC_1(VAR_5, "peap_outer_success=1")) {
  VAR_4->peap_outer_success = 1;
  FUNC_2(VAR_0, "EAP-PEAP: send tunneled EAP-Success "
      "after receiving tunneled EAP-Success");
 } else if (FUNC_1(VAR_5, "peap_outer_success=2")) {
  VAR_4->peap_outer_success = 2;
  FUNC_2(VAR_0, "EAP-PEAP: send PEAP/TLS ACK after "
      "receiving tunneled EAP-Success");
 }

 if (FUNC_1(VAR_5, "crypto_binding=0")) {
  VAR_4->crypto_binding = VAR_1;
  FUNC_2(VAR_0, "EAP-PEAP: Do not use cryptobinding");
 } else if (FUNC_1(VAR_5, "crypto_binding=1")) {
  VAR_4->crypto_binding = VAR_2;
  FUNC_2(VAR_0, "EAP-PEAP: Optional cryptobinding");
 } else if (FUNC_1(VAR_5, "crypto_binding=2")) {
  VAR_4->crypto_binding = VAR_3;
  FUNC_2(VAR_0, "EAP-PEAP: Require cryptobinding");
 }
}
