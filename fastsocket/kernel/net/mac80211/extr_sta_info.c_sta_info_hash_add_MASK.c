
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct sta_info {TYPE_1__ sta; int hnext; } ;
struct ieee80211_local {int * sta_hash; int sta_mtx; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct sta_info*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_local *VAR_0,
         struct sta_info *VAR_1)
{
 FUNC_1(&VAR_0->sta_mtx);
 VAR_1->hnext = VAR_0->sta_hash[FUNC_0(VAR_1->sta.addr)];
 FUNC_2(VAR_0->sta_hash[FUNC_0(VAR_1->sta.addr)], VAR_1);
}
