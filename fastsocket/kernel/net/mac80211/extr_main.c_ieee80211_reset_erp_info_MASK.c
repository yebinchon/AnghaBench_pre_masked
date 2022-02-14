
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int use_cts_prot; int use_short_preamble; int use_short_slot; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u32 FUNC_0(struct ieee80211_sub_if_data *VAR_3)
{
 VAR_3->vif.bss_conf.use_cts_prot = 0;
 VAR_3->vif.bss_conf.use_short_preamble = 0;
 VAR_3->vif.bss_conf.use_short_slot = 0;
 return VAR_0 |
        VAR_1 |
        VAR_2;
}
