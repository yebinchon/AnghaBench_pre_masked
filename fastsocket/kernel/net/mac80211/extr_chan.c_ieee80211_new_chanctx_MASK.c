
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_4__ {int radar_enabled; } ;
struct TYPE_5__ {TYPE_1__ conf; scalar_t__ chanctx_data_size; } ;
struct ieee80211_local {int mtx; int chanctx_list; struct cfg80211_chan_def _oper_chandef; int use_chanctx; TYPE_2__ hw; int chanctx_mtx; } ;
struct TYPE_6__ {int rx_chains_static; int rx_chains_dynamic; int radar_enabled; struct cfg80211_chan_def def; } ;
struct ieee80211_chanctx {int mode; int list; TYPE_3__ conf; } ;
typedef enum ieee80211_chanctx_mode { ____Placeholder_ieee80211_chanctx_mode } ieee80211_chanctx_mode ;


 int VAR_0 ;
 struct ieee80211_chanctx* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_2 (struct ieee80211_local*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ieee80211_local*) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (struct ieee80211_local*) ;
 int FUNC_6 (struct ieee80211_chanctx*) ;
 struct ieee80211_chanctx* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct ieee80211_chanctx *
FUNC_12(struct ieee80211_local *VAR_2,
        const struct cfg80211_chan_def *VAR_3,
        enum ieee80211_chanctx_mode VAR_4)
{
 struct ieee80211_chanctx *VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_9(&VAR_2->chanctx_mtx);

 VAR_5 = FUNC_7(sizeof(*VAR_5) + VAR_2->hw.chanctx_data_size, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->conf.def = *VAR_3;
 VAR_5->conf.rx_chains_static = 1;
 VAR_5->conf.rx_chains_dynamic = 1;
 VAR_5->mode = VAR_4;
 VAR_5->conf.radar_enabled = FUNC_4(VAR_2);
 if (!VAR_2->use_chanctx)
  VAR_2->hw.conf.radar_enabled = VAR_5->conf.radar_enabled;


 FUNC_10(&VAR_2->mtx);

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  FUNC_2(VAR_2, VAR_6);

 if (!VAR_2->use_chanctx) {
  VAR_2->_oper_chandef = *VAR_3;
  FUNC_2(VAR_2, 0);
 } else {
  VAR_7 = FUNC_1(VAR_2, VAR_5);
  if (VAR_7) {
   FUNC_6(VAR_5);
   VAR_5 = FUNC_0(VAR_7);

   FUNC_5(VAR_2);
   goto out;
  }
 }


 FUNC_8(&VAR_5->list, &VAR_2->chanctx_list);

 out:
 FUNC_11(&VAR_2->mtx);

 return VAR_5;
}
