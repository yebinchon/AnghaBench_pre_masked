
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sta_info {int plink_timer; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_3__ {int user_mpm; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct sta_info*) ;

void FUNC_4(struct sta_info *VAR_0)
{
 struct ieee80211_sub_if_data *VAR_1 = VAR_0->sdata;
 u32 VAR_2;






 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_1->u.mesh.user_mpm) {
  VAR_2 |= FUNC_3(VAR_0);
  FUNC_0(&VAR_0->plink_timer);
 }

 if (VAR_2)
  FUNC_1(VAR_1, VAR_2);
}
