
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct sta_info {int hnext; TYPE_1__ sta; } ;
struct ieee80211_local {int sta_mtx; int * sta_hash; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct sta_info* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct sta_info* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_local *VAR_1,
        struct sta_info *VAR_2)
{
 struct sta_info *VAR_3;

 VAR_3 = FUNC_4(VAR_1->sta_hash[FUNC_0(VAR_2->sta.addr)],
          FUNC_1(&VAR_1->sta_mtx));
 if (!VAR_3)
  return -VAR_0;
 if (VAR_3 == VAR_2) {
  FUNC_3(VAR_1->sta_hash[FUNC_0(VAR_2->sta.addr)],
       VAR_3->hnext);
  return 0;
 }

 while (FUNC_2(VAR_3->hnext) &&
        FUNC_2(VAR_3->hnext) != VAR_2)
  VAR_3 = FUNC_4(VAR_3->hnext,
     FUNC_1(&VAR_1->sta_mtx));
 if (FUNC_2(VAR_3->hnext)) {
  FUNC_3(VAR_3->hnext, VAR_2->hnext);
  return 0;
 }

 return -VAR_0;
}
