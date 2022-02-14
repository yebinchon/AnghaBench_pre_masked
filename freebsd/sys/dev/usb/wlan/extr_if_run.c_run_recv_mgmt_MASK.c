
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct run_vap {int (* recv_mgmt ) (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;} ;
struct run_softc {int dummy; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; TYPE_1__* iv_ic; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct TYPE_4__ {scalar_t__ tsf; } ;
struct ieee80211_node {TYPE_2__ ni_tstamp; struct ieee80211vap* ni_vap; } ;
struct TYPE_3__ {struct run_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct run_softc*,int,char*,int ,int ) ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (struct run_softc*) ;
 struct run_vap* FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211_node*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct run_softc*,scalar_t__*) ;
 int FUNC_7 (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;

__attribute__((used)) static void
FUNC_8(struct ieee80211_node *VAR_5, struct mbuf *VAR_6, int VAR_7,
    const struct ieee80211_rx_stats *VAR_8, int VAR_9, int VAR_10)
{
 struct ieee80211vap *VAR_11 = VAR_5->ni_vap;
 struct run_softc *VAR_12 = VAR_11->iv_ic->ic_softc;
 struct run_vap *VAR_13 = FUNC_3(VAR_11);
 uint64_t VAR_14, VAR_15;

 VAR_13->recv_mgmt(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_11->iv_state == VAR_2 &&
     (VAR_7 == VAR_0 ||
     VAR_7 == VAR_1)) {
  VAR_14 = FUNC_5(VAR_5->ni_tstamp.tsf);
  FUNC_1(VAR_12);
  FUNC_6(VAR_12, &VAR_15);
  FUNC_2(VAR_12);
  VAR_15 = FUNC_5(VAR_15);

  if (VAR_14 >= VAR_15) {
   FUNC_0(VAR_12, VAR_4 | VAR_3,
       "ibss merge, tsf %ju tstamp %ju\n",
       (uintmax_t)VAR_15, (uintmax_t)VAR_14);
   (void) FUNC_4(VAR_5);
  }
 }
}
