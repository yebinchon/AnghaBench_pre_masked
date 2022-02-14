
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wiphy {int dummy; } ;
struct sta_info {int * gtk; int ptk; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int * keys; struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; int key_mtx; } ;
struct ieee80211_key {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_key*,int) ;
 struct ieee80211_key* FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,size_t const*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_1, struct net_device *VAR_2,
        u8 VAR_3, bool VAR_4, const u8 *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_2);
 struct ieee80211_local *VAR_7 = VAR_6->local;
 struct sta_info *VAR_8;
 struct ieee80211_key *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_3(&VAR_7->sta_mtx);
 FUNC_3(&VAR_7->key_mtx);

 if (VAR_5) {
  VAR_10 = -VAR_0;

  VAR_8 = FUNC_5(VAR_6, VAR_5);
  if (!VAR_8)
   goto out_unlock;

  if (VAR_4)
   VAR_9 = FUNC_2(VAR_7, VAR_8->ptk);
  else
   VAR_9 = FUNC_2(VAR_7, VAR_8->gtk[VAR_3]);
 } else
  VAR_9 = FUNC_2(VAR_7, VAR_6->keys[VAR_3]);

 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 FUNC_1(VAR_9, 1);

 VAR_10 = 0;
 out_unlock:
 FUNC_4(&VAR_7->key_mtx);
 FUNC_4(&VAR_7->sta_mtx);

 return VAR_10;
}
