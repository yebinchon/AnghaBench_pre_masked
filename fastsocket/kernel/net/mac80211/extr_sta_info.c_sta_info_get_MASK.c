
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int addr; } ;
struct sta_info {int hnext; TYPE_1__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int sta_mtx; int * sta_hash; } ;


 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const*) ;
 int FUNC_2 (int *) ;
 struct sta_info* FUNC_3 (int ,int ) ;

struct sta_info *FUNC_4(struct ieee80211_sub_if_data *VAR_0,
         const u8 *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_0->local;
 struct sta_info *VAR_3;

 VAR_3 = FUNC_3(VAR_2->sta_hash[FUNC_0(VAR_1)],
        FUNC_2(&VAR_2->sta_mtx));
 while (VAR_3) {
  if (VAR_3->sdata == VAR_0 &&
      FUNC_1(VAR_3->sta.addr, VAR_1))
   break;
  VAR_3 = FUNC_3(VAR_3->hnext,
         FUNC_2(&VAR_2->sta_mtx));
 }
 return VAR_3;
}
