
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int radar_enabled; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;
struct ieee80211_local {int radar_detect_enabled; TYPE_2__ hw; int use_chanctx; int chanctx_mtx; } ;
struct TYPE_6__ {int radar_enabled; } ;
struct ieee80211_chanctx {TYPE_3__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_chanctx*,int ) ;
 int FUNC_1 (struct ieee80211_local*,int ) ;
 int FUNC_2 (struct ieee80211_local*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ieee80211_local *VAR_2,
        struct ieee80211_chanctx *VAR_3)
{
 bool VAR_4;

 FUNC_3(&VAR_2->chanctx_mtx);

 VAR_4 = FUNC_2(VAR_2);

 if (VAR_4 == VAR_3->conf.radar_enabled)
  return;

 VAR_3->conf.radar_enabled = VAR_4;
 VAR_2->radar_detect_enabled = VAR_3->conf.radar_enabled;

 if (!VAR_2->use_chanctx) {
  VAR_2->hw.conf.radar_enabled = VAR_3->conf.radar_enabled;
  FUNC_1(VAR_2, VAR_1);
 }

 FUNC_0(VAR_2, VAR_3, VAR_0);
}
