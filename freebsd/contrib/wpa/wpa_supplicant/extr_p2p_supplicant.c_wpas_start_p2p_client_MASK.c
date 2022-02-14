
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int show_group_started; int p2p_in_invitation; int p2p_invite_go_freq; int p2pdev; TYPE_1__* global; scalar_t__ p2p_go_group_formation_completed; int conf; int go_dev_addr; int * p2p_last_4way_hs_fail; int scan_min_time; } ;
struct wpa_ssid {int temporary; int ssid_len; int p2p_group; int export_keys; int psk_set; scalar_t__ passphrase; int * psk; int * ssid; int id; int key_mgmt; scalar_t__ pbss; void* group_cipher; void* pairwise_cipher; int proto; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_group_formation; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 struct wpa_ssid* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct wpa_ssid*) ;
 int FUNC_10 (struct wpa_supplicant*) ;
 int FUNC_11 (struct wpa_supplicant*,struct wpa_ssid*) ;
 struct wpa_supplicant* FUNC_12 (struct wpa_supplicant*,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct wpa_supplicant *VAR_7,
     struct wpa_ssid *VAR_8, int VAR_9,
     int VAR_10, int VAR_11)
{
 struct wpa_ssid *VAR_12;

 VAR_7 = FUNC_12(VAR_7, VAR_9, 0);
 if (VAR_7 == ((void*)0))
  return -1;
 if (VAR_11)
  FUNC_2(&VAR_7->scan_min_time);
 VAR_7->p2p_last_4way_hs_fail = ((void*)0);

 FUNC_10(VAR_7);

 VAR_12 = FUNC_7(VAR_7->conf);
 if (VAR_12 == ((void*)0))
  return -1;
 FUNC_5(VAR_7->go_dev_addr, 0, VAR_0);
 FUNC_9(VAR_12);
 VAR_12->temporary = 1;
 VAR_12->proto = VAR_5;
 VAR_12->pbss = VAR_8->pbss;
 VAR_12->pairwise_cipher = VAR_8->pbss ? VAR_3 :
  VAR_2;
 VAR_12->group_cipher = VAR_8->pbss ? VAR_3 : VAR_2;
 VAR_12->key_mgmt = VAR_4;
 VAR_12->ssid = FUNC_3(VAR_8->ssid_len);
 if (VAR_12->ssid == ((void*)0)) {
  FUNC_8(VAR_7->conf, VAR_12->id);
  return -1;
 }
 FUNC_4(VAR_12->ssid, VAR_8->ssid, VAR_8->ssid_len);
 VAR_12->ssid_len = VAR_8->ssid_len;
 VAR_12->p2p_group = 1;
 VAR_12->export_keys = 1;
 if (VAR_8->psk_set) {
  FUNC_4(VAR_12->psk, VAR_8->psk, 32);
  VAR_12->psk_set = 1;
 }
 if (VAR_8->passphrase)
  VAR_12->passphrase = FUNC_6(VAR_8->passphrase);

 VAR_7->show_group_started = 1;
 VAR_7->p2p_in_invitation = 1;
 VAR_7->p2p_invite_go_freq = VAR_10;
 VAR_7->p2p_go_group_formation_completed = 0;
 VAR_7->global->p2p_group_formation = VAR_7;

 FUNC_0(VAR_6, VAR_7->p2pdev,
        ((void*)0));
 FUNC_1(VAR_1, 0,
          VAR_6,
          VAR_7->p2pdev, ((void*)0));
 FUNC_11(VAR_7, VAR_12);

 return 0;
}
