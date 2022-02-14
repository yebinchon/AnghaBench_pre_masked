
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ieee80211_sub_if_data*) ;

__attribute__((used)) static u16 FUNC_1(struct ieee80211_sub_if_data *VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_5->local;
 u16 VAR_7;

 VAR_7 = 0;
 if (FUNC_0(VAR_5) != VAR_0)
  return VAR_7;

 if (!(VAR_6->hw.flags & VAR_2))
  VAR_7 |= VAR_4;
 if (!(VAR_6->hw.flags & VAR_1))
  VAR_7 |= VAR_3;

 return VAR_7;
}
