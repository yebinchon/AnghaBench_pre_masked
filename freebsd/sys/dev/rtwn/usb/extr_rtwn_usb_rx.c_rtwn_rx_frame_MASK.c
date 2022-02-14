
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct rtwn_rx_stat_common {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211_node {int dummy; } ;
typedef int stat ;
typedef int caddr_t ;


 int FUNC_0 (struct mbuf*,int) ;
 int FUNC_1 (struct mbuf*,int ,int,int ) ;
 struct ieee80211_node* FUNC_2 (struct rtwn_softc*,struct mbuf*,struct rtwn_rx_stat_common*) ;

__attribute__((used)) static struct ieee80211_node *
FUNC_3(struct rtwn_softc *VAR_0, struct mbuf *VAR_1)
{
 struct rtwn_rx_stat_common VAR_2;


 FUNC_1(VAR_1, 0, sizeof(VAR_2), (caddr_t)&VAR_2);
 FUNC_0(VAR_1, sizeof(VAR_2));

 return (FUNC_2(VAR_0, VAR_1, &VAR_2));
}
