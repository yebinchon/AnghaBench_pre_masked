
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_running; } ;
struct otus_data {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct otus_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct otus_softc*) ;
 int FUNC_1 (struct otus_softc*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct otus_softc*,struct otus_data*) ;
 struct otus_data* FUNC_4 (struct otus_softc*) ;
 scalar_t__ FUNC_5 (struct otus_softc*,struct ieee80211_node*,struct mbuf*,struct otus_data*,struct ieee80211_bpf_params const*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_4, struct mbuf *VAR_5,
    const struct ieee80211_bpf_params *VAR_6)
{
 struct ieee80211com *VAR_7= VAR_4->ni_ic;
 struct otus_softc *VAR_8 = VAR_7->ic_softc;
 struct otus_data *VAR_9 = ((void*)0);
 int VAR_10 = 0;


 FUNC_0(VAR_8);
 if (! VAR_8->sc_running) {
  VAR_10 = VAR_1;
  goto error;
 }

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 == ((void*)0)) {
  VAR_10 = VAR_2;
  goto error;
 }

 if (FUNC_5(VAR_8, VAR_4, VAR_5, VAR_9, VAR_6) != 0) {
  VAR_10 = VAR_0;
  goto error;
 }

 FUNC_1(VAR_8);
 return (0);
error:
 if (VAR_9)
  FUNC_3(VAR_8, VAR_9);
 FUNC_1(VAR_8);
 FUNC_2(VAR_5);
 return (VAR_3);
}
