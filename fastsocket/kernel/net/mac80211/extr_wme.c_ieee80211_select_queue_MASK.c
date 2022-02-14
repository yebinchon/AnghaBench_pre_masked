
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sta_info {int dummy; } ;
struct sk_buff {int len; scalar_t__ priority; int * data; } ;
struct TYPE_11__ {int * bssid; } ;
struct TYPE_10__ {int * remote_addr; } ;
struct TYPE_9__ {int sta; } ;
struct TYPE_12__ {TYPE_5__ mgd; TYPE_4__ wds; TYPE_3__ vlan; } ;
struct TYPE_8__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_6__ u; TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_7__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_2 (int const*) ;
 struct sta_info* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct sta_info* FUNC_6 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_7 (struct sta_info*,int ) ;

u16 FUNC_8(struct ieee80211_sub_if_data *VAR_3,
      struct sk_buff *VAR_4)
{
 struct ieee80211_local *VAR_5 = VAR_3->local;
 struct sta_info *VAR_6 = ((void*)0);
 const u8 *VAR_7 = ((void*)0);
 bool VAR_8 = 0;

 if (VAR_5->hw.queues < VAR_1 || VAR_4->len < 6) {
  VAR_4->priority = 0;
  return 0;
 }

 FUNC_4();
 switch (VAR_3->vif.type) {
 case 131:
  VAR_6 = FUNC_3(VAR_3->u.vlan.sta);
  if (VAR_6) {
   VAR_8 = FUNC_7(VAR_6, VAR_2);
   break;
  }
 case 132:
  VAR_7 = VAR_4->data;
  break;
 case 128:
  VAR_7 = VAR_3->u.wds.remote_addr;
  break;





 case 129:
  VAR_7 = VAR_3->u.mgd.bssid;
  break;
 case 133:
  VAR_7 = VAR_4->data;
  break;
 default:
  break;
 }

 if (!VAR_6 && VAR_7 && !FUNC_2(VAR_7)) {
  VAR_6 = FUNC_6(VAR_3, VAR_7);
  if (VAR_6)
   VAR_8 = FUNC_7(VAR_6, VAR_2);
 }
 FUNC_5();

 if (!VAR_8) {
  VAR_4->priority = 0;
  return VAR_0;
 }



 VAR_4->priority = FUNC_0(VAR_4);

 return FUNC_1(VAR_3, VAR_4);
}
