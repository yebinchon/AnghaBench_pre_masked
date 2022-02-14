
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csum_flags; void* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211com {int ic_lintval; int ic_stageq; } ;
struct ieee80211_node {int ni_intval; int ni_macaddr; struct ieee80211com* ni_ic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct mbuf*,int) ;
 scalar_t__ FUNC_2 (struct ieee80211com*,int ) ;
 int FUNC_3 (struct ieee80211_node*) ;

void
FUNC_4(struct ieee80211_node *VAR_1, struct mbuf *VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_1->ni_ic;
 FUNC_0((VAR_2->m_pkthdr.csum_flags & VAR_0) == 0);
 VAR_2->m_pkthdr.rcvif = (void *)(uintptr_t)
     FUNC_2(VAR_3, VAR_1->ni_macaddr);
 (void) FUNC_1(&VAR_3->ic_stageq, VAR_2,
     ((VAR_1->ni_intval * VAR_3->ic_lintval) << 2) / 1024);
 FUNC_3(VAR_1);
}
