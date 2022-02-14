
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int is_amsdu_split; int is_amsdu_tooshort; int is_amsdu_decap; } ;
struct ieee80211vap {int (* iv_deliver_data ) (struct ieee80211vap*,struct ieee80211_node*,struct mbuf*) ;TYPE_2__ iv_stats; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211vap* ni_vap; } ;
struct ether_header {int dummy; } ;


 int FUNC_0 (struct ieee80211vap*,int ,int ,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mbuf* FUNC_1 (struct mbuf*,int*) ;
 int FUNC_2 (struct mbuf*,int) ;
 int FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 (struct mbuf*,int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct ieee80211vap*,struct ieee80211_node*,struct mbuf*) ;

struct mbuf *
FUNC_7(struct ieee80211_node *VAR_2, struct mbuf *VAR_3)
{
 struct ieee80211vap *VAR_4 = VAR_2->ni_vap;
 int VAR_5;
 struct mbuf *VAR_6;


 FUNC_2(VAR_3, sizeof(struct ether_header));

 VAR_4->iv_stats.is_amsdu_decap++;

 for (;;) {






  VAR_3 = FUNC_1(VAR_3, &VAR_5);
  if (VAR_3 == ((void*)0)) {
   FUNC_0(VAR_4, VAR_0,
       VAR_2->ni_macaddr, "a-msdu", "%s", "decap failed");
   VAR_4->iv_stats.is_amsdu_tooshort++;
   return ((void*)0);
  }
  if (VAR_3->m_pkthdr.len == VAR_5)
   break;
  VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_1);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_4, VAR_0,
       VAR_2->ni_macaddr, "a-msdu",
       "%s", "unable to split encapsulated frames");
   VAR_4->iv_stats.is_amsdu_split++;
   FUNC_3(VAR_3);
   return ((void*)0);
  }
  VAR_4->iv_deliver_data(VAR_4, VAR_2, VAR_3);





  VAR_3 = VAR_6;
  FUNC_2(VAR_3, FUNC_5(VAR_5, 4) - VAR_5);
 }
 return VAR_3;
}
