
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct ifqueue {struct mbuf* ifq_tail; struct mbuf* ifq_head; int ifq_len; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int FUNC_0 (struct ifqueue*) ;
 int FUNC_1 (struct ifqueue*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (struct mbuf*) ;

void
FUNC_4(struct ifqueue *VAR_0, struct ieee80211vap *VAR_1)
{
 struct ieee80211_node *VAR_2;
 struct mbuf *VAR_3, **VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = &VAR_0->ifq_head;
 while ((VAR_3 = *VAR_4) != ((void*)0)) {
  VAR_2 = (struct ieee80211_node *)VAR_3->m_pkthdr.rcvif;
  if (VAR_2 != ((void*)0) && VAR_2->ni_vap == VAR_1) {
   *VAR_4 = VAR_3->m_nextpkt;
   VAR_0->ifq_len--;

   FUNC_3(VAR_3);
   FUNC_2(VAR_2);
  } else
   VAR_4 = &VAR_3->m_nextpkt;
 }

 VAR_3 = VAR_0->ifq_head;
 for (; VAR_3 != ((void*)0) && VAR_3->m_nextpkt != ((void*)0); VAR_3 = VAR_3->m_nextpkt)
  ;
 VAR_0->ifq_tail = VAR_3;
 FUNC_1(VAR_0);
}
