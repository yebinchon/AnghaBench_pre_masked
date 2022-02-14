
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int sc_flags; int sc_tx_timer; int sc_tx_inactive; scalar_t__ sc_seqnum; } ;
struct uath_data {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct uath_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct uath_data*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct uath_softc*) ;
 int FUNC_2 (struct uath_softc*,int ) ;
 int FUNC_3 (struct uath_softc*) ;
 int FUNC_4 (struct mbuf*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct uath_data* FUNC_5 (struct uath_softc*) ;
 scalar_t__ FUNC_6 (struct uath_softc*,struct mbuf*,struct ieee80211_node*,struct uath_data*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_node *VAR_7, struct mbuf *VAR_8,
    const struct ieee80211_bpf_params *VAR_9)
{
 struct ieee80211com *VAR_10 = VAR_7->ni_ic;
 struct uath_data *VAR_11;
 struct uath_softc *VAR_12 = VAR_10->ic_softc;

 FUNC_1(VAR_12);

 if ((VAR_12->sc_flags & VAR_4) ||
     !(VAR_12->sc_flags & VAR_3)) {
  FUNC_4(VAR_8);
  FUNC_3(VAR_12);
  return (VAR_1);
 }


 VAR_11 = FUNC_5(VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_8);
  FUNC_3(VAR_12);
  return (VAR_2);
 }

 VAR_12->sc_seqnum = 0;
 if (FUNC_6(VAR_12, VAR_8, VAR_7, VAR_11) != 0) {
  FUNC_0(&VAR_12->sc_tx_inactive, VAR_11, VAR_5);
  FUNC_2(VAR_12, VAR_6);
  FUNC_3(VAR_12);
  return (VAR_0);
 }
 FUNC_3(VAR_12);

 VAR_12->sc_tx_timer = 5;
 return (0);
}
