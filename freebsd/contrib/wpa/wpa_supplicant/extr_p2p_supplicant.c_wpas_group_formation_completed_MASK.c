
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int group_formation_reported; scalar_t__ p2p_group_interface; int show_group_started; TYPE_1__* global; int p2pdev; int p2p_group; struct wpa_ssid* current_ssid; scalar_t__ p2p_in_invitation; scalar_t__ p2p_in_provisioning; scalar_t__ p2p_go_group_formation_completed; } ;
struct wpa_ssid {scalar_t__ mode; int p2p_persistent_group; int * passphrase; int * psk; scalar_t__ psk_set; int frequency; int ssid_len; int ssid; } ;
struct TYPE_2__ {int p2p_go_wait_client; int * add_psk; int p2p_dev_addr; struct wpa_supplicant* p2p_group_formation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct wpa_supplicant*,int *) ;
 int FUNC_8 (struct wpa_supplicant*,char*) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpa_ssid*,int,int ,int *) ;
 int FUNC_10 (struct wpa_supplicant*) ;
 int FUNC_11 (struct wpa_supplicant*,int ) ;
 int FUNC_12 (struct wpa_supplicant*,int,struct wpa_ssid*,int ,int *,int *,int *,int,char*) ;
 int FUNC_13 (struct wpa_supplicant*,int *,int ,int ) ;
 int FUNC_14 (struct wpa_supplicant*) ;
 int FUNC_15 (int ,struct wpa_ssid*,int *) ;

__attribute__((used)) static void FUNC_16(struct wpa_supplicant *VAR_10,
        int VAR_11, int VAR_12)
{
 struct wpa_ssid *VAR_13;
 int VAR_14;
 int VAR_15;
 u8 VAR_16[VAR_0];






 if (VAR_10->global->p2p_group_formation)
  VAR_10 = VAR_10->global->p2p_group_formation;
 if (VAR_10->p2p_go_group_formation_completed) {
  VAR_10->global->p2p_group_formation = ((void*)0);
  VAR_10->p2p_in_provisioning = 0;
 } else if (VAR_10->p2p_in_provisioning && !VAR_11) {
  FUNC_5(VAR_10, VAR_1,
   "P2P: Stop provisioning state due to failure");
  VAR_10->p2p_in_provisioning = 0;
 }
 VAR_10->p2p_in_invitation = 0;
 VAR_10->group_formation_reported = 1;

 if (!VAR_11) {
  FUNC_6(VAR_10->p2pdev, VAR_2,
          VAR_3);
  FUNC_8(VAR_10, "");
  if (VAR_12)
   return;
  FUNC_11(VAR_10,
          VAR_6);
  return;
 }

 FUNC_6(VAR_10->p2pdev, VAR_2,
         VAR_4);

 VAR_13 = VAR_10->current_ssid;
 if (VAR_13 && VAR_13->mode == VAR_9) {
  VAR_13->mode = VAR_8;
  FUNC_4(VAR_10->p2p_group);
  FUNC_7(VAR_10, ((void*)0));
 }

 VAR_15 = 0;
 if (VAR_13) {
  VAR_14 = VAR_13->mode == VAR_7;
  if (VAR_13->mode == VAR_8) {
   VAR_15 = VAR_13->p2p_persistent_group;
   FUNC_2(VAR_16, VAR_10->global->p2p_dev_addr,
      VAR_0);
  } else
   VAR_15 = FUNC_13(VAR_10,
              VAR_16,
              VAR_13->ssid,
              VAR_13->ssid_len);
 } else {
  VAR_14 = VAR_10->p2p_group_interface ==
   VAR_5;
  FUNC_3(VAR_16, 0, VAR_0);
 }

 VAR_10->show_group_started = 0;
 if (VAR_14) {





  VAR_10->show_group_started = 1;
 } else {
  FUNC_12(VAR_10, 1, VAR_13,
           VAR_13 ? VAR_13->frequency : 0,
           VAR_13 && VAR_13->passphrase == ((void*)0) &&
           VAR_13->psk_set ? VAR_13->psk : ((void*)0),
           VAR_13 ? VAR_13->passphrase : ((void*)0),
           VAR_16, VAR_15, "");
  FUNC_10(VAR_10);
  FUNC_14(VAR_10);
 }

 if (VAR_15)
  FUNC_15(VAR_10->p2pdev,
      VAR_13, VAR_16);
 else {
  FUNC_0(VAR_10->global->add_psk);
  VAR_10->global->add_psk = ((void*)0);
 }

 if (!VAR_14) {
  FUNC_9(VAR_10, VAR_13, VAR_15, 0, ((void*)0));
  FUNC_1(&VAR_10->global->p2p_go_wait_client);
 }
}
