
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vht_capabilities {int vht_capabilities_info; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_2__ {int vht_capab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_vht_capabilities*,struct ieee80211_vht_capabilities*,int) ;

void FUNC_3(struct hostapd_data *VAR_11,
      struct ieee80211_vht_capabilities *VAR_12,
      struct ieee80211_vht_capabilities *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;

 if (VAR_12 == ((void*)0))
  return;
 FUNC_2(VAR_13, VAR_12, sizeof(*VAR_13));

 VAR_14 = FUNC_1(VAR_13->vht_capabilities_info);
 VAR_15 = VAR_11->iconf->vht_capab;


 VAR_16 = VAR_5 | VAR_4;
 VAR_14 &= ~VAR_16 | (VAR_15 & VAR_16);


 if (!(VAR_15 & VAR_9))
  VAR_14 &= ~(VAR_8 |
    VAR_0);

 if (!(VAR_15 & VAR_8))
  VAR_14 &= ~(VAR_9 |
    VAR_6);

 if (!(VAR_15 & VAR_2))
  VAR_14 &= ~VAR_1;

 if (!(VAR_15 & VAR_1))
  VAR_14 &= ~VAR_2;


 switch (VAR_15 & VAR_7) {
 case 128:
  break;
 case 129:
  if (VAR_14 & 128) {
   VAR_14 &= ~128;
   VAR_14 |= 129;
  }
  break;
 default:
  VAR_14 &= ~VAR_7;
  break;
 }

 if (!(VAR_14 & VAR_7))
  VAR_14 &= ~VAR_4;





 if (!(VAR_15 & VAR_3))
  VAR_14 &= ~VAR_10;
 if (!(VAR_15 & VAR_10))
  VAR_14 &= ~VAR_3;

 VAR_13->vht_capabilities_info = FUNC_0(VAR_14);
}
