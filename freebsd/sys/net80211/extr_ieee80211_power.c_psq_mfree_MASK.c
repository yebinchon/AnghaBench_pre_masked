
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {int m_flags; int * m_nextpkt; TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_1)
{
 if (VAR_1->m_flags & VAR_0) {
  struct ieee80211_node *VAR_2 = (void *) VAR_1->m_pkthdr.rcvif;
  FUNC_0(VAR_2);
 }
 VAR_1->m_nextpkt = ((void*)0);
 FUNC_1(VAR_1);
}
