
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {TYPE_1__* ic_scan_methods; } ;
struct ieee80211_scanparams {int dummy; } ;
struct ieee80211_frame {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {void (* sc_add_scan ) (struct ieee80211vap*,struct ieee80211_channel*,struct ieee80211_scanparams const*,struct ieee80211_frame const*,int,int,int) ;} ;


 void FUNC_0 (struct ieee80211vap*,struct ieee80211_channel*,struct ieee80211_scanparams const*,struct ieee80211_frame const*,int,int,int) ;

void
FUNC_1(struct ieee80211vap *VAR_0,
 struct ieee80211_channel *VAR_1,
 const struct ieee80211_scanparams *VAR_2,
 const struct ieee80211_frame *VAR_3,
 int VAR_4, int VAR_5, int VAR_6)
{
 struct ieee80211com *VAR_7 = VAR_0->iv_ic;

 return (VAR_7->ic_scan_methods->sc_add_scan(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6));
}
