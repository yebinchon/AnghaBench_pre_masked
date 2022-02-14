
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifqueue {int dummy; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct ifqueue*,struct mbuf*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (struct mbuf*) ;

void
FUNC_4(struct ifqueue *VAR_0)
{
 struct ieee80211_node *VAR_1;
 struct mbuf *VAR_2;

 for (;;) {
  FUNC_0(VAR_0, VAR_2);
  if (VAR_2 == ((void*)0))
   break;

  VAR_1 = (struct ieee80211_node *)VAR_2->m_pkthdr.rcvif;
  FUNC_1(VAR_1 != ((void*)0), ("frame w/o node"));
  FUNC_2(VAR_1);
  VAR_2->m_pkthdr.rcvif = ((void*)0);

  FUNC_3(VAR_2);
 }
}
