
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_conf {int flags; } ;
struct TYPE_2__ {struct ieee80211_conf conf; } ;
struct ieee80211_local {int dynamic_ps_enable_work; int dynamic_ps_timer; scalar_t__ ps_sdata; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_local*,scalar_t__) ;
 int FUNC_3 (struct ieee80211_local*,int ) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_local *VAR_2)
{
 struct ieee80211_conf *VAR_3 = &VAR_2->hw.conf;

 if (VAR_2->ps_sdata) {
  FUNC_2(VAR_2, VAR_2->ps_sdata);
 } else if (VAR_3->flags & VAR_1) {
  VAR_3->flags &= ~VAR_1;
  FUNC_3(VAR_2, VAR_0);
  FUNC_1(&VAR_2->dynamic_ps_timer);
  FUNC_0(&VAR_2->dynamic_ps_enable_work);
 }
}
