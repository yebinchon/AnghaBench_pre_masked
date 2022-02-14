
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_ssid {struct wpa_ssid* next; } ;
struct wpa_cred {struct wpa_cred* next; } ;
struct TYPE_2__ {struct wpa_config* range; } ;
struct wpa_config {struct wpa_config* non_pref_chan; struct wpa_config* sched_scan_plans; struct wpa_config* fst_group_id; struct wpa_config* wowlan_triggers; struct wpa_config* bgscan; struct wpa_config* osu_dir; int ap_vendor_elements; struct wpa_config* sae_groups; struct wpa_config* ext_password_backend; int wps_nfc_dev_pw; int wps_nfc_dh_privkey; int wps_nfc_dh_pubkey; struct wpa_config* freq_list; struct wpa_config* autoscan; TYPE_1__ p2p_no_go_freq; struct wpa_config* p2p_pref_chan; struct wpa_config* pssid; struct wpa_config* p2p_ssid_postfix; struct wpa_config* config_methods; struct wpa_config* serial_number; struct wpa_config* model_number; struct wpa_config* model_name; struct wpa_config* manufacturer; struct wpa_config* device_name; struct wpa_config* driver_param; int pcsc_pin; struct wpa_config* pcsc_reader; struct wpa_config* openssl_ciphers; struct wpa_config* pkcs11_module_path; struct wpa_config* pkcs11_engine_path; struct wpa_config* opensc_engine_path; struct wpa_config* ctrl_interface_group; struct wpa_config* ctrl_interface; int * wps_vendor_ext; int wps_vendor_ext_m1; struct wpa_cred* cred; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_config*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wpa_config*) ;
 int FUNC_3 (struct wpa_cred*) ;
 int FUNC_4 (struct wpa_ssid*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct wpa_config *VAR_1)
{
 struct wpa_ssid *VAR_2, *VAR_3 = ((void*)0);
 struct wpa_cred *VAR_4, *VAR_5;
 int VAR_6;

 VAR_2 = VAR_1->ssid;
 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_4(VAR_3);
 }

 VAR_4 = VAR_1->cred;
 while (VAR_4) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
  FUNC_3(VAR_5);
 }

 FUNC_2(VAR_1);

 FUNC_5(VAR_1->wps_vendor_ext_m1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_5(VAR_1->wps_vendor_ext[VAR_6]);
 FUNC_0(VAR_1->ctrl_interface);
 FUNC_0(VAR_1->ctrl_interface_group);
 FUNC_0(VAR_1->opensc_engine_path);
 FUNC_0(VAR_1->pkcs11_engine_path);
 FUNC_0(VAR_1->pkcs11_module_path);
 FUNC_0(VAR_1->openssl_ciphers);
 FUNC_0(VAR_1->pcsc_reader);
 FUNC_1(VAR_1->pcsc_pin);
 FUNC_0(VAR_1->driver_param);
 FUNC_0(VAR_1->device_name);
 FUNC_0(VAR_1->manufacturer);
 FUNC_0(VAR_1->model_name);
 FUNC_0(VAR_1->model_number);
 FUNC_0(VAR_1->serial_number);
 FUNC_0(VAR_1->config_methods);
 FUNC_0(VAR_1->p2p_ssid_postfix);
 FUNC_0(VAR_1->pssid);
 FUNC_0(VAR_1->p2p_pref_chan);
 FUNC_0(VAR_1->p2p_no_go_freq.range);
 FUNC_0(VAR_1->autoscan);
 FUNC_0(VAR_1->freq_list);
 FUNC_5(VAR_1->wps_nfc_dh_pubkey);
 FUNC_5(VAR_1->wps_nfc_dh_privkey);
 FUNC_5(VAR_1->wps_nfc_dev_pw);
 FUNC_0(VAR_1->ext_password_backend);
 FUNC_0(VAR_1->sae_groups);
 FUNC_5(VAR_1->ap_vendor_elements);
 FUNC_0(VAR_1->osu_dir);
 FUNC_0(VAR_1->bgscan);
 FUNC_0(VAR_1->wowlan_triggers);
 FUNC_0(VAR_1->fst_group_id);
 FUNC_0(VAR_1->sched_scan_plans);




 FUNC_0(VAR_1);
}
