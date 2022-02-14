
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct sta_info {int lock; int reason; int plid; int llid; TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sta_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u32 FUNC_5(struct sta_info *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = VAR_2->sdata;
 u32 VAR_4;

 FUNC_3(&VAR_2->lock);
 VAR_4 = FUNC_0(VAR_2);
 VAR_2->reason = FUNC_1(VAR_0);
 FUNC_2(VAR_3, VAR_1,
       VAR_2->sta.addr, VAR_2->llid, VAR_2->plid,
       VAR_2->reason);
 FUNC_4(&VAR_2->lock);

 return VAR_4;
}
