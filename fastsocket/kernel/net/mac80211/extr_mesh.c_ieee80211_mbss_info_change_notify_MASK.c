
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mesh; } ;
struct TYPE_4__ {scalar_t__ enable_beacon; } ;
struct TYPE_5__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_2__ vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct ieee80211_sub_if_data *VAR_4,
           u32 VAR_5)
{
 if (VAR_4->vif.bss_conf.enable_beacon &&
     (VAR_5 & (VAR_1 |
   VAR_3 |
   VAR_0 |
   VAR_2)))
  if (FUNC_1(&VAR_4->u.mesh))
   return;
 FUNC_0(VAR_4, VAR_5);
}
