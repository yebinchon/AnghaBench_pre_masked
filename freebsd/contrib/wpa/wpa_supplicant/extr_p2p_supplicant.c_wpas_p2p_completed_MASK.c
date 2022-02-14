
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_go_group_formation_completed; int p2pdev; int wpa; scalar_t__ assoc_freq; TYPE_2__* current_bss; TYPE_1__* global; int * go_dev_addr; scalar_t__ p2p_in_invitation; scalar_t__ p2p_in_provisioning; scalar_t__ show_group_started; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ mode; int * passphrase; int * psk; scalar_t__ psk_set; int ssid_len; int ssid; int * bssid; scalar_t__ bssid_set; } ;
typedef int ip_addr ;
struct TYPE_4__ {int freq; } ;
struct TYPE_3__ {struct wpa_supplicant* p2p_group_formation; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_ssid*,int,int,int *) ;
 int VAR_3 ;
 int FUNC_8 (struct wpa_supplicant*,int ,struct wpa_ssid*,int,int *,int *,int *,int,char*) ;
 int FUNC_9 (struct wpa_supplicant*,int *,int ,int ) ;
 int FUNC_10 (int ,struct wpa_ssid*,int *) ;

void FUNC_11(struct wpa_supplicant *VAR_4)
{
 struct wpa_ssid *VAR_5 = VAR_4->current_ssid;
 u8 VAR_6[VAR_0];
 int VAR_7;
 int VAR_8;
 u8 VAR_9[3 * 4], *VAR_10 = ((void*)0);
 char VAR_11[100];

 if (VAR_5 == ((void*)0) || VAR_5->mode != VAR_2) {
  FUNC_0(VAR_3,
         VAR_4->p2pdev, ((void*)0));
 }

 if (!VAR_4->show_group_started || !VAR_5)
  return;

 VAR_4->show_group_started = 0;
 if (!VAR_4->p2p_go_group_formation_completed &&
     VAR_4->global->p2p_group_formation == VAR_4) {
  FUNC_5(VAR_4, VAR_1,
   "P2P: Marking group formation completed on client on data connection");
  VAR_4->p2p_go_group_formation_completed = 1;
  VAR_4->global->p2p_group_formation = ((void*)0);
  VAR_4->p2p_in_provisioning = 0;
  VAR_4->p2p_in_invitation = 0;
 }

 FUNC_2(VAR_6, 0, VAR_0);
 if (VAR_5->bssid_set)
  FUNC_1(VAR_6, VAR_5->bssid, VAR_0);
 VAR_7 = FUNC_9(VAR_4, VAR_6, VAR_5->ssid,
            VAR_5->ssid_len);
 FUNC_1(VAR_4->go_dev_addr, VAR_6, VAR_0);

 if (VAR_4->global->p2p_group_formation == VAR_4)
  VAR_4->global->p2p_group_formation = ((void*)0);

 VAR_8 = VAR_4->current_bss ? VAR_4->current_bss->freq :
  (int) VAR_4->assoc_freq;

 VAR_11[0] = '\0';
 if (FUNC_6(VAR_4->wpa, VAR_9) == 0) {
  int VAR_12;

  VAR_12 = FUNC_3(VAR_11, sizeof(VAR_11),
      " ip_addr=%u.%u.%u.%u "
      "ip_mask=%u.%u.%u.%u go_ip_addr=%u.%u.%u.%u",
      VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3],
      VAR_9[4], VAR_9[5], VAR_9[6], VAR_9[7],
      VAR_9[8], VAR_9[9], VAR_9[10], VAR_9[11]);
  if (FUNC_4(sizeof(VAR_11), VAR_12))
   VAR_11[0] = '\0';
  VAR_10 = VAR_9;
 }

 FUNC_8(VAR_4, 0, VAR_5, VAR_8,
          VAR_5->passphrase == ((void*)0) && VAR_5->psk_set ?
          VAR_5->psk : ((void*)0),
          VAR_5->passphrase, VAR_6, VAR_7,
          VAR_11);

 if (VAR_7)
  FUNC_10(VAR_4->p2pdev,
      VAR_5, VAR_6);

 FUNC_7(VAR_4, VAR_5, VAR_7, 1, VAR_10);
}
