
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ps; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;

void FUNC_2(struct ieee80211_sub_if_data *VAR_1)
{
 bool VAR_2 = FUNC_1(VAR_1);

 if (VAR_1->vif.bss_conf.ps != VAR_2) {
  VAR_1->vif.bss_conf.ps = VAR_2;
  FUNC_0(VAR_1, VAR_0);
 }
}
