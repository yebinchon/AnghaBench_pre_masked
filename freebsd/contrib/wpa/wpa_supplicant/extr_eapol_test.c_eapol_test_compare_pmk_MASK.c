
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct eapol_test_data {int authenticator_pmk_len; size_t authenticator_eap_key_name_len; int const* authenticator_eap_key_name; TYPE_1__* wpa_s; int num_mppe_ok; scalar_t__ no_mppe_keys; int num_mppe_mismatch; scalar_t__ radius_access_accept_received; int const* authenticator_pmk; } ;
struct TYPE_2__ {int eapol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*,int) ;
 int const* FUNC_1 (int ,size_t*) ;
 scalar_t__ FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int const*,size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eapol_test_data *VAR_3)
{
 u8 VAR_4[VAR_2];
 int VAR_5 = 1;
 const u8 *VAR_6;
 size_t VAR_7;

 if (FUNC_0(VAR_3->wpa_s->eapol, VAR_4, VAR_2) == 0) {
  FUNC_4(VAR_0, "PMK from EAPOL", VAR_4, VAR_2);
  if (FUNC_2(VAR_4, VAR_3->authenticator_pmk, VAR_2) != 0) {
   FUNC_3("WARNING: PMK mismatch\n");
   FUNC_4(VAR_0, "PMK from AS",
        VAR_3->authenticator_pmk, VAR_2);
  } else if (VAR_3->radius_access_accept_received)
   VAR_5 = 0;
 } else if (VAR_3->authenticator_pmk_len == 16 &&
     FUNC_0(VAR_3->wpa_s->eapol, VAR_4, 16) == 0) {
  FUNC_4(VAR_0, "LEAP PMK from EAPOL", VAR_4, 16);
  if (FUNC_2(VAR_4, VAR_3->authenticator_pmk, 16) != 0) {
   FUNC_3("WARNING: PMK mismatch\n");
   FUNC_4(VAR_0, "PMK from AS",
        VAR_3->authenticator_pmk, 16);
  } else if (VAR_3->radius_access_accept_received)
   VAR_5 = 0;
 } else if (VAR_3->radius_access_accept_received && VAR_3->no_mppe_keys) {

  VAR_5 = 0;
 }

 if (VAR_5 && !VAR_3->no_mppe_keys)
  VAR_3->num_mppe_mismatch++;
 else if (!VAR_3->no_mppe_keys)
  VAR_3->num_mppe_ok++;

 VAR_6 = FUNC_1(VAR_3->wpa_s->eapol, &VAR_7);
 if (!VAR_6)
  return VAR_5;
 if (VAR_3->authenticator_eap_key_name_len == 0) {
  FUNC_5(VAR_1, "No EAP-Key-Name received from server");
  return VAR_5;
 }

 if (VAR_3->authenticator_eap_key_name_len != VAR_7 ||
     FUNC_2(VAR_3->authenticator_eap_key_name, VAR_6, VAR_7) != 0)
 {
  FUNC_5(VAR_1,
      "Locally derived EAP Session-Id does not match EAP-Key-Name from server");
  FUNC_4(VAR_0, "EAP Session-Id", VAR_6, VAR_7);
  FUNC_4(VAR_0, "EAP-Key-Name from server",
       VAR_3->authenticator_eap_key_name,
       VAR_3->authenticator_eap_key_name_len);
 } else {
  FUNC_5(VAR_1,
      "Locally derived EAP Session-Id matches EAP-Key-Name from server");
 }

 return VAR_5;
}
