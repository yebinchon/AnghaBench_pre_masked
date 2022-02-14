
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; TYPE_1__* iv_ic; } ;
struct ieee80211_mesh_state {TYPE_2__* ms_ppath; int ms_cleantimer; } ;
struct TYPE_4__ {int (* mpp_vdetach ) (struct ieee80211vap*) ;} ;
struct TYPE_3__ {int ic_sta; } ;


 int FUNC_0 (struct ieee80211_mesh_state*,int ) ;
 int FUNC_1 (struct ieee80211_mesh_state*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int VAR_1 ;
 int FUNC_5 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211vap *VAR_2)
{
 struct ieee80211_mesh_state *VAR_3 = VAR_2->iv_mesh;

 FUNC_2(&VAR_3->ms_cleantimer);
 FUNC_3(&VAR_2->iv_ic->ic_sta, VAR_1,
     ((void*)0));
 FUNC_4(VAR_2);
 FUNC_1(VAR_3);
 VAR_3->ms_ppath->mpp_vdetach(VAR_2);
 FUNC_0(VAR_2->iv_mesh, VAR_0);
 VAR_2->iv_mesh = ((void*)0);
}
