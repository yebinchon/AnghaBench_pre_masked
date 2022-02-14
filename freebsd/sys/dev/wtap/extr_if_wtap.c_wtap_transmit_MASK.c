
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtap_vap {int dummy; } ;
struct TYPE_2__ {scalar_t__ rcvif; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 struct wtap_vap* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct ieee80211_node*) ;
 int FUNC_2 (struct ieee80211_node*,struct mbuf*,int ) ;
 scalar_t__ FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211vap*,struct mbuf*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct wtap_vap*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211com *VAR_1, struct mbuf *VAR_2)
{
 struct ieee80211_node *VAR_3 =
     (struct ieee80211_node *) VAR_2->m_pkthdr.rcvif;
 struct ieee80211vap *VAR_4 = VAR_3->ni_vap;
 struct wtap_vap *VAR_5 = FUNC_0(VAR_4);

 if(VAR_3 == ((void*)0)){
  FUNC_5("m->m_pkthdr.rcvif is NULL we cant radiotap_tx\n");
 }else{
  if (FUNC_3(VAR_4))
   FUNC_4(VAR_4, VAR_2);
 }
 if (VAR_2->m_flags & VAR_0)
  FUNC_2(VAR_3, VAR_2, 0);
 FUNC_1(VAR_3);
 return FUNC_6(VAR_5, VAR_2);
}
