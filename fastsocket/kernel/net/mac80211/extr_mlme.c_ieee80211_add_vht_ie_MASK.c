
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vht_cap ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_cap {int vht_cap_info; } ;
struct ieee80211_supported_band {int vht_cap; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct ieee80211_sta_vht_cap {int cap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_sta_vht_cap*) ;
 int FUNC_3 (int *,struct ieee80211_sta_vht_cap*,int ) ;
 int FUNC_4 (struct ieee80211_sta_vht_cap*,int *,int) ;
 int * FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_7,
     struct sk_buff *VAR_8,
     struct ieee80211_supported_band *VAR_9,
     struct ieee80211_vht_cap *VAR_10)
{
 u8 *VAR_11;
 u32 VAR_12;
 struct ieee80211_sta_vht_cap VAR_13;

 FUNC_0(sizeof(VAR_13) != sizeof(VAR_9->vht_cap));

 FUNC_4(&VAR_13, &VAR_9->vht_cap, sizeof(VAR_13));
 FUNC_2(VAR_7, &VAR_13);


 VAR_12 = VAR_13.cap;

 if (VAR_7->u.mgd.flags & VAR_1) {
  VAR_12 &= ~VAR_4;
  VAR_12 |= VAR_3;
 }

 if (VAR_7->u.mgd.flags & VAR_0) {
  VAR_12 &= ~VAR_2;
  VAR_12 &= ~VAR_3;
 }





 if (!(VAR_10->vht_cap_info &
   FUNC_1(VAR_6)))
  VAR_12 &= ~VAR_5;


 VAR_11 = FUNC_5(VAR_8, sizeof(struct ieee80211_vht_cap) + 2);
 FUNC_3(VAR_11, &VAR_13, VAR_12);
}
