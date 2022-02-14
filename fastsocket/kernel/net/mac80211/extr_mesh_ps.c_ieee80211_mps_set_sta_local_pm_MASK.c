
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct sta_info {int local_pm; scalar_t__ plink_state; TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {int dummy; } ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*,int,int ) ;
 int FUNC_2 (struct sta_info*) ;

u32 FUNC_3(struct sta_info *VAR_1,
       enum nl80211_mesh_power_mode VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_1->sdata;

 FUNC_1(VAR_3, "local STA operates in mode %d with %pM\n",
  VAR_2, VAR_1->sta.addr);

 VAR_1->local_pm = VAR_2;





 if (VAR_1->plink_state == VAR_0)
  FUNC_2(VAR_1);

 return FUNC_0(VAR_3);
}
