
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct rtwn_vap {int id; int (* recv_mgmt ) (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;} ;
struct rtwn_softc {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; TYPE_1__* iv_ic; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct TYPE_4__ {int tsf; } ;
struct ieee80211_node {TYPE_2__ ni_tstamp; struct ieee80211vap* ni_vap; } ;
struct TYPE_3__ {struct rtwn_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rtwn_softc*,int *,int ) ;
 int FUNC_6 (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;

void
FUNC_7(struct ieee80211_node *VAR_3, struct mbuf *VAR_4, int VAR_5,
    const struct ieee80211_rx_stats *VAR_6,
    int VAR_7, int VAR_8)
{
 struct ieee80211vap *VAR_9 = VAR_3->ni_vap;
 struct rtwn_softc *VAR_10 = VAR_9->iv_ic->ic_softc;
 struct rtwn_vap *VAR_11 = FUNC_2(VAR_9);
 uint64_t VAR_12, VAR_13;

 VAR_11->recv_mgmt(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_9->iv_state == VAR_2 &&
     (VAR_5 == VAR_0 ||
     VAR_5 == VAR_1)) {
  VAR_12 = FUNC_4(VAR_3->ni_tstamp.tsf);
  FUNC_0(VAR_10);
  FUNC_5(VAR_10, &VAR_13, VAR_11->id);
  FUNC_1(VAR_10);

  if (VAR_12 >= VAR_13)
   (void) FUNC_3(VAR_3);
 }
}
