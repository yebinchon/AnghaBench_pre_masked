
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct sta_info {int aid; int flags; struct wpabuf* fils_hlp_resp; int wpa_sm; int auth_alg; scalar_t__ p2p_ie; TYPE_5__* dpp_pfs; int owe_group; scalar_t__ owe_ecdh; scalar_t__ qos_map_enabled; struct ieee80211_vht_capabilities* vht_capabilities; } ;
struct ieee802_11_elems {int const* fils_session; } ;
struct ieee80211_vht_capabilities {int vht_capabilities_info; } ;
struct TYPE_15__ {int * variable; void* aid; void* status_code; void* capab_info; } ;
struct TYPE_16__ {TYPE_7__ assoc_resp; } ;
struct ieee80211_mgmt {TYPE_8__ u; int * bssid; int * sa; int * da; int frame_control; } ;
struct hostapd_data {TYPE_6__* conf; scalar_t__ p2p_group; TYPE_4__* iface; TYPE_3__* iconf; int const* own_addr; } ;
typedef enum p2p_status_code { ____Placeholder_p2p_status_code } p2p_status_code ;
struct TYPE_14__ {int wpa_key_mgmt; int p2p; struct wpabuf* assocresp_elements; scalar_t__ wpa; scalar_t__ vendor_vht; scalar_t__ use_sta_nsts; int disable_11ac; } ;
struct TYPE_13__ {struct wpabuf* ie; TYPE_1__* curve; } ;
struct TYPE_12__ {struct wpabuf* fst_ies; TYPE_2__* conf; } ;
struct TYPE_11__ {int rssi_reject_assoc_rssi; scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; } ;
struct TYPE_10__ {int vht_capab; } ;
struct TYPE_9__ {scalar_t__ prime_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int VAR_21 ;
 int VAR_22 ;

 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (int *,int ) ;
 struct wpabuf* FUNC_3 (scalar_t__,int ) ;
 int VAR_31 ;
 int FUNC_4 (int ,int *,int,size_t,struct wpabuf*) ;
 void* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct hostapd_data*,struct ieee80211_mgmt*,int,int ) ;
 int * FUNC_7 (struct hostapd_data*,struct sta_info*,int *) ;
 int * FUNC_8 (struct hostapd_data*,int *) ;
 int * FUNC_9 (struct hostapd_data*,int *) ;
 int * FUNC_10 (struct hostapd_data*,int *) ;
 int * FUNC_11 (struct hostapd_data*,int *,int ) ;
 int * FUNC_12 (struct hostapd_data*,int *) ;
 int * FUNC_13 (struct hostapd_data*,int *) ;
 int * FUNC_14 (struct hostapd_data*,int *) ;
 int * FUNC_15 (struct hostapd_data*,int *) ;
 int * FUNC_16 (struct hostapd_data*,int *,int) ;
 int * FUNC_17 (struct hostapd_data*,int *,int,int) ;
 int * FUNC_18 (struct hostapd_data*,int *) ;
 int * FUNC_19 (struct hostapd_data*,int *) ;
 int * FUNC_20 (struct hostapd_data*,int *) ;
 int * FUNC_21 (struct hostapd_data*,int *) ;
 int * FUNC_22 (struct hostapd_data*,int *) ;
 int * FUNC_23 (struct hostapd_data*,int *) ;
 int * FUNC_24 (struct hostapd_data*,int *,int) ;
 int * FUNC_25 (struct hostapd_data*,int *) ;
 int * FUNC_26 (struct hostapd_data*,int *) ;
 int FUNC_27 (struct hostapd_data*) ;
 scalar_t__ FUNC_28 (int const*,size_t,struct ieee802_11_elems*,int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *,int const*,int) ;
 int * FUNC_32 (size_t) ;
 struct wpabuf* FUNC_33 (scalar_t__,int) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int * FUNC_36 (int ,int *,int,int const*,size_t) ;
 int * FUNC_37 (int ,int *,int,int const*,size_t) ;
 int FUNC_38 (int ,char*,...) ;
 int * FUNC_39 (int ,int *,int,int ,int const*,size_t) ;
 int FUNC_40 (struct wpabuf*) ;
 int const* FUNC_41 (struct wpabuf*) ;
 int FUNC_42 (struct wpabuf*) ;
 struct wpabuf* FUNC_43 () ;

__attribute__((used)) static u16 FUNC_44(struct hostapd_data *VAR_32, struct sta_info *VAR_33,
      const u8 *VAR_34, u16 VAR_35, int VAR_36,
      const u8 *VAR_37, size_t VAR_38, int VAR_39)
{
 int VAR_40;
 u8 *VAR_41;
 size_t VAR_42;
 struct ieee80211_mgmt *VAR_43;
 u8 *VAR_44;
 u16 VAR_45 = 128;

 VAR_42 = sizeof(struct ieee80211_mgmt) + 1024;
 VAR_41 = FUNC_32(VAR_42);
 if (!VAR_41) {
  VAR_45 = VAR_23;
  goto done;
 }
 VAR_43 = (struct ieee80211_mgmt *) VAR_41;
 VAR_43->frame_control =
  FUNC_1(VAR_20,
        (VAR_36 ? VAR_19 :
         VAR_18));
 FUNC_31(VAR_43->da, VAR_34, VAR_0);
 FUNC_31(VAR_43->sa, VAR_32->own_addr, VAR_0);
 FUNC_31(VAR_43->bssid, VAR_32->own_addr, VAR_0);

 VAR_40 = VAR_2;
 VAR_40 += sizeof(VAR_43->u.assoc_resp);
 VAR_43->u.assoc_resp.capab_info =
  FUNC_5(FUNC_27(VAR_32));
 VAR_43->u.assoc_resp.status_code = FUNC_5(VAR_35);

 VAR_43->u.assoc_resp.aid = FUNC_5((VAR_33 ? VAR_33->aid : 0) |
            FUNC_0(14) | FUNC_0(15));

 VAR_44 = FUNC_22(VAR_32, VAR_43->u.assoc_resp.variable);

 VAR_44 = FUNC_10(VAR_32, VAR_44);
 VAR_44 = FUNC_9(VAR_32, VAR_44);
 VAR_44 = FUNC_8(VAR_32, VAR_44);
 if (VAR_33 && VAR_33->qos_map_enabled)
  VAR_44 = FUNC_20(VAR_32, VAR_44);
 if (VAR_33 && (VAR_33->flags & VAR_27))
  VAR_44 = FUNC_26(VAR_32, VAR_44);
 if (VAR_33 && (VAR_33->flags & VAR_25))
  VAR_44 = FUNC_18(VAR_32, VAR_44);
 VAR_44 = FUNC_16(VAR_32, VAR_44, VAR_41 + VAR_42 - VAR_44);

 if (VAR_32->conf->assocresp_elements &&
     (size_t) (VAR_41 + VAR_42 - VAR_44) >=
     FUNC_42(VAR_32->conf->assocresp_elements)) {
  FUNC_31(VAR_44, FUNC_41(VAR_32->conf->assocresp_elements),
     FUNC_42(VAR_32->conf->assocresp_elements));
  VAR_44 += FUNC_42(VAR_32->conf->assocresp_elements);
 }

 VAR_40 += VAR_44 - VAR_43->u.assoc_resp.variable;
 if (FUNC_6(VAR_32, VAR_43, VAR_40, 0) < 0) {
  FUNC_38(VAR_5, "Failed to send assoc resp: %s",
      FUNC_34(VAR_31));
  VAR_45 = VAR_23;
 }

done:
 FUNC_30(VAR_41);
 return VAR_45;
}
