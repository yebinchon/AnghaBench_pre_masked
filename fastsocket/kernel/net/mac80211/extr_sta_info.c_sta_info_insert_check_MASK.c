
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct sta_info {TYPE_2__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_3__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sta_info *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_2->sdata;






 if (FUNC_4(!FUNC_2(VAR_3)))
  return -VAR_1;

 if (FUNC_0(FUNC_1(VAR_2->sta.addr, VAR_3->vif.addr) ||
      FUNC_3(VAR_2->sta.addr)))
  return -VAR_0;

 return 0;
}
