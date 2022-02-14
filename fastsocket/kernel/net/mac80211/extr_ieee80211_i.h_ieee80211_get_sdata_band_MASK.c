
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_3__ def; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_5__ {int band; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline enum ieee80211_band
FUNC_4(struct ieee80211_sub_if_data *VAR_1)
{
 enum ieee80211_band VAR_2 = VAR_0;
 struct ieee80211_chanctx_conf *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_1->vif.chanctx_conf);
 if (!FUNC_0(!VAR_3))
  VAR_2 = VAR_3->def.chan->band;
 FUNC_3();

 return VAR_2;
}
