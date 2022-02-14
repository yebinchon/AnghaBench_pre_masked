
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211com {int (* ic_transmit ) (struct ieee80211com*,struct mbuf*) ;} ;
struct ieee80211_node {TYPE_2__* ni_vap; } ;
struct TYPE_4__ {int iv_ifp; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ieee80211com*,struct mbuf*) ;

int
FUNC_5(struct ieee80211com *VAR_1, struct mbuf *VAR_2)
{
 int VAR_3;





 FUNC_0(VAR_1);
 VAR_3 = VAR_1->ic_transmit(VAR_1, VAR_2);
 if (VAR_3) {
  struct ieee80211_node *VAR_4;

  VAR_4 = (struct ieee80211_node *)VAR_2->m_pkthdr.rcvif;


  FUNC_3(VAR_4->ni_vap->iv_ifp, VAR_0, 1);
  FUNC_2(VAR_4);
  FUNC_1(VAR_2);
 }
 return (VAR_3);
}
