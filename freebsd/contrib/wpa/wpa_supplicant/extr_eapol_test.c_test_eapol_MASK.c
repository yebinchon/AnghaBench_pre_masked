
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * eapol; int scard; TYPE_1__* conf; struct wpa_ssid* current_ssid; int wpa; int key_mgmt; } ;
struct wpa_ssid {int eap; int eap_workaround; } ;
struct wpa_sm_ctx {int cert_in_cb; int get_state; struct wpa_supplicant* msg_ctx; struct eapol_test_data* ctx; int set_anon_id; int cert_cb; int eap_param_needed; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; int get_config_blob; int set_config_blob; int eapol_send; int eapol_done_cb; scalar_t__ preauth; struct wpa_supplicant* eapol_send_ctx; struct eapol_test_data* cb_ctx; int cb; int scard_ctx; } ;
struct eapol_test_data {int dummy; } ;
struct eapol_ctx {int cert_in_cb; int get_state; struct wpa_supplicant* msg_ctx; struct eapol_test_data* ctx; int set_anon_id; int cert_cb; int eap_param_needed; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; int get_config_blob; int set_config_blob; int eapol_send; int eapol_done_cb; scalar_t__ preauth; struct wpa_supplicant* eapol_send_ctx; struct eapol_test_data* cb_ctx; int cb; int scard_ctx; } ;
struct eapol_config {int accept_802_1x_keys; int external_sim; int workaround; int fast_reauth; scalar_t__ required_keys; } ;
typedef int eapol_conf ;
struct TYPE_2__ {int external_sim; int fast_reauth; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (struct wpa_sm_ctx*) ;
 int FUNC_1 (int *,int *,struct eapol_config*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct wpa_sm_ctx*) ;
 int FUNC_6 (struct eapol_config*,int ,int) ;
 struct wpa_sm_ctx* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct wpa_sm_ctx*) ;

__attribute__((used)) static int FUNC_10(struct eapol_test_data *VAR_12, struct wpa_supplicant *VAR_13,
        struct wpa_ssid *VAR_14)
{
 struct eapol_config VAR_15;
 struct eapol_ctx *VAR_16;
 struct wpa_sm_ctx *VAR_17;

 VAR_16 = FUNC_7(sizeof(*VAR_16));
 if (VAR_16 == ((void*)0)) {
  FUNC_8("Failed to allocate EAPOL context.\n");
  return -1;
 }
 VAR_16->ctx = VAR_12;
 VAR_16->msg_ctx = VAR_13;
 VAR_16->scard_ctx = VAR_13->scard;
 VAR_16->cb = VAR_3;
 VAR_16->cb_ctx = VAR_12;
 VAR_16->eapol_send_ctx = VAR_13;
 VAR_16->preauth = 0;
 VAR_16->eapol_done_cb = VAR_6;
 VAR_16->eapol_send = VAR_7;
 VAR_16->set_config_blob = VAR_11;
 VAR_16->get_config_blob = VAR_8;
 VAR_16->opensc_engine_path = VAR_13->conf->opensc_engine_path;
 VAR_16->pkcs11_engine_path = VAR_13->conf->pkcs11_engine_path;
 VAR_16->pkcs11_module_path = VAR_13->conf->pkcs11_module_path;
 VAR_16->openssl_ciphers = VAR_13->conf->openssl_ciphers;
 VAR_16->eap_param_needed = VAR_5;
 VAR_16->cert_cb = VAR_4;
 VAR_16->cert_in_cb = 1;
 VAR_16->set_anon_id = VAR_10;

 VAR_13->eapol = FUNC_0(VAR_16);
 if (VAR_13->eapol == ((void*)0)) {
  FUNC_5(VAR_16);
  FUNC_8("Failed to initialize EAPOL state machines.\n");
  return -1;
 }

 VAR_13->key_mgmt = VAR_2;
 VAR_17 = FUNC_7(sizeof(*VAR_17));
 if (VAR_17 == ((void*)0)) {
  FUNC_5(VAR_16);
  return -1;
 }
 VAR_17->ctx = VAR_12;
 VAR_17->msg_ctx = VAR_13;
 VAR_17->get_state = VAR_9;
 VAR_13->wpa = FUNC_9(VAR_17);
 if (!VAR_13->wpa) {
  FUNC_5(VAR_16);
  FUNC_5(VAR_17);
  return -1;
 }

 if (!VAR_14)
  return 0;

 VAR_13->current_ssid = VAR_14;
 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.accept_802_1x_keys = 1;
 VAR_15.required_keys = 0;
 VAR_15.fast_reauth = VAR_13->conf->fast_reauth;
 VAR_15.workaround = VAR_14->eap_workaround;
 VAR_15.external_sim = VAR_13->conf->external_sim;
 FUNC_1(VAR_13->eapol, &VAR_14->eap, &VAR_15);
 FUNC_4(VAR_13->eapol, VAR_13->scard);


 FUNC_3(VAR_13->eapol, VAR_0);

 FUNC_2(VAR_13->eapol, VAR_1);

 return 0;
}
