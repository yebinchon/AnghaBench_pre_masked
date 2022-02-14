
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * eapol; TYPE_1__* conf; int wps; } ;
struct eapol_ctx {struct wpa_supplicant* cb_ctx; int set_anon_id; int eap_error_cb; int status_cb; int cert_in_cb; int cert_cb; int cb; int port_cb; int eap_proxy_notify_sim_status; int eap_proxy_cb; int eap_param_needed; int wps; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; int aborted_cached; int get_config_blob; int set_config_blob; int set_wep_key; int eapol_send; int eapol_done_cb; scalar_t__ preauth; struct wpa_supplicant* eapol_send_ctx; struct wpa_supplicant* msg_ctx; struct wpa_supplicant* ctx; } ;
struct TYPE_2__ {int cert_in_cb; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; } ;


 int VAR_0 ;
 int * FUNC_0 (struct eapol_ctx*) ;
 int FUNC_1 (struct eapol_ctx*) ;
 struct eapol_ctx* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_4(struct wpa_supplicant *VAR_16)
{
 return 0;
}
