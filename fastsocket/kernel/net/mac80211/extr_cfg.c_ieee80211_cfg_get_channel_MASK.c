
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int chanctx_conf; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_local {scalar_t__ open_count; scalar_t__ monitors; struct cfg80211_chan_def _oper_chandef; struct cfg80211_chan_def monitor_chandef; scalar_t__ use_chanctx; } ;
struct ieee80211_chanctx_conf {struct cfg80211_chan_def def; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_1 ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct ieee80211_local* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_2,
         struct wireless_dev *VAR_3,
         struct cfg80211_chan_def *VAR_4)
{
 struct ieee80211_sub_if_data *VAR_5 = FUNC_0(VAR_3);
 struct ieee80211_local *VAR_6 = FUNC_4(VAR_2);
 struct ieee80211_chanctx_conf *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_2();
 VAR_7 = FUNC_1(VAR_5->vif.chanctx_conf);
 if (VAR_7) {
  *VAR_4 = VAR_7->def;
  VAR_8 = 0;
 } else if (VAR_6->open_count > 0 &&
     VAR_6->open_count == VAR_6->monitors &&
     VAR_5->vif.type == VAR_1) {
  if (VAR_6->use_chanctx)
   *VAR_4 = VAR_6->monitor_chandef;
  else
   *VAR_4 = VAR_6->_oper_chandef;
  VAR_8 = 0;
 }
 FUNC_3();

 return VAR_8;
}
