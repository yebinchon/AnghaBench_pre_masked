
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int sc_running; } ;
struct rsu_data {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct rsu_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsu_softc*) ;
 int FUNC_1 (struct rsu_softc*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct rsu_softc*,struct rsu_data*) ;
 struct rsu_data* FUNC_4 (struct rsu_softc*) ;
 scalar_t__ FUNC_5 (struct rsu_softc*,struct ieee80211_node*,struct mbuf*,struct rsu_data*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_3, struct mbuf *VAR_4,
    const struct ieee80211_bpf_params *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_3->ni_ic;
 struct rsu_softc *VAR_7 = VAR_6->ic_softc;
 struct rsu_data *VAR_8;


 if (!VAR_7->sc_running) {
  FUNC_2(VAR_4);
  return (VAR_1);
 }
 FUNC_0(VAR_7);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_4);
  FUNC_1(VAR_7);
  return (VAR_2);
 }
 if (FUNC_5(VAR_7, VAR_3, VAR_4, VAR_8) != 0) {
  FUNC_2(VAR_4);
  FUNC_3(VAR_7, VAR_8);
  FUNC_1(VAR_7);
  return (VAR_0);
 }
 FUNC_1(VAR_7);

 return (0);
}
