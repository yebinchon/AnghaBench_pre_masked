
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wiphy*,struct cfg80211_chan_def*,int) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_chan_def*) ;
 int FUNC_2 (int) ;

bool FUNC_3(struct wiphy *VAR_4,
        struct cfg80211_chan_def *VAR_5)
{
 bool VAR_6;

 FUNC_1(VAR_4, VAR_5);

 VAR_6 = FUNC_0(VAR_4, VAR_5,
          VAR_0 |
          VAR_2 |
          VAR_1 |
          VAR_3);

 FUNC_2(VAR_6);
 return VAR_6;
}
