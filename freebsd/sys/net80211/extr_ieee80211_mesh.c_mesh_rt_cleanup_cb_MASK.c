
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_mesh_state {TYPE_1__* ms_ppath; int ms_cleantimer; } ;
struct TYPE_2__ {int mpp_inact; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct ieee80211vap*) ;
 int FUNC_1 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct ieee80211vap *VAR_1 = VAR_0;
 struct ieee80211_mesh_state *VAR_2 = VAR_1->iv_mesh;

 FUNC_1(VAR_1);
 FUNC_0(&VAR_2->ms_cleantimer, VAR_2->ms_ppath->mpp_inact,
     FUNC_2, VAR_1);
}
