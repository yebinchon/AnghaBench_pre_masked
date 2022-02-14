
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_info {scalar_t__ plink_state; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static u32 FUNC_4(struct sta_info *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_2->sdata;
 u32 VAR_4 = 0;

 if (VAR_2->plink_state == VAR_1)
  VAR_4 = FUNC_3(VAR_3);
 VAR_2->plink_state = VAR_0;
 FUNC_2(VAR_2);

 FUNC_1(VAR_2);
 VAR_4 |= FUNC_0(VAR_3);

 return VAR_4;
}
