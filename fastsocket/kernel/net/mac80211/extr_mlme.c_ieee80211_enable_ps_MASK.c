
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_conf {scalar_t__ dynamic_ps_timeout; int flags; } ;
struct TYPE_2__ {int flags; struct ieee80211_conf conf; } ;
struct ieee80211_local {TYPE_1__ hw; int dynamic_ps_timer; scalar_t__ scanning; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_local*,int ) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_local *VAR_6,
    struct ieee80211_sub_if_data *VAR_7)
{
 struct ieee80211_conf *VAR_8 = &VAR_6->hw.conf;





 if (VAR_6->scanning)
  return;

 if (VAR_8->dynamic_ps_timeout > 0 &&
     !(VAR_6->hw.flags & VAR_4)) {
  FUNC_2(&VAR_6->dynamic_ps_timer, VAR_5 +
     FUNC_3(VAR_8->dynamic_ps_timeout));
 } else {
  if (VAR_6->hw.flags & VAR_2)
   FUNC_1(VAR_6, VAR_7, 1);

  if ((VAR_6->hw.flags & VAR_2) &&
      (VAR_6->hw.flags & VAR_3))
   return;

  VAR_8->flags |= VAR_1;
  FUNC_0(VAR_6, VAR_0);
 }
}
