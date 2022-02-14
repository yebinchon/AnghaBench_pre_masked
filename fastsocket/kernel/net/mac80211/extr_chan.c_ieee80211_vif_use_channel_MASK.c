
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct TYPE_3__ {struct cfg80211_chan_def chandef; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; scalar_t__ dev; struct ieee80211_local* local; } ;
struct ieee80211_local {int chanctx_mtx; } ;
struct ieee80211_chanctx {scalar_t__ refcount; } ;
typedef enum ieee80211_chanctx_mode { ____Placeholder_ieee80211_chanctx_mode } ieee80211_chanctx_mode ;


 scalar_t__ FUNC_0 (struct ieee80211_chanctx*) ;
 int FUNC_1 (struct ieee80211_chanctx*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_chanctx*) ;
 struct ieee80211_chanctx* FUNC_5 (struct ieee80211_local*,struct cfg80211_chan_def const*,int) ;
 int FUNC_6 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 struct ieee80211_chanctx* FUNC_7 (struct ieee80211_local*,struct cfg80211_chan_def const*,int) ;
 int FUNC_8 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_9 (struct ieee80211_local*,struct ieee80211_chanctx*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int FUNC_13(struct ieee80211_sub_if_data *VAR_0,
         const struct cfg80211_chan_def *VAR_1,
         enum ieee80211_chanctx_mode VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_0->local;
 struct ieee80211_chanctx *VAR_4;
 int VAR_5;

 FUNC_2(VAR_0->dev && FUNC_12(VAR_0->dev));

 FUNC_10(&VAR_3->chanctx_mtx);
 FUNC_3(VAR_0);

 VAR_4 = FUNC_5(VAR_3, VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_7(VAR_3, VAR_1, VAR_2);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }

 VAR_0->vif.bss_conf.chandef = *VAR_1;

 VAR_5 = FUNC_4(VAR_0, VAR_4);
 if (VAR_5) {

  if (VAR_4->refcount == 0)
   FUNC_6(VAR_3, VAR_4);
  goto out;
 }

 FUNC_9(VAR_3, VAR_4);
 FUNC_8(VAR_3, VAR_4);
 out:
 FUNC_11(&VAR_3->chanctx_mtx);
 return VAR_5;
}
