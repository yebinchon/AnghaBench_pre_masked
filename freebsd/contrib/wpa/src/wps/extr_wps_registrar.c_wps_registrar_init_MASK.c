
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_registrar_config {int multi_ap_backhaul_network_key_len; scalar_t__ multi_ap_backhaul_network_key; int multi_ap_backhaul_ssid_len; int multi_ap_backhaul_ssid; int force_per_enrollee_psk; int dualband; int static_wep_only; int disable_auto_conf; int extra_cred_len; scalar_t__ extra_cred; int skip_cred_build; int cb_ctx; int enrollee_seen_cb; int set_sel_reg_cb; int reg_success_cb; int pin_needed_cb; int set_ie_cb; int new_psk_cb; } ;
struct wps_registrar {int sel_reg_dev_password_id_override; int sel_reg_config_methods_override; int multi_ap_backhaul_network_key_len; scalar_t__ multi_ap_backhaul_network_key; int multi_ap_backhaul_ssid_len; int multi_ap_backhaul_ssid; int force_per_enrollee_psk; int dualband; int static_wep_only; int disable_auto_conf; int * extra_cred; int skip_cred_build; int cb_ctx; int enrollee_seen_cb; int set_sel_reg_cb; int reg_success_cb; int pin_needed_cb; int set_ie_cb; int new_psk_cb; struct wps_context* wps; int nfc_pw_tokens; int pins; } ;
struct wps_context {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wps_registrar*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 struct wps_registrar* FUNC_4 (int) ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct wps_registrar*) ;
 scalar_t__ FUNC_7 (struct wps_registrar*) ;

struct wps_registrar *
FUNC_8(struct wps_context *VAR_0,
     const struct wps_registrar_config *VAR_1)
{
 struct wps_registrar *VAR_2 = FUNC_4(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_2->pins);
 FUNC_0(&VAR_2->nfc_pw_tokens);
 VAR_2->wps = VAR_0;
 VAR_2->new_psk_cb = VAR_1->new_psk_cb;
 VAR_2->set_ie_cb = VAR_1->set_ie_cb;
 VAR_2->pin_needed_cb = VAR_1->pin_needed_cb;
 VAR_2->reg_success_cb = VAR_1->reg_success_cb;
 VAR_2->set_sel_reg_cb = VAR_1->set_sel_reg_cb;
 VAR_2->enrollee_seen_cb = VAR_1->enrollee_seen_cb;
 VAR_2->cb_ctx = VAR_1->cb_ctx;
 VAR_2->skip_cred_build = VAR_1->skip_cred_build;
 if (VAR_1->extra_cred) {
  VAR_2->extra_cred = FUNC_5(VAR_1->extra_cred,
          VAR_1->extra_cred_len);
  if (VAR_2->extra_cred == ((void*)0)) {
   FUNC_1(VAR_2);
   return ((void*)0);
  }
 }
 VAR_2->disable_auto_conf = VAR_1->disable_auto_conf;
 VAR_2->sel_reg_dev_password_id_override = -1;
 VAR_2->sel_reg_config_methods_override = -1;
 VAR_2->static_wep_only = VAR_1->static_wep_only;
 VAR_2->dualband = VAR_1->dualband;
 VAR_2->force_per_enrollee_psk = VAR_1->force_per_enrollee_psk;

 if (VAR_1->multi_ap_backhaul_ssid) {
  FUNC_2(VAR_2->multi_ap_backhaul_ssid,
     VAR_1->multi_ap_backhaul_ssid,
     VAR_1->multi_ap_backhaul_ssid_len);
  VAR_2->multi_ap_backhaul_ssid_len =
   VAR_1->multi_ap_backhaul_ssid_len;
 }
 if (VAR_1->multi_ap_backhaul_network_key) {
  VAR_2->multi_ap_backhaul_network_key =
   FUNC_3(VAR_1->multi_ap_backhaul_network_key,
      VAR_1->multi_ap_backhaul_network_key_len);
  if (VAR_2->multi_ap_backhaul_network_key)
   VAR_2->multi_ap_backhaul_network_key_len =
    VAR_1->multi_ap_backhaul_network_key_len;
 }

 if (FUNC_7(VAR_2)) {
  FUNC_6(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
