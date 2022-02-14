
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int center_freq2; int center_freq1; } ;
typedef enum nl80211_dfs_state { ____Placeholder_nl80211_dfs_state } nl80211_dfs_state ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def const*) ;
 int FUNC_2 (struct cfg80211_chan_def const*) ;
 int FUNC_3 (struct wiphy*,int ,int,int) ;

void FUNC_4(struct wiphy *VAR_0,
       const struct cfg80211_chan_def *VAR_1,
       enum nl80211_dfs_state VAR_2)
{
 int VAR_3;

 if (FUNC_0(!FUNC_2(VAR_1)))
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  return;

 FUNC_3(VAR_0, VAR_1->center_freq1,
         VAR_3, VAR_2);

 if (!VAR_1->center_freq2)
  return;
 FUNC_3(VAR_0, VAR_1->center_freq2,
         VAR_3, VAR_2);
}
