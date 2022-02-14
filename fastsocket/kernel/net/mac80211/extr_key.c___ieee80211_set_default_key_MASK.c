
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int default_multicast_key; int local; int default_unicast_key; int * keys; } ;
struct ieee80211_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_key* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct ieee80211_key*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_1,
     int VAR_2, bool VAR_3, bool VAR_4)
{
 struct ieee80211_key *VAR_5 = ((void*)0);

 FUNC_0(VAR_1->local);

 if (VAR_2 >= 0 && VAR_2 < VAR_0)
  VAR_5 = FUNC_3(VAR_1->local, VAR_1->keys[VAR_2]);

 if (VAR_3) {
  FUNC_4(VAR_1->default_unicast_key, VAR_5);
  FUNC_1(VAR_1->local, VAR_1, VAR_2);
 }

 if (VAR_4)
  FUNC_4(VAR_1->default_multicast_key, VAR_5);

 FUNC_2(VAR_1);
}
