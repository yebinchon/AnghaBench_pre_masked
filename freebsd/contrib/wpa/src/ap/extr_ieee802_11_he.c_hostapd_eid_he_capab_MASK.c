
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_he_capabilities {int* he_mac_capab_info; int* he_phy_capab_info; int* optional; } ;
struct hostapd_hw_modes {TYPE_1__* he_capab; } ;
struct hostapd_data {TYPE_4__* iface; } ;
typedef enum ieee80211_op_mode { ____Placeholder_ieee80211_op_mode } ieee80211_op_mode ;
struct TYPE_8__ {TYPE_3__* conf; struct hostapd_hw_modes* current_mode; } ;
struct TYPE_6__ {scalar_t__ he_mu_beamformer; scalar_t__ he_su_beamformee; scalar_t__ he_su_beamformer; } ;
struct TYPE_7__ {int he_oper_chwidth; TYPE_2__ he_phy_capab; } ;
struct TYPE_5__ {int * ppet; int * mcs; int * phy_cap; int * mac_cap; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (struct ieee80211_he_capabilities*,int ,int) ;

u8 * FUNC_3(struct hostapd_data *VAR_16, u8 *VAR_17,
     enum ieee80211_op_mode VAR_18)
{
 struct ieee80211_he_capabilities *VAR_19;
 struct hostapd_hw_modes *VAR_20 = VAR_16->iface->current_mode;
 u8 VAR_21 = ~VAR_2;
 u8 *VAR_22 = VAR_17;
 u8 VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;

 if (!VAR_20)
  return VAR_17;

 VAR_23 = sizeof(struct ieee80211_he_capabilities);
 VAR_25 = FUNC_0(VAR_20->he_capab[VAR_18].ppet[0],
        VAR_20->he_capab[VAR_18].phy_cap);

 switch (VAR_16->iface->conf->he_oper_chwidth) {
 case 129:
  VAR_21 |=
   VAR_6;
  VAR_24 += 4;

 case 131:
  VAR_21 |= VAR_3;
  VAR_24 += 4;

 case 130:
 case 128:
  VAR_21 |= VAR_5 |
   VAR_4;
  VAR_24 += 4;
  break;
 }

 VAR_23 += VAR_24 + VAR_25;

 *VAR_22++ = VAR_14;
 *VAR_22++ = 1 + VAR_23;
 *VAR_22++ = VAR_15;

 VAR_19 = (struct ieee80211_he_capabilities *) VAR_22;
 FUNC_2(VAR_19, 0, sizeof(*VAR_19));

 FUNC_1(VAR_19->he_mac_capab_info, VAR_20->he_capab[VAR_18].mac_cap,
    VAR_0);
 FUNC_1(VAR_19->he_phy_capab_info, VAR_20->he_capab[VAR_18].phy_cap,
    VAR_1);
 FUNC_1(VAR_19->optional, VAR_20->he_capab[VAR_18].mcs, VAR_24);
 if (VAR_25)
  FUNC_1(&VAR_19->optional[VAR_24],
     VAR_20->he_capab[VAR_18].ppet, VAR_25);

 if (VAR_16->iface->conf->he_phy_capab.he_su_beamformer)
  VAR_19->he_phy_capab_info[VAR_13] |=
   VAR_12;
 else
  VAR_19->he_phy_capab_info[VAR_13] &=
   ~VAR_12;

 if (VAR_16->iface->conf->he_phy_capab.he_su_beamformee)
  VAR_19->he_phy_capab_info[VAR_11] |=
   VAR_10;
 else
  VAR_19->he_phy_capab_info[VAR_11] &=
   ~VAR_10;

 if (VAR_16->iface->conf->he_phy_capab.he_mu_beamformer)
  VAR_19->he_phy_capab_info[VAR_9] |=
   VAR_8;
 else
  VAR_19->he_phy_capab_info[VAR_9] &=
   ~VAR_8;

 VAR_19->he_phy_capab_info[VAR_7] &=
  VAR_21;

 VAR_22 += VAR_23;

 return VAR_22;
}
