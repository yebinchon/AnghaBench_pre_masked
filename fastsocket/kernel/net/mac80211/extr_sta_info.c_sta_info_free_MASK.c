
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct sta_info {TYPE_1__ sta; int sdata; scalar_t__ rate_ctrl; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (struct sta_info*) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(struct ieee80211_local *VAR_0, struct sta_info *VAR_1)
{
 if (VAR_1->rate_ctrl)
  FUNC_1(VAR_1);

 FUNC_2(VAR_1->sdata, "Destroyed STA %pM\n", VAR_1->sta.addr);

 FUNC_0(VAR_1);
}
