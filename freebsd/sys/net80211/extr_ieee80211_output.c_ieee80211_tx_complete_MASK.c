
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
struct ieee80211_node {TYPE_1__* ni_vap; } ;
struct TYPE_3__ {struct ifnet* iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ieee80211_node*,struct mbuf*,int) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct mbuf*) ;

void
FUNC_4(struct ieee80211_node *VAR_6, struct mbuf *VAR_7, int VAR_8)
{

 if (VAR_6 != ((void*)0)) {
  struct ifnet *VAR_9 = VAR_6->ni_vap->iv_ifp;

  if (VAR_8 == 0) {
   FUNC_2(VAR_9, VAR_0, VAR_7->m_pkthdr.len);
   FUNC_2(VAR_9, VAR_3, 1);
   if (VAR_7->m_flags & VAR_4)
    FUNC_2(VAR_9, VAR_2, 1);
  } else
   FUNC_2(VAR_9, VAR_1, 1);
  if (VAR_7->m_flags & VAR_5)
   FUNC_1(VAR_6, VAR_7, VAR_8);
  FUNC_0(VAR_6);
 }
 FUNC_3(VAR_7);
}
