
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_if_mesh {int housekeeping_timer; } ;
struct TYPE_2__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_if_mesh *VAR_4 = &VAR_3->u.mesh;
 u32 VAR_5;

 FUNC_1(VAR_3, VAR_1);
 FUNC_3(VAR_3);

 VAR_5 = FUNC_2(VAR_3);
 FUNC_0(VAR_3, VAR_5);

 FUNC_4(&VAR_4->housekeeping_timer,
    FUNC_5(VAR_2 +
    VAR_0));
}
