
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int reassociate; scalar_t__ disconnected; struct wpa_ssid* connect_without_scan; int scan_req; int go_params; int ap_configured_cb_data; struct wpa_supplicant* ap_configured_cb_ctx; int ap_configured_cb; TYPE_2__* p2pdev; int conf; int go_dev_addr; scalar_t__ group_formation_reported; scalar_t__ p2p_go_group_formation_completed; scalar_t__ show_group_started; } ;
struct wpa_ssid {int temporary; int p2p_group; int p2p_persistent_group; int frequency; int ssid_len; int pbss; int ap_max_inactivity; int * passphrase; scalar_t__ psk; scalar_t__ psk_set; int id; void* group_cipher; void* pairwise_cipher; int proto; int key_mgmt; int auth_alg; scalar_t__ ssid; int he; int vht_center_freq2; int max_oper_chwidth; int vht; int ht40; int mode; } ;
struct p2p_go_neg_results {int freq; int ssid_len; int psk; scalar_t__ psk_set; int passphrase; int ssid; int he; int vht_center_freq2; int max_oper_chwidth; int vht; int ht40; int persistent_group; } ;
struct TYPE_4__ {TYPE_1__* conf; } ;
struct TYPE_3__ {int p2p_go_max_inactivity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_11 ;
 struct wpa_ssid* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wpa_ssid*) ;
 int FUNC_8 (struct wpa_ssid*) ;
 int FUNC_9 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_10 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_11 (struct wpa_supplicant*,int ,int ) ;
 scalar_t__ FUNC_12 (struct wpa_supplicant*,struct p2p_go_neg_results*) ;

__attribute__((used)) static void FUNC_13(struct wpa_supplicant *VAR_12,
         struct p2p_go_neg_results *VAR_13,
         int VAR_14)
{
 struct wpa_ssid *VAR_15;

 FUNC_9(VAR_12, VAR_1, "P2P: Starting GO");
 if (FUNC_12(VAR_12, VAR_13) < 0) {
  FUNC_9(VAR_12, VAR_1, "P2P: Could not copy GO Negotiation "
   "results");
  return;
 }

 VAR_15 = FUNC_5(VAR_12->conf);
 if (VAR_15 == ((void*)0)) {
  FUNC_9(VAR_12, VAR_1, "P2P: Could not add network for GO");
  return;
 }

 VAR_12->show_group_started = 0;
 VAR_12->p2p_go_group_formation_completed = 0;
 VAR_12->group_formation_reported = 0;
 FUNC_1(VAR_12->go_dev_addr, 0, VAR_0);

 FUNC_7(VAR_15);
 VAR_15->temporary = 1;
 VAR_15->p2p_group = 1;
 VAR_15->p2p_persistent_group = !!VAR_13->persistent_group;
 VAR_15->mode = VAR_14 ? VAR_5 :
  VAR_4;
 VAR_15->frequency = VAR_13->freq;
 VAR_15->ht40 = VAR_13->ht40;
 VAR_15->vht = VAR_13->vht;
 VAR_15->max_oper_chwidth = VAR_13->max_oper_chwidth;
 VAR_15->vht_center_freq2 = VAR_13->vht_center_freq2;
 VAR_15->he = VAR_13->he;
 VAR_15->ssid = FUNC_4(VAR_13->ssid_len + 1);
 if (VAR_15->ssid) {
  FUNC_0(VAR_15->ssid, VAR_13->ssid, VAR_13->ssid_len);
  VAR_15->ssid_len = VAR_13->ssid_len;
 }
 VAR_15->auth_alg = VAR_6;
 VAR_15->key_mgmt = VAR_9;
 VAR_15->proto = VAR_10;
 VAR_15->pairwise_cipher = VAR_7;
 VAR_15->group_cipher = VAR_7;
 if (VAR_13->freq > 56160) {




  VAR_15->pairwise_cipher = VAR_8;
  VAR_15->group_cipher = VAR_8;

  VAR_15->pbss = 1;
 }
 if (FUNC_3(VAR_13->passphrase) > 0) {
  VAR_15->passphrase = FUNC_2(VAR_13->passphrase);
  if (VAR_15->passphrase == ((void*)0)) {
   FUNC_10(VAR_12, VAR_2,
           "P2P: Failed to copy passphrase for GO");
   FUNC_6(VAR_12->conf, VAR_15->id);
   return;
  }
 } else
  VAR_15->passphrase = ((void*)0);
 VAR_15->psk_set = VAR_13->psk_set;
 if (VAR_15->psk_set)
  FUNC_0(VAR_15->psk, VAR_13->psk, sizeof(VAR_15->psk));
 else if (VAR_15->passphrase)
  FUNC_8(VAR_15);
 VAR_15->ap_max_inactivity = VAR_12->p2pdev->conf->p2p_go_max_inactivity;

 VAR_12->ap_configured_cb = VAR_11;
 VAR_12->ap_configured_cb_ctx = VAR_12;
 VAR_12->ap_configured_cb_data = VAR_12->go_params;
 VAR_12->scan_req = VAR_3;
 VAR_12->connect_without_scan = VAR_15;
 VAR_12->reassociate = 1;
 VAR_12->disconnected = 0;
 FUNC_9(VAR_12, VAR_1, "P2P: Request scan (that will be skipped) to "
  "start GO)");
 FUNC_11(VAR_12, 0, 0);
}
