
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_mesh_state {int ms_routes; } ;
struct ieee80211_mesh_route {int rt_discovery; } ;


 int FUNC_0 (struct ieee80211_mesh_route*,int ) ;
 int FUNC_1 (struct ieee80211_mesh_route*) ;
 int FUNC_2 (struct ieee80211_mesh_route*) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct ieee80211_mesh_route*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static __inline void
FUNC_5(struct ieee80211_mesh_state *VAR_2, struct ieee80211_mesh_route *VAR_3)
{
 FUNC_3(&VAR_2->ms_routes, VAR_3, VAR_1);




 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->rt_discovery);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3, VAR_0);
}
