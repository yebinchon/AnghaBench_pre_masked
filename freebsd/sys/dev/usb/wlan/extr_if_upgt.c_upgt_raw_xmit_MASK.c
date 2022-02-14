
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {int sc_flags; int sc_tx_timer; int sc_tx_inactive; } ;
struct upgt_data {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct upgt_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct upgt_data*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct upgt_softc*) ;
 int FUNC_2 (struct upgt_softc*,int ) ;
 int FUNC_3 (struct upgt_softc*) ;
 int FUNC_4 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct upgt_data* FUNC_5 (struct upgt_softc*) ;
 scalar_t__ FUNC_6 (struct upgt_softc*,struct mbuf*,struct ieee80211_node*,struct upgt_data*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_node *VAR_6, struct mbuf *VAR_7,
 const struct ieee80211_bpf_params *VAR_8)
{
 struct ieee80211com *VAR_9 = VAR_6->ni_ic;
 struct upgt_softc *VAR_10 = VAR_9->ic_softc;
 struct upgt_data *VAR_11 = ((void*)0);

 FUNC_1(VAR_10);

 if (!(VAR_10->sc_flags & VAR_3)) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_10);
  return VAR_1;
 }

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_10);
  return (VAR_2);
 }

 if (FUNC_6(VAR_10, VAR_7, VAR_6, VAR_11) != 0) {
  FUNC_0(&VAR_10->sc_tx_inactive, VAR_11, VAR_4);
  FUNC_2(VAR_10, VAR_5);
  FUNC_3(VAR_10);
  return (VAR_0);
 }
 FUNC_3(VAR_10);

 VAR_10->sc_tx_timer = 5;
 return (0);
}
