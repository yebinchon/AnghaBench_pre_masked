
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int txpower; } ;
struct TYPE_8__ {TYPE_3__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {int local; TYPE_4__ vif; int ap_power_level; int user_power_level; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct TYPE_5__ {int max_power; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 struct ieee80211_chanctx_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

bool FUNC_5(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_chanctx_conf *VAR_2;
 int VAR_3;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1->vif.chanctx_conf);
 if (!VAR_2) {
  FUNC_4();
  return 0;
 }

 VAR_3 = VAR_2->def.chan->max_power;
 FUNC_4();

 if (VAR_1->user_power_level != VAR_0)
  VAR_3 = FUNC_1(VAR_3, VAR_1->user_power_level);

 if (VAR_1->ap_power_level != VAR_0)
  VAR_3 = FUNC_1(VAR_3, VAR_1->ap_power_level);

 if (VAR_3 != VAR_1->vif.bss_conf.txpower) {
  VAR_1->vif.bss_conf.txpower = VAR_3;
  FUNC_0(VAR_1->local, 0);
  return 1;
 }

 return 0;
}
