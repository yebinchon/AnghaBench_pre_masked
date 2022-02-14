
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {struct ieee80211_mgd_auth_data* auth_data; scalar_t__ flags; int bssid; int mtx; } ;
struct TYPE_8__ {TYPE_4__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_2__* local; } ;
struct ieee80211_mgd_auth_data {TYPE_5__* bss; } ;
struct TYPE_10__ {int bssid; } ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_7__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_mgd_auth_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_2,
     bool VAR_3)
{
 struct ieee80211_mgd_auth_data *VAR_4 = VAR_2->u.mgd.auth_data;

 FUNC_4(&VAR_2->u.mgd.mtx);

 if (!VAR_3) {
  FUNC_6(VAR_2, VAR_4->bss->bssid);

  FUNC_5(VAR_2->u.mgd.bssid, 0, VAR_1);
  FUNC_1(VAR_2, VAR_0);
  VAR_2->u.mgd.flags = 0;
  FUNC_2(VAR_2);
 }

 FUNC_0(VAR_2->local->hw.wiphy, VAR_4->bss);
 FUNC_3(VAR_4);
 VAR_2->u.mgd.auth_data = ((void*)0);
}
