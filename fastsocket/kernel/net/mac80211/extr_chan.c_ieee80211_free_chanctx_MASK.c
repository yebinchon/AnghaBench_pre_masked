
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int radar_enabled; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;
struct cfg80211_chan_def {scalar_t__ center_freq2; TYPE_1__* chan; int center_freq1; int width; } ;
struct ieee80211_local {int mtx; int chanctx_list; TYPE_3__ hw; struct cfg80211_chan_def _oper_chandef; int use_chanctx; int chanctx_mtx; } ;
struct ieee80211_chanctx {scalar_t__ refcount; int list; } ;
struct TYPE_4__ {int center_freq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_3 (struct ieee80211_local*,int ) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (struct ieee80211_chanctx*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(struct ieee80211_local *VAR_2,
       struct ieee80211_chanctx *VAR_3)
{
 bool VAR_4 = 0;
 FUNC_8(&VAR_2->chanctx_mtx);

 FUNC_1(VAR_3->refcount != 0);

 if (!VAR_2->use_chanctx) {
  struct cfg80211_chan_def *VAR_5 = &VAR_2->_oper_chandef;
  VAR_5->width = VAR_0;
  VAR_5->center_freq1 = VAR_5->chan->center_freq;
  VAR_5->center_freq2 = 0;




  if (VAR_2->hw.conf.radar_enabled)
   VAR_4 = 1;
  VAR_2->hw.conf.radar_enabled = 0;

  FUNC_3(VAR_2, 0);
 } else {
  FUNC_2(VAR_2, VAR_3);
 }

 FUNC_6(&VAR_3->list);
 FUNC_5(VAR_3, VAR_1);


 FUNC_0(VAR_4 && !FUNC_7(&VAR_2->chanctx_list));

 FUNC_9(&VAR_2->mtx);
 FUNC_4(VAR_2);
 FUNC_10(&VAR_2->mtx);
}
