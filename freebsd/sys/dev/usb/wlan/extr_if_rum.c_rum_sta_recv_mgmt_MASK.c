
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rum_vap {int (* recv_mgmt ) (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;} ;
struct rum_softc {int last_rx_flags; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; TYPE_1__* iv_ic; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;
struct TYPE_2__ {struct rum_softc* ic_softc; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (struct rum_softc*) ;
 struct rum_vap* FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct rum_softc*,int) ;
 int FUNC_5 (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211_node *VAR_4, struct mbuf *VAR_5, int VAR_6,
    const struct ieee80211_rx_stats *VAR_7,
    int VAR_8, int VAR_9)
{
 struct ieee80211vap *VAR_10 = VAR_4->ni_vap;
 struct rum_softc *VAR_11 = VAR_10->iv_ic->ic_softc;
 struct rum_vap *VAR_12 = FUNC_3(VAR_10);

 if (VAR_10->iv_state == VAR_1 &&
     VAR_6 == VAR_0) {
  FUNC_1(VAR_11);
  FUNC_0(12, "beacon, mybss %d (flags %02X)\n",
      !!(VAR_11->last_rx_flags & VAR_3),
      VAR_11->last_rx_flags);

  if ((VAR_11->last_rx_flags & (VAR_3 | VAR_2)) ==
      (VAR_3 | VAR_2)) {





   FUNC_4(VAR_11, 1);
  }
  FUNC_2(VAR_11);
 }

 VAR_12->recv_mgmt(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
