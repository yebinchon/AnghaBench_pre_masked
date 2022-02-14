
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_mesh_rtaddfailed; } ;
struct ieee80211vap {TYPE_1__ iv_stats; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_node {int ni_macaddr; } ;
struct ieee80211_mesh_state {TYPE_3__* ms_ppath; TYPE_2__* ms_pmetric; } ;
struct ieee80211_mesh_route {int rt_flags; int rt_metric; int rt_nhops; int rt_nexthop; } ;
struct TYPE_6__ {int mpp_inact; } ;
struct TYPE_5__ {int (* mpm_metric ) (struct ieee80211_node*) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,char*,char*,char const*,...) ;
 struct ieee80211_mesh_route* FUNC_2 (struct ieee80211vap*,int ) ;
 struct ieee80211_mesh_route* FUNC_3 (struct ieee80211vap*,int ) ;
 int FUNC_4 (struct ieee80211_mesh_route*,int ) ;
 int FUNC_5 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211vap *VAR_2, struct ieee80211_node *VAR_3,
    const char *VAR_4)
{
 struct ieee80211_mesh_state *VAR_5 = VAR_2->iv_mesh;
 struct ieee80211_mesh_route *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_2, VAR_3->ni_macaddr);
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_2(VAR_2, VAR_3->ni_macaddr);
  if (VAR_6 == ((void*)0)) {
   FUNC_1(VAR_2, VAR_1, VAR_3,
       "unable to add path to transmitter %6D of %s",
       VAR_3->ni_macaddr, ":", VAR_4);
   VAR_2->iv_stats.is_mesh_rtaddfailed++;
   return;
  }
 }
 VAR_7 = VAR_5->ms_pmetric->mpm_metric(VAR_3);
 if (!(VAR_6->rt_flags & VAR_0) ||
     VAR_6->rt_metric > VAR_7)
 {
  FUNC_1(VAR_2, VAR_1, VAR_3,
      "%s path to transmitter %6D of %s, metric %d:%d",
      VAR_6->rt_flags & VAR_0 ?
      "prefer" : "update", VAR_3->ni_macaddr, ":", VAR_4,
      VAR_6->rt_metric, VAR_7);
  FUNC_0(VAR_6->rt_nexthop, VAR_3->ni_macaddr);
  VAR_6->rt_metric = VAR_7;
  VAR_6->rt_nhops = 1;
  FUNC_4(VAR_6, VAR_5->ms_ppath->mpp_inact);
  VAR_6->rt_flags = VAR_0;
 }
}
