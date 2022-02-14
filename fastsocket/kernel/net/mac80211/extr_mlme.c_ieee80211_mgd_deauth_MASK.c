
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_if_managed {int mtx; TYPE_2__* associated; scalar_t__ auth_data; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; int local; TYPE_1__ u; } ;
struct cfg80211_deauth_request {int reason_code; int bssid; int local_state_change; } ;
struct TYPE_4__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int ,int ,int ,int,int *) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,int ,int ) ;

int FUNC_9(struct ieee80211_sub_if_data *VAR_2,
    struct cfg80211_deauth_request *VAR_3)
{
 struct ieee80211_if_managed *VAR_4 = &VAR_2->u.mgd;
 u8 VAR_5[VAR_0];
 bool VAR_6 = !VAR_3->local_state_change;
 bool VAR_7 = 0;

 FUNC_6(&VAR_4->mtx);

 FUNC_8(VAR_2,
     "deauthenticating from %pM by local choice (reason=%d)\n",
     VAR_3->bssid, VAR_3->reason_code);

 if (VAR_4->auth_data) {
  FUNC_1(VAR_2->local, VAR_2);
  FUNC_4(VAR_2, VAR_3->bssid,
            VAR_1,
            VAR_3->reason_code, VAR_6,
            VAR_5);
  FUNC_3(VAR_2, 0);
  FUNC_7(&VAR_4->mtx);

  VAR_7 = 1;
  goto out;
 }

 if (VAR_4->associated &&
     FUNC_2(VAR_4->associated->bssid, VAR_3->bssid)) {
  FUNC_5(VAR_2, VAR_1,
           VAR_3->reason_code, VAR_6, VAR_5);
  VAR_7 = 1;
 }
 FUNC_7(&VAR_4->mtx);

 out:
 if (VAR_7)
  FUNC_0(VAR_2->dev, VAR_5,
           VAR_0);

 return 0;
}
