
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int * gtk; int ptk; } ;
struct ieee80211_sub_if_data {int * keys; int default_mgmt_key; int local; int default_multicast_key; int default_unicast_key; int key_list; } ;
struct TYPE_2__ {int keyidx; } ;
struct ieee80211_key {int list; TYPE_1__ conf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int,int,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int) ;
 struct ieee80211_key* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct ieee80211_key*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_0,
      struct sta_info *VAR_1,
      bool VAR_2,
      struct ieee80211_key *VAR_3,
      struct ieee80211_key *VAR_4)
{
 int VAR_5;
 bool VAR_6, VAR_7, VAR_8;

 if (VAR_4)
  FUNC_4(&VAR_4->list, &VAR_0->key_list);

 if (VAR_1 && VAR_2) {
  FUNC_6(VAR_1->ptk, VAR_4);
 } else if (VAR_1) {
  if (VAR_3)
   VAR_5 = VAR_3->conf.keyidx;
  else
   VAR_5 = VAR_4->conf.keyidx;
  FUNC_6(VAR_1->gtk[VAR_5], VAR_4);
 } else {
  FUNC_0(VAR_4 && VAR_3 && VAR_4->conf.keyidx != VAR_3->conf.keyidx);

  if (VAR_3)
   VAR_5 = VAR_3->conf.keyidx;
  else
   VAR_5 = VAR_4->conf.keyidx;

  VAR_6 = VAR_3 &&
   VAR_3 == FUNC_3(VAR_0->local,
      VAR_0->default_unicast_key);
  VAR_7 = VAR_3 &&
   VAR_3 == FUNC_3(VAR_0->local,
      VAR_0->default_multicast_key);
  VAR_8 = VAR_3 &&
   VAR_3 == FUNC_3(VAR_0->local,
      VAR_0->default_mgmt_key);

  if (VAR_6 && !VAR_4)
   FUNC_1(VAR_0, -1, 1, 0);
  if (VAR_7 && !VAR_4)
   FUNC_1(VAR_0, -1, 0, 1);
  if (VAR_8 && !VAR_4)
   FUNC_2(VAR_0, -1);

  FUNC_6(VAR_0->keys[VAR_5], VAR_4);
  if (VAR_6 && VAR_4)
   FUNC_1(VAR_0, VAR_4->conf.keyidx,
          1, 0);
  if (VAR_7 && VAR_4)
   FUNC_1(VAR_0, VAR_4->conf.keyidx,
          0, 1);
  if (VAR_8 && VAR_4)
   FUNC_2(VAR_0,
        VAR_4->conf.keyidx);
 }

 if (VAR_3)
  FUNC_5(&VAR_3->list);
}
