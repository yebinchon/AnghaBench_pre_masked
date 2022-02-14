
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rum_softc {scalar_t__ tx_nfree; int sc_running; } ;
struct mbuf {int dummy; } ;
struct ieee80211_node {TYPE_1__* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;
struct TYPE_2__ {struct rum_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rum_softc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct rum_softc*,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_4 (struct rum_softc*,struct mbuf*,struct ieee80211_node*,struct ieee80211_bpf_params const*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_3, struct mbuf *VAR_4,
    const struct ieee80211_bpf_params *VAR_5)
{
 struct rum_softc *VAR_6 = VAR_3->ni_ic->ic_softc;
 int VAR_7;

 FUNC_0(VAR_6);

 if (!VAR_6->sc_running) {
  VAR_7 = VAR_1;
  goto bad;
 }
 if (VAR_6->tx_nfree < VAR_2) {
  VAR_7 = VAR_0;
  goto bad;
 }

 if (VAR_5 == ((void*)0)) {




  if ((VAR_7 = FUNC_3(VAR_6, VAR_4, VAR_3)) != 0)
   goto bad;
 } else {




  if ((VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_3, VAR_5)) != 0)
   goto bad;
 }
 FUNC_1(VAR_6);

 return 0;
bad:
 FUNC_1(VAR_6);
 FUNC_2(VAR_4);
 return VAR_7;
}
