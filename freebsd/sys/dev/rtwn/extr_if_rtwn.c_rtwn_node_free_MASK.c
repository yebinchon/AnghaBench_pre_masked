
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_softc {int (* sc_node_free ) (struct ieee80211_node*) ;int ** node_list; } ;
struct rtwn_node {size_t id; } ;
struct ieee80211_node {TYPE_1__* ni_ic; } ;
struct TYPE_2__ {struct rtwn_softc* ic_softc; } ;


 size_t VAR_0 ;
 struct rtwn_node* FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*,size_t*,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_node *VAR_2)
{
 struct rtwn_softc *VAR_3 = VAR_2->ni_ic->ic_softc;
 struct rtwn_node *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3);
 if (VAR_4->id != VAR_0) {
  VAR_3->node_list[VAR_4->id] = ((void*)0);
  FUNC_3(VAR_3, &VAR_4->id, sizeof(VAR_4->id),
      VAR_1);
 }
 FUNC_2(VAR_3);

 VAR_3->sc_node_free(VAR_2);
}
