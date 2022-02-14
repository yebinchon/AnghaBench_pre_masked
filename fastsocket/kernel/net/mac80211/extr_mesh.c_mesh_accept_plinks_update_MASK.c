
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int accepting_plinks; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;

u32 FUNC_1(struct ieee80211_sub_if_data *VAR_1)
{
 bool VAR_2;
 u32 VAR_3 = 0;







 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 != VAR_1->u.mesh.accepting_plinks) {
  VAR_1->u.mesh.accepting_plinks = VAR_2;
  VAR_3 = VAR_0;
 }

 return VAR_3;
}
