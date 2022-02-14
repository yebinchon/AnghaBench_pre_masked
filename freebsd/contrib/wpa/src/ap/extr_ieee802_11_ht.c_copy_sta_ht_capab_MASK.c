
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {int flags; int * ht_capabilities; } ;
struct ieee80211_ht_capabilities {int dummy; } ;
struct hostapd_data {TYPE_2__* conf; TYPE_1__* iconf; } ;
struct TYPE_4__ {scalar_t__ disable_11n; } ;
struct TYPE_3__ {int ieee80211n; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int) ;

u16 FUNC_3(struct hostapd_data *VAR_4, struct sta_info *VAR_5,
        const u8 *VAR_6)
{





 if (!VAR_6 || !(VAR_5->flags & VAR_3) ||
     !VAR_4->iconf->ieee80211n || VAR_4->conf->disable_11n) {
  VAR_5->flags &= ~VAR_2;
  FUNC_0(VAR_5->ht_capabilities);
  VAR_5->ht_capabilities = ((void*)0);
  return VAR_0;
 }

 if (VAR_5->ht_capabilities == ((void*)0)) {
  VAR_5->ht_capabilities =
   FUNC_2(sizeof(struct ieee80211_ht_capabilities));
  if (VAR_5->ht_capabilities == ((void*)0))
   return VAR_1;
 }

 VAR_5->flags |= VAR_2;
 FUNC_1(VAR_5->ht_capabilities, VAR_6,
    sizeof(struct ieee80211_ht_capabilities));

 return VAR_0;
}
