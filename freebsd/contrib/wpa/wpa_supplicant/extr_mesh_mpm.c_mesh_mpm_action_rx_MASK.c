
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct wpa_state_machine {int dummy; } ;
struct wpa_ie_data {int capabilities; } ;
struct wpa_channel_info {int seg1_idx; int chanwidth; } ;
struct sta_info {int my_lid; scalar_t__ plink_state; int peer_lid; int peer_aid; struct wpa_state_machine* wpa_sm; TYPE_4__* sae; } ;
struct mesh_peer_mgmt_ie {int const* llid; int const* plid; int const* reason; int chosen_pmk; } ;
struct mesh_conf {int security; scalar_t__ ocv; } ;
struct ieee802_11_elems {int oci_len; int oci; scalar_t__ rsn_ie_len; scalar_t__ rsn_ie; int peer_mgmt_len; int peer_mgmt; int mesh_config; int mesh_id; } ;
struct TYPE_8__ {int action; int* variable; } ;
struct TYPE_9__ {TYPE_2__ slf_prot_action; } ;
struct TYPE_11__ {int category; TYPE_3__ u; } ;
struct TYPE_12__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; int sa; } ;
struct hostapd_data {int max_plinks; int wpa_auth; } ;
typedef enum plink_event { ____Placeholder_plink_event } plink_event ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_7__ {struct mesh_conf* mconf; struct hostapd_data** bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;


 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int const*) ;
 struct sta_info* FUNC_1 (struct hostapd_data*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sta_info*,int ,int ,int*,int*) ;
 scalar_t__ FUNC_4 (int const*,size_t,struct ieee802_11_elems*,int ) ;
 int FUNC_5 (struct wpa_supplicant*,struct ieee802_11_elems*) ;
 struct sta_info* FUNC_6 (struct wpa_supplicant*,int ,struct ieee802_11_elems*) ;
 int FUNC_7 (struct wpa_supplicant*,struct sta_info*,int,int) ;
 int FUNC_8 (struct wpa_supplicant*,struct sta_info*) ;
 int FUNC_9 (struct wpa_supplicant*,int,int ,int ,struct mesh_peer_mgmt_ie*) ;
 int FUNC_10 (struct wpa_supplicant*,struct sta_info*,struct ieee802_11_elems*,int *,int ,int const*,size_t) ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (int ,int ,struct wpa_channel_info*,int,int) ;
 int FUNC_12 (struct hostapd_data*) ;
 scalar_t__ FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (struct wpa_state_machine*,int) ;
 scalar_t__ FUNC_15 (struct wpa_state_machine*) ;
 scalar_t__ FUNC_16 (struct wpa_supplicant*,struct wpa_channel_info*) ;
 int FUNC_17 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_18 (scalar_t__,scalar_t__,struct wpa_ie_data*) ;
 int FUNC_19 (int ,char*,...) ;

void FUNC_20(struct wpa_supplicant *VAR_18,
   const struct ieee80211_mgmt *VAR_19, size_t VAR_20)
{
 u8 VAR_21;
 struct hostapd_data *VAR_22 = VAR_18->ifmsh->bss[0];
 struct mesh_conf *VAR_23 = VAR_18->ifmsh->mconf;
 struct sta_info *VAR_24;
 u16 VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 enum plink_event VAR_28;
 struct ieee802_11_elems VAR_29;
 struct mesh_peer_mgmt_ie VAR_30;
 const u8 *VAR_31;
 size_t VAR_32;
 int VAR_33;
 u16 VAR_34 = 0;

 if (VAR_19->u.action.category != VAR_13)
  return;

 VAR_21 = VAR_19->u.action.u.slf_prot_action.action;
 if (VAR_21 != 128 &&
     VAR_21 != 129 &&
     VAR_21 != 130)
  return;

 VAR_31 = VAR_19->u.action.u.slf_prot_action.variable;
 VAR_32 = (const u8 *) VAR_19 + VAR_20 -
  VAR_19->u.action.u.slf_prot_action.variable;


 if (VAR_32 < 2 + 2) {
  FUNC_19(VAR_3,
      "MPM: Ignore too short action frame %u ie_len %u",
      VAR_21, (unsigned int) VAR_32);
  return;
 }
 FUNC_19(VAR_3, "MPM: Received PLINK action %u", VAR_21);

 if (VAR_21 == 128 || VAR_21 == 129) {
  FUNC_19(VAR_3, "MPM: Capability 0x%x",
      FUNC_0(VAR_31));
  VAR_31 += 2;
  VAR_32 -= 2;
 }
 if (VAR_21 == 129) {
  VAR_27 = FUNC_0(VAR_31);
  FUNC_19(VAR_3, "MPM: AID 0x%x", VAR_27);
  VAR_31 += 2;
  VAR_32 -= 2;
 }


 if (FUNC_4(VAR_31, VAR_32, &VAR_29, 0) == VAR_10) {
  FUNC_19(VAR_3, "MPM: Failed to parse PLINK IEs");
  return;
 }
 if (!VAR_29.peer_mgmt) {
  FUNC_19(VAR_3,
      "MPM: No Mesh Peering Management element");
  return;
 }
 if (VAR_21 != 130) {
  if (!VAR_29.mesh_id || !VAR_29.mesh_config) {
   FUNC_19(VAR_3,
       "MPM: No Mesh ID or Mesh Configuration element");
   return;
  }

  if (!FUNC_5(VAR_18, &VAR_29)) {
   FUNC_19(VAR_3,
       "MPM: Mesh ID or Mesh Configuration element do not match local MBSS");
   return;
  }
 }

 VAR_33 = FUNC_9(VAR_18, VAR_21,
           VAR_29.peer_mgmt,
           VAR_29.peer_mgmt_len,
           &VAR_30);
 if (VAR_33) {
  FUNC_19(VAR_3, "MPM: Mesh parsing rejected frame");
  return;
 }


 VAR_25 = FUNC_0(VAR_30.llid);
 if (VAR_30.plid)
  VAR_26 = FUNC_0(VAR_30.plid);
 FUNC_19(VAR_3, "MPM: plid=0x%x llid=0x%x", VAR_25, VAR_26);

 if (VAR_21 == 130)
  FUNC_19(VAR_3, "MPM: close reason=%u",
      FUNC_0(VAR_30.reason));

 VAR_24 = FUNC_1(VAR_22, VAR_19->sa);





 if (!VAR_24 && VAR_21 == 128 &&
     (!(VAR_23->security & VAR_2) ||
      FUNC_13(VAR_22->wpa_auth, VAR_19->sa, ((void*)0))))
  VAR_24 = FUNC_6(VAR_18, VAR_19->sa, &VAR_29);

 if (!VAR_24) {
  FUNC_19(VAR_3, "MPM: No STA entry for peer");
  return;
 }
 if (!VAR_24->my_lid)
  FUNC_8(VAR_18, VAR_24);

 if (VAR_23->security & VAR_2) {
  int VAR_35;

  VAR_35 = FUNC_10(VAR_18, VAR_24, &VAR_29,
         &VAR_19->u.action.category,
         VAR_30.chosen_pmk,
         VAR_31, VAR_32);
  if (VAR_35) {
   FUNC_19(VAR_3,
       "MPM: RSN process rejected frame (res=%d)",
       VAR_35);
   if (VAR_21 == 128 && VAR_35 == -2) {

    FUNC_7(VAR_18, VAR_24, VAR_7,
          VAR_14);
   }
   return;
  }
 }

 if (VAR_24->plink_state == VAR_8) {
  FUNC_19(VAR_3, "MPM: PLINK_BLOCKED");
  return;
 }


 switch (VAR_21) {
 case 128:
  if (FUNC_12(VAR_22) == 0) {
   VAR_28 = VAR_11;
   VAR_34 = VAR_15;
   FUNC_19(VAR_4,
       "MPM: Peer link num over quota(%d)",
       VAR_22->max_plinks);
  } else if (VAR_24->peer_lid && VAR_24->peer_lid != VAR_25) {
   FUNC_19(VAR_3,
       "MPM: peer_lid mismatch: 0x%x != 0x%x",
       VAR_24->peer_lid, VAR_25);
   return;
  } else {
   VAR_24->peer_lid = VAR_25;
   VAR_28 = VAR_6;
  }
  break;
 case 129:
  if (FUNC_12(VAR_22) == 0) {
   VAR_28 = VAR_11;
   VAR_34 = VAR_15;
   FUNC_19(VAR_4,
       "MPM: Peer link num over quota(%d)",
       VAR_22->max_plinks);
  } else if (VAR_24->my_lid != VAR_26 ||
      (VAR_24->peer_lid && VAR_24->peer_lid != VAR_25)) {
   FUNC_19(VAR_3,
       "MPM: lid mismatch: my_lid: 0x%x != 0x%x or peer_lid: 0x%x != 0x%x",
       VAR_24->my_lid, VAR_26, VAR_24->peer_lid, VAR_25);
   return;
  } else {
   if (!VAR_24->peer_lid)
    VAR_24->peer_lid = VAR_25;
   VAR_24->peer_aid = VAR_27;
   VAR_28 = VAR_1;
  }
  break;
 case 130:
  if (VAR_24->plink_state == VAR_9)
   VAR_28 = VAR_0;
  else if (VAR_24->peer_lid != VAR_25) {
   FUNC_19(VAR_3,
       "MPM: peer_lid mismatch: 0x%x != 0x%x",
       VAR_24->peer_lid, VAR_25);
   return;
  } else if (VAR_30.plid && VAR_24->my_lid != VAR_26) {
   FUNC_19(VAR_3,
       "MPM: my_lid mismatch: 0x%x != 0x%x",
       VAR_24->my_lid, VAR_26);
   return;
  } else {
   VAR_28 = VAR_0;
  }
  break;
 default:





  return;
 }
 FUNC_7(VAR_18, VAR_24, VAR_28, VAR_34);
}
