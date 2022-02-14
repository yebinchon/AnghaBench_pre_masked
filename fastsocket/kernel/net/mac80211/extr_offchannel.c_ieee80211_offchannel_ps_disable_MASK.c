
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_4__ {scalar_t__ dynamic_ps_timeout; int flags; } ;
struct TYPE_3__ {TYPE_2__ conf; } ;
struct ieee80211_local {TYPE_1__ hw; int dynamic_ps_timer; scalar_t__ offchannel_ps_enabled; int ps_sdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,int ) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_3->local;

 if (!VAR_4->ps_sdata)
  FUNC_1(VAR_4, VAR_3, 0);
 else if (VAR_4->offchannel_ps_enabled) {
  VAR_4->hw.conf.flags |= VAR_1;
  FUNC_0(VAR_4, VAR_0);
 } else if (VAR_4->hw.conf.dynamic_ps_timeout > 0) {






  FUNC_1(VAR_4, VAR_3, 0);
  FUNC_4(&VAR_4->dynamic_ps_timer, VAR_2 +
     FUNC_5(VAR_4->hw.conf.dynamic_ps_timeout));
 }

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
