
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {int sc_flags; int sc_txtimer; int sc_tx_inactive; } ;
struct urtw_data {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct urtw_softc* ic_softc; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;
struct ieee80211_bpf_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct urtw_data*,int ) ;
 int FUNC_1 (struct urtw_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct urtw_softc*) ;
 int FUNC_3 (struct mbuf*) ;
 int VAR_5 ;
 struct urtw_data* FUNC_4 (struct urtw_softc*) ;
 scalar_t__ FUNC_5 (struct urtw_softc*,struct ieee80211_node*,struct mbuf*,struct urtw_data*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_6, struct mbuf *VAR_7,
    const struct ieee80211_bpf_params *VAR_8)
{
 struct ieee80211com *VAR_9 = VAR_6->ni_ic;
 struct urtw_softc *VAR_10 = VAR_9->ic_softc;
 struct urtw_data *VAR_11;


 if (!(VAR_10->sc_flags & VAR_4)) {
  FUNC_3(VAR_7);
  return VAR_1;
 }
 FUNC_1(VAR_10);
 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_7);
  FUNC_2(VAR_10);
  return (VAR_2);
 }

 if (FUNC_5(VAR_10, VAR_6, VAR_7, VAR_11, VAR_3) != 0) {
  FUNC_0(&VAR_10->sc_tx_inactive, VAR_11, VAR_5);
  FUNC_2(VAR_10);
  return (VAR_0);
 }
 FUNC_2(VAR_10);

 VAR_10->sc_txtimer = 5;
 return (0);
}
