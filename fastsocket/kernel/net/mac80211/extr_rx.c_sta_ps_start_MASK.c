
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int aid; int addr; } ;
struct sta_info {TYPE_4__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ps_data {int num_sta_ps; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__* bss; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_7__ {int flags; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct TYPE_6__ {struct ps_data ps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,TYPE_4__*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*,int ,int ) ;
 int FUNC_3 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_4(struct sta_info *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = VAR_5->sdata;
 struct ieee80211_local *VAR_7 = VAR_6->local;
 struct ps_data *VAR_8;

 if (VAR_5->sdata->vif.type == VAR_1 ||
     VAR_5->sdata->vif.type == VAR_2)
  VAR_8 = &VAR_6->bss->ps;
 else
  return;

 FUNC_0(&VAR_8->num_sta_ps);
 FUNC_3(VAR_5, VAR_4);
 if (!(VAR_7->hw.flags & VAR_0))
  FUNC_1(VAR_7, VAR_6, VAR_3, &VAR_5->sta);
 FUNC_2(VAR_6, "STA %pM aid %d enters power save mode\n",
        VAR_5->sta.addr, VAR_5->sta.aid);
}
