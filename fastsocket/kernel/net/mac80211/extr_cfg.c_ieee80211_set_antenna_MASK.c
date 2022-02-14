
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_local {scalar_t__ started; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,int ,int ) ;
 struct ieee80211_local* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->started)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
