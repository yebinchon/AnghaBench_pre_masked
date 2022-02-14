
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef void* u16 ;
struct ieee80211_vht_capabilities {int dummy; } ;
struct ieee80211_ht_capabilities {int dummy; } ;
struct ieee80211_he_capabilities {int dummy; } ;
struct hostapd_sta_add_params {void* const* addr; void* const* supp_rates; size_t supp_rates_len; size_t he_capab_len; int vht_opmode_enabled; int support_p2p_ps; int set; void* qosinfo; int flags; void* vht_opmode; struct ieee80211_he_capabilities const* he_capab; struct ieee80211_vht_capabilities const* vht_capabilities; struct ieee80211_ht_capabilities const* ht_capabilities; void* listen_interval; void* capability; void* aid; } ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
typedef int params ;
struct TYPE_2__ {int (* sta_add ) (int ,struct hostapd_sta_add_params*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hostapd_sta_add_params*,int ,int) ;
 int FUNC_2 (int ,struct hostapd_sta_add_params*) ;

int FUNC_3(struct hostapd_data *VAR_1,
      const u8 *VAR_2, u16 VAR_3, u16 VAR_4,
      const u8 *VAR_5, size_t VAR_6,
      u16 VAR_7,
      const struct ieee80211_ht_capabilities *VAR_8,
      const struct ieee80211_vht_capabilities *VAR_9,
      const struct ieee80211_he_capabilities *VAR_10,
      size_t VAR_11,
      u32 VAR_12, u8 VAR_13, u8 VAR_14, int VAR_15,
      int VAR_16)
{
 struct hostapd_sta_add_params VAR_17;

 if (VAR_1->driver == ((void*)0))
  return 0;
 if (VAR_1->driver->sta_add == ((void*)0))
  return 0;

 FUNC_1(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.addr = VAR_2;
 VAR_17.aid = VAR_3;
 VAR_17.capability = VAR_4;
 VAR_17.supp_rates = VAR_5;
 VAR_17.supp_rates_len = VAR_6;
 VAR_17.listen_interval = VAR_7;
 VAR_17.ht_capabilities = VAR_8;
 VAR_17.vht_capabilities = VAR_9;
 VAR_17.he_capab = VAR_10;
 VAR_17.he_capab_len = VAR_11;
 VAR_17.vht_opmode_enabled = !!(VAR_12 & VAR_0);
 VAR_17.vht_opmode = VAR_14;
 VAR_17.flags = FUNC_0(VAR_12);
 VAR_17.qosinfo = VAR_13;
 VAR_17.support_p2p_ps = VAR_15;
 VAR_17.set = VAR_16;
 return VAR_1->driver->sta_add(VAR_1->drv_priv, &VAR_17);
}
