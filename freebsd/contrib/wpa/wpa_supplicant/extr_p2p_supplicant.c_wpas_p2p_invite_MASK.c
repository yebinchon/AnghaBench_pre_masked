
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_persistent_go_freq; int p2p_go_ht40; int p2p_go_vht; int p2p_go_he; int p2p_go_max_oper_chwidth; int p2p_go_vht_center_freq2; int num_multichan_concurrent; TYPE_3__* global; TYPE_2__* parent; int pending_invite_ssid_id; int * own_addr; scalar_t__ p2p_mgmt; int * pending_interface_addr; int p2p_auth_invite; } ;
struct wpa_ssid {scalar_t__ mode; int ssid_len; int ssid; int id; int * bssid; } ;
typedef enum p2p_invite_role { ____Placeholder_p2p_invite_role } p2p_invite_role ;
struct TYPE_6__ {int * p2p; scalar_t__ p2p_disabled; int * p2p_invite_group; } ;
struct TYPE_5__ {TYPE_1__* conf; int * own_addr; } ;
struct TYPE_4__ {scalar_t__ p2p_ignore_shared_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int const*,int,int *,int ,int ,int,int const*,int,int,int) ;
 int FUNC_3 (int *,unsigned int*,unsigned int) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_6 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*) ;
 int FUNC_8 (struct wpa_supplicant*,int,int*,int*,int,unsigned int*,unsigned int*) ;
 int FUNC_9 (struct wpa_supplicant*) ;

int FUNC_10(struct wpa_supplicant *VAR_8, const u8 *VAR_9,
      struct wpa_ssid *VAR_10, const u8 *VAR_11, int VAR_12,
      int VAR_13, int VAR_14, int VAR_15, int VAR_16,
      int VAR_17, int VAR_18)
{
 enum p2p_invite_role VAR_19;
 u8 *VAR_20 = ((void*)0);
 int VAR_21 = 0;
 int VAR_22;
 int VAR_23 = VAR_17 == 0;
 unsigned int VAR_24[VAR_5], VAR_25;

 VAR_8->global->p2p_invite_group = ((void*)0);
 if (VAR_9)
  FUNC_0(VAR_8->p2p_auth_invite, VAR_9, VAR_0);
 else
  FUNC_1(VAR_8->p2p_auth_invite, 0, VAR_0);

 VAR_8->p2p_persistent_go_freq = VAR_12;
 VAR_8->p2p_go_ht40 = !!VAR_14;
 VAR_8->p2p_go_vht = !!VAR_15;
 VAR_8->p2p_go_he = !!VAR_18;
 VAR_8->p2p_go_max_oper_chwidth = VAR_16;
 VAR_8->p2p_go_vht_center_freq2 = VAR_13;
 if (VAR_10->mode == VAR_6) {
  VAR_19 = VAR_4;
  if (VAR_9 == ((void*)0)) {
   FUNC_4(VAR_1, "P2P: Missing peer "
       "address in invitation command");
   return -1;
  }
  if (FUNC_6(VAR_8)) {
   if (FUNC_5(VAR_8,
        VAR_7) < 0) {
    FUNC_4(VAR_2, "P2P: Failed to "
        "allocate a new interface for the "
        "group");
    return -1;
   }
   VAR_20 = VAR_8->pending_interface_addr;
  } else if (VAR_8->p2p_mgmt)
   VAR_20 = VAR_8->parent->own_addr;
  else
   VAR_20 = VAR_8->own_addr;
 } else {
  VAR_19 = VAR_3;
  VAR_9 = VAR_10->bssid;
 }
 VAR_8->pending_invite_ssid_id = VAR_10->id;

 VAR_25 = VAR_5;
 VAR_22 = FUNC_8(VAR_8, VAR_12, &VAR_21, &VAR_17,
       VAR_19 == VAR_4,
       VAR_24, &VAR_25);
 if (VAR_22)
  return VAR_22;

 if (VAR_8->global->p2p_disabled || VAR_8->global->p2p == ((void*)0))
  return -1;

 FUNC_3(VAR_8->global->p2p, VAR_24, VAR_25);

 if (VAR_8->parent->conf->p2p_ignore_shared_freq &&
     VAR_23 && VAR_17 > 0 &&
     VAR_8->num_multichan_concurrent > 1 &&
     FUNC_7(VAR_8) > 0) {
  FUNC_4(VAR_1, "P2P: Ignore own channel preference %d MHz for invitation due to p2p_ignore_shared_freq=1 configuration",
      VAR_17);
  VAR_17 = 0;
 }





 FUNC_9(VAR_8);

 return FUNC_2(VAR_8->global->p2p, VAR_9, VAR_19, VAR_20,
     VAR_10->ssid, VAR_10->ssid_len, VAR_21, VAR_11,
     1, VAR_17, -1);
}
