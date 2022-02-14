
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {scalar_t__ wpa_state; struct wpa_global* global; TYPE_2__* p2pdev; scalar_t__ assoc_freq; TYPE_1__* current_bss; int * go_dev_addr; int * bssid; int * own_addr; struct wpa_ssid* current_ssid; int ifname; struct wpa_supplicant* next; scalar_t__ p2p_go_max_oper_chwidth; scalar_t__ p2p_go_vht_center_freq2; scalar_t__ p2p_go_vht; scalar_t__ p2p_go_ht40; scalar_t__ p2p_persistent_go_freq; } ;
struct wpa_ssid {scalar_t__ mode; int frequency; int ssid_len; int ssid; scalar_t__ p2p_persistent_group; } ;
struct wpa_global {int * p2p; scalar_t__ p2p_disabled; int * p2p_dev_addr; struct wpa_supplicant* p2p_invite_group; struct wpa_supplicant* ifaces; } ;
typedef enum p2p_invite_role { ____Placeholder_p2p_invite_role } p2p_invite_role ;
struct TYPE_4__ {int pending_invite_ssid_id; } ;
struct TYPE_3__ {int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *,int const*,int,int *,int ,int ,int,int const*,int,int,int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int const*,int ,int ) ;
 int FUNC_5 (struct wpa_supplicant*,int) ;
 int FUNC_6 (struct wpa_supplicant*,int,int*,int*,int,unsigned int*,unsigned int*) ;

int FUNC_7(struct wpa_supplicant *VAR_6, const char *VAR_7,
     const u8 *VAR_8, const u8 *VAR_9)
{
 struct wpa_global *VAR_10 = VAR_6->global;
 enum p2p_invite_role VAR_11;
 u8 *VAR_12 = ((void*)0);
 struct wpa_ssid *VAR_13;
 int VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 int VAR_18;
 unsigned int VAR_19[VAR_3], VAR_20;

 VAR_6->p2p_persistent_go_freq = 0;
 VAR_6->p2p_go_ht40 = 0;
 VAR_6->p2p_go_vht = 0;
 VAR_6->p2p_go_vht_center_freq2 = 0;
 VAR_6->p2p_go_max_oper_chwidth = 0;

 for (VAR_6 = VAR_10->ifaces; VAR_6; VAR_6 = VAR_6->next) {
  if (FUNC_1(VAR_6->ifname, VAR_7) == 0)
   break;
 }
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "P2P: Interface '%s' not found", VAR_7);
  return -1;
 }

 VAR_13 = VAR_6->current_ssid;
 if (VAR_13 == ((void*)0)) {
  FUNC_3(VAR_0, "P2P: No current SSID to use for "
      "invitation");
  return -1;
 }

 VAR_6->global->p2p_invite_group = VAR_6;
 VAR_14 = VAR_13->p2p_persistent_group &&
  FUNC_4(VAR_6->p2pdev, VAR_8,
     VAR_13->ssid, VAR_13->ssid_len);

 if (VAR_13->mode == VAR_4) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_6->own_addr;
  if (VAR_9 == ((void*)0))
   VAR_9 = VAR_6->global->p2p_dev_addr;
  VAR_15 = VAR_13->frequency;
 } else {
  VAR_11 = VAR_2;
  if (VAR_6->wpa_state < VAR_5) {
   FUNC_3(VAR_0, "P2P: Not associated - cannot "
       "invite to current group");
   return -1;
  }
  VAR_12 = VAR_6->bssid;
  if (VAR_9 == ((void*)0) &&
      !FUNC_0(VAR_6->go_dev_addr))
   VAR_9 = VAR_6->go_dev_addr;
  VAR_15 = VAR_6->current_bss ? VAR_6->current_bss->freq :
   (int) VAR_6->assoc_freq;
 }
 VAR_6->p2pdev->pending_invite_ssid_id = -1;

 if (VAR_6->global->p2p_disabled || VAR_6->global->p2p == ((void*)0))
  return -1;

 VAR_20 = VAR_3;
 VAR_18 = FUNC_6(VAR_6, VAR_15, &VAR_16, &VAR_17,
       VAR_11 == VAR_1,
       VAR_19, &VAR_20);
 if (VAR_18)
  return VAR_18;
 FUNC_5(VAR_6, VAR_16);

 return FUNC_2(VAR_6->global->p2p, VAR_8, VAR_11, VAR_12,
     VAR_13->ssid, VAR_13->ssid_len, VAR_16,
     VAR_9, VAR_14, VAR_17, -1);
}
