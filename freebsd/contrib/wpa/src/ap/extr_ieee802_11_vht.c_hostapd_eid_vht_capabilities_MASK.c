
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_vht_capabilities {int vht_supported_mcs_set; int vht_capabilities_info; } ;
struct hostapd_hw_modes {scalar_t__ mode; scalar_t__ vht_capab; int vht_mcs_set; } ;
struct hostapd_data {TYPE_3__* iface; TYPE_1__* conf; } ;
struct TYPE_6__ {int num_hw_features; TYPE_2__* conf; struct hostapd_hw_modes* hw_features; struct hostapd_hw_modes* current_mode; } ;
struct TYPE_5__ {int vht_capab; } ;
struct TYPE_4__ {scalar_t__ vendor_vht; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ieee80211_vht_capabilities*,int ,int) ;

u8 * FUNC_4(struct hostapd_data *VAR_4, u8 *VAR_5, u32 VAR_6)
{
 struct ieee80211_vht_capabilities *VAR_7;
 struct hostapd_hw_modes *VAR_8 = VAR_4->iface->current_mode;
 u8 *VAR_9 = VAR_5;

 if (!VAR_8)
  return VAR_5;

 if (VAR_8->mode == VAR_1 && VAR_4->conf->vendor_vht &&
     VAR_8->vht_capab == 0 && VAR_4->iface->hw_features) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_4->iface->num_hw_features; VAR_10++) {
   if (VAR_4->iface->hw_features[VAR_10].mode ==
       VAR_0) {
    VAR_8 = &VAR_4->iface->hw_features[VAR_10];
    break;
   }
  }
 }

 *VAR_9++ = VAR_3;
 *VAR_9++ = sizeof(*VAR_7);

 VAR_7 = (struct ieee80211_vht_capabilities *) VAR_9;
 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->vht_capabilities_info = FUNC_0(
  VAR_4->iface->conf->vht_capab);

 if (VAR_6 != 0) {
  u32 VAR_11;

  VAR_11 = FUNC_1(VAR_7->vht_capabilities_info);
  VAR_11 = (VAR_11 >> VAR_2) & 7;
  VAR_7->vht_capabilities_info &=
   ~(FUNC_0(VAR_11 <<
           VAR_2));
  VAR_7->vht_capabilities_info |=
   FUNC_0(VAR_6 << VAR_2);
 }


 FUNC_2(&VAR_7->vht_supported_mcs_set, VAR_8->vht_mcs_set, 8);

 VAR_9 += sizeof(*VAR_7);

 return VAR_9;
}
