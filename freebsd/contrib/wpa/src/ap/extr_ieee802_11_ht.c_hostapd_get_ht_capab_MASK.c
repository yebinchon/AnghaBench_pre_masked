
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_ht_capabilities {int ht_capabilities_info; } ;
struct hostapd_data {TYPE_1__* iconf; } ;
struct TYPE_2__ {int ht_capab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_ht_capabilities*,struct ieee80211_ht_capabilities*,int) ;

void FUNC_3(struct hostapd_data *VAR_3,
     struct ieee80211_ht_capabilities *VAR_4,
     struct ieee80211_ht_capabilities *VAR_5)
{
 u16 VAR_6;

 if (VAR_4 == ((void*)0))
  return;
 FUNC_2(VAR_5, VAR_4, sizeof(*VAR_5));
 VAR_6 = FUNC_1(VAR_5->ht_capabilities_info);






 VAR_6 &= (VAR_3->iconf->ht_capab | VAR_0 |
  VAR_2 | VAR_1);






 if (!(VAR_3->iconf->ht_capab & VAR_0))
  VAR_6 &= ~VAR_2;
 if (!(VAR_3->iconf->ht_capab & VAR_2))
  VAR_6 &= ~VAR_0;

 VAR_5->ht_capabilities_info = FUNC_0(VAR_6);
}
