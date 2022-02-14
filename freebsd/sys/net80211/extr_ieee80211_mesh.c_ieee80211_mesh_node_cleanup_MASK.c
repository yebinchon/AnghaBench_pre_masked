
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_node {int ni_mlhtimer; int ni_mltimer; struct ieee80211vap* ni_vap; } ;
struct ieee80211_mesh_state {TYPE_1__* ms_ppath; } ;
struct TYPE_2__ {int (* mpp_peerdown ) (struct ieee80211_node*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_node*) ;

void
FUNC_2(struct ieee80211_node *VAR_0)
{
 struct ieee80211vap *VAR_1 = VAR_0->ni_vap;
 struct ieee80211_mesh_state *VAR_2 = VAR_1->iv_mesh;

 FUNC_0(&VAR_0->ni_mltimer);
 FUNC_0(&VAR_0->ni_mlhtimer);

 if (VAR_1->iv_mesh != ((void*)0))
  VAR_2->ms_ppath->mpp_peerdown(VAR_0);
}
