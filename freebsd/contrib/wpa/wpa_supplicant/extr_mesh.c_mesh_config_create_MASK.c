
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_enc; TYPE_1__* conf; } ;
struct wpa_ssid {int key_mgmt; scalar_t__ ieee80211w; int dot11MeshHoldingTimeout; int dot11MeshConfirmTimeout; int dot11MeshRetryTimeout; int dot11MeshMaxRetries; int group_cipher; int pairwise_cipher; int ocv; int ssid_len; int ssid; } ;
struct mesh_conf {int security; scalar_t__ ieee80211w; int pairwise_cipher; int group_cipher; int mesh_auth_id; int dot11MeshHoldingTimeout; int dot11MeshConfirmTimeout; int dot11MeshRetryTimeout; int dot11MeshMaxRetries; int mesh_sp_id; scalar_t__ mesh_cc_id; int mesh_pm_id; int mesh_pp_id; int mgmt_group_cipher; int ocv; int meshid_len; int meshid; } ;
struct TYPE_2__ {scalar_t__ pmf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct mesh_conf*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct mesh_conf* FUNC_2 (int) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static struct mesh_conf * FUNC_6(struct wpa_supplicant *VAR_14,
          struct wpa_ssid *VAR_15)
{
 struct mesh_conf *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_2(sizeof(struct mesh_conf));
 if (!VAR_16)
  return ((void*)0);

 FUNC_1(VAR_16->meshid, VAR_15->ssid, VAR_15->ssid_len);
 VAR_16->meshid_len = VAR_15->ssid_len;

 if (VAR_15->key_mgmt & VAR_13)
  VAR_16->security |= VAR_1 |
   VAR_0;
 else
  VAR_16->security |= VAR_2;
 VAR_17 = FUNC_5(VAR_15->pairwise_cipher, 0);
 if (VAR_17 < 0 || VAR_17 == VAR_11) {
  FUNC_3(VAR_14, VAR_7, "mesh: Invalid pairwise cipher");
  FUNC_0(VAR_16);
  return ((void*)0);
 }
 VAR_16->pairwise_cipher = VAR_17;

 VAR_17 = FUNC_4(VAR_15->group_cipher);
 if (VAR_17 < 0 || VAR_17 == VAR_11 ||
     VAR_17 == VAR_10) {
  FUNC_3(VAR_14, VAR_7, "mesh: Invalid group cipher");
  FUNC_0(VAR_16);
  return ((void*)0);
 }

 VAR_16->group_cipher = VAR_17;
 if (VAR_16->ieee80211w != VAR_8)
  VAR_16->mgmt_group_cipher = VAR_9;


 VAR_16->mesh_pp_id = VAR_4;
 VAR_16->mesh_pm_id = VAR_3;
 VAR_16->mesh_cc_id = 0;
 VAR_16->mesh_sp_id = VAR_5;
 VAR_16->mesh_auth_id = (VAR_16->security & VAR_1) ? 1 : 0;
 VAR_16->dot11MeshMaxRetries = VAR_15->dot11MeshMaxRetries;
 VAR_16->dot11MeshRetryTimeout = VAR_15->dot11MeshRetryTimeout;
 VAR_16->dot11MeshConfirmTimeout = VAR_15->dot11MeshConfirmTimeout;
 VAR_16->dot11MeshHoldingTimeout = VAR_15->dot11MeshHoldingTimeout;

 return VAR_16;
}
