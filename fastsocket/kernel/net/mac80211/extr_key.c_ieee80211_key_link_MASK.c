
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int * gtk; int ptk; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; int * keys; } ;
struct TYPE_3__ {int flags; int keyidx; } ;
struct ieee80211_key {struct sta_info* sta; struct ieee80211_sub_if_data* sdata; TYPE_2__* local; TYPE_1__ conf; } ;
struct TYPE_4__ {int key_mtx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_key*) ;
 int FUNC_2 (struct ieee80211_key*,int) ;
 int FUNC_3 (struct ieee80211_key*) ;
 int FUNC_4 (struct ieee80211_key*,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct sta_info*,int,struct ieee80211_key*,struct ieee80211_key*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_key* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct ieee80211_key *VAR_1,
         struct ieee80211_sub_if_data *VAR_2,
         struct sta_info *VAR_3)
{
 struct ieee80211_key *VAR_4;
 int VAR_5, VAR_6;
 bool VAR_7;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_1);

 VAR_7 = VAR_1->conf.flags & VAR_0;
 VAR_5 = VAR_1->conf.keyidx;
 VAR_1->local = VAR_2->local;
 VAR_1->sdata = VAR_2;
 VAR_1->sta = VAR_3;

 FUNC_8(&VAR_2->local->key_mtx);

 if (VAR_3 && VAR_7)
  VAR_4 = FUNC_7(VAR_2->local, VAR_3->ptk);
 else if (VAR_3)
  VAR_4 = FUNC_7(VAR_2->local, VAR_3->gtk[VAR_5]);
 else
  VAR_4 = FUNC_7(VAR_2->local, VAR_2->keys[VAR_5]);

 FUNC_6(VAR_2);

 FUNC_5(VAR_2, VAR_3, VAR_7, VAR_4, VAR_1);
 FUNC_2(VAR_4, 1);

 FUNC_1(VAR_1);

 VAR_6 = FUNC_3(VAR_1);

 if (VAR_6)
  FUNC_4(VAR_1, 1);

 FUNC_9(&VAR_2->local->key_mtx);

 return VAR_6;
}
