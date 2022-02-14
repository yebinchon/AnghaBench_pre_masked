
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {int mtx; TYPE_2__* associated; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__ u; } ;
struct cfg80211_disassoc_request {int local_state_change; int reason_code; TYPE_2__* bss; } ;
struct TYPE_4__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*,int ,int ) ;

int FUNC_6(struct ieee80211_sub_if_data *VAR_4,
      struct cfg80211_disassoc_request *VAR_5)
{
 struct ieee80211_if_managed *VAR_6 = &VAR_4->u.mgd;
 u8 VAR_7[VAR_1];
 u8 VAR_8[VAR_2];

 FUNC_3(&VAR_6->mtx);







 if (VAR_6->associated != VAR_5->bss) {
  FUNC_4(&VAR_6->mtx);
  return -VAR_0;
 }

 FUNC_5(VAR_4,
     "disassociating from %pM by local choice (reason=%d)\n",
     VAR_5->bss->bssid, VAR_5->reason_code);

 FUNC_2(VAR_7, VAR_5->bss->bssid, VAR_1);
 FUNC_1(VAR_4, VAR_3,
          VAR_5->reason_code, !VAR_5->local_state_change,
          VAR_8);
 FUNC_4(&VAR_6->mtx);

 FUNC_0(VAR_4->dev, VAR_8,
     VAR_2);

 return 0;
}
