
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_sub_if_data*,int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_3,
           struct net_device *VAR_4,
           int VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = 0;

 if (VAR_5 == VAR_1)
  VAR_7 += VAR_2;

 VAR_7 += FUNC_1(VAR_6, VAR_5);

 if (VAR_7 == 0)
  return -VAR_0;
 return VAR_7;
}
