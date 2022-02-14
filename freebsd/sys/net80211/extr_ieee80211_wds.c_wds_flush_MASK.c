
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
struct ieee80211com {int (* ic_node_getsignal ) (struct ieee80211_node*,int *,int *) ;int ic_stageq; } ;
struct ieee80211_node {int ni_vap; int ni_macaddr; struct ieee80211com* ni_ic; } ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ieee80211_node*,char*,char*) ;
 struct mbuf* FUNC_1 (int *,void*) ;
 int FUNC_2 (struct ieee80211_node*,struct mbuf*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ieee80211com*,int ) ;
 int FUNC_4 (struct ieee80211_node*,int *,int *) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_node *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->ni_ic;
 struct mbuf *VAR_3, *VAR_4;
 int8_t VAR_5, VAR_6;

 VAR_3 = FUNC_1(&VAR_2->ic_stageq,
     (void *)(uintptr_t) FUNC_3(VAR_2, VAR_1->ni_macaddr));
 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_1->ni_vap, VAR_0, VAR_1,
     "%s", "flush wds queue");
 VAR_2->ic_node_getsignal(VAR_1, &VAR_5, &VAR_6);
 for (; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  VAR_4 = VAR_3->m_nextpkt;
  VAR_3->m_nextpkt = ((void*)0);
  FUNC_2(VAR_1, VAR_3, VAR_5, VAR_6);
 }
}
