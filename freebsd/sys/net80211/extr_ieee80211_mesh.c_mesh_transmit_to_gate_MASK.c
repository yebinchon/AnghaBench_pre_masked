
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct ieee80211vap {int iv_ic; struct ifnet* iv_ifp; } ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_mesh_route {int rt_dest; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ieee80211_node* FUNC_1 (struct ieee80211vap*,int ) ;
 int FUNC_2 (struct ieee80211vap*,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211vap *VAR_1, struct mbuf *VAR_2,
    struct ieee80211_mesh_route *VAR_3)
{
 struct ifnet *VAR_4 = VAR_1->iv_ifp;
 struct ieee80211_node *VAR_5;

 FUNC_0(VAR_1->iv_ic);

 VAR_5 = FUNC_1(VAR_1, VAR_3->rt_dest);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_4, VAR_0, 1);
  FUNC_4(VAR_2);
  return;
 }







 (void) FUNC_2(VAR_1, VAR_2, VAR_5);
}
