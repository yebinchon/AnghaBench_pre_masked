
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211_node {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*,struct mbuf*,int *,int) ;
 int FUNC_2 (struct rtwn_softc*,struct ieee80211_node*,struct mbuf*,int *,int ) ;

int
FUNC_3(struct rtwn_softc *VAR_0, struct ieee80211_node *VAR_1,
    struct mbuf *VAR_2, uint8_t *VAR_3, uint8_t VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0))
  VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_5);
 else
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return (VAR_6);
}
