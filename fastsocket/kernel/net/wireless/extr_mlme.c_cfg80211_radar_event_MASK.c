
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_registered_device {int dfs_update_channels_wk; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 int VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct cfg80211_chan_def*,int ,int *,int ) ;
 int FUNC_3 (int ,int *,unsigned long) ;
 int FUNC_4 (struct wiphy*,struct cfg80211_chan_def*) ;
 struct cfg80211_registered_device* FUNC_5 (struct wiphy*) ;

void FUNC_6(struct wiphy *VAR_4,
     struct cfg80211_chan_def *VAR_5,
     gfp_t VAR_6)
{
 struct cfg80211_registered_device *VAR_7 = FUNC_5(VAR_4);
 unsigned long VAR_8;

 FUNC_4(VAR_4, VAR_5);





 FUNC_0(VAR_4, VAR_5, VAR_1);

 VAR_8 = FUNC_1(VAR_0);
 FUNC_3(VAR_3, &VAR_7->dfs_update_channels_wk,
      VAR_8);

 FUNC_2(VAR_7, VAR_5, VAR_2, ((void*)0), VAR_6);
}
