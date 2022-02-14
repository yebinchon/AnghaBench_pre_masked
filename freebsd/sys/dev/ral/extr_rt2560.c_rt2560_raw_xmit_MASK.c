
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ queued; } ;
struct rt2560_softc {int sc_flags; int sc_tx_timer; TYPE_1__ prioq; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct rt2560_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2560_softc*) ;
 int FUNC_1 (struct rt2560_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mbuf*) ;
 scalar_t__ FUNC_3 (struct rt2560_softc*,struct mbuf*,struct ieee80211_node*) ;
 scalar_t__ FUNC_4 (struct rt2560_softc*,struct mbuf*,struct ieee80211_node*,struct ieee80211_bpf_params const*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_node *VAR_5, struct mbuf *VAR_6,
 const struct ieee80211_bpf_params *VAR_7)
{
 struct ieee80211com *VAR_8 = VAR_5->ni_ic;
 struct rt2560_softc *VAR_9 = VAR_8->ic_softc;

 FUNC_0(VAR_9);


 if (!(VAR_9->sc_flags & VAR_3)) {
  FUNC_1(VAR_9);
  FUNC_2(VAR_6);
  return VAR_1;
 }
 if (VAR_9->prioq.queued >= VAR_4) {
  FUNC_1(VAR_9);
  FUNC_2(VAR_6);
  return VAR_2;
 }

 if (VAR_7 == ((void*)0)) {




  if (FUNC_3(VAR_9, VAR_6, VAR_5) != 0)
   goto bad;
 } else {




  if (FUNC_4(VAR_9, VAR_6, VAR_5, VAR_7))
   goto bad;
 }
 VAR_9->sc_tx_timer = 5;

 FUNC_1(VAR_9);

 return 0;
bad:
 FUNC_1(VAR_9);
 return VAR_0;
}
