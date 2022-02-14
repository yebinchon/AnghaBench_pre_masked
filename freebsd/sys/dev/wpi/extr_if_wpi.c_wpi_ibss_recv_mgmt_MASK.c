
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct wpi_vap {int (* wv_recv_mgmt ) (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;} ;
struct wpi_softc {int rx_tstamp; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; TYPE_1__* iv_ic; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct TYPE_4__ {int tsf; } ;
struct ieee80211_node {TYPE_2__ ni_tstamp; struct ieee80211vap* ni_vap; } ;
struct TYPE_3__ {struct wpi_softc* ic_softc; } ;


 int FUNC_0 (struct wpi_softc*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct wpi_vap* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct ieee80211_node*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_node*,struct mbuf*,int,struct ieee80211_rx_stats const*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_node *VAR_4, struct mbuf *VAR_5, int VAR_6,
    const struct ieee80211_rx_stats *VAR_7,
    int VAR_8, int VAR_9)
{
 struct ieee80211vap *VAR_10 = VAR_4->ni_vap;
 struct wpi_softc *VAR_11 = VAR_10->iv_ic->ic_softc;
 struct wpi_vap *VAR_12 = FUNC_1(VAR_10);
 uint64_t VAR_13, VAR_14;

 VAR_12->wv_recv_mgmt(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_10->iv_state == VAR_2 &&
     (VAR_6 == VAR_0 ||
     VAR_6 == VAR_1)) {
  VAR_13 = FUNC_3(VAR_4->ni_tstamp.tsf);
  VAR_14 = FUNC_3(VAR_11->rx_tstamp);

  if (VAR_13 >= VAR_14) {
   FUNC_0(VAR_11, VAR_3,
       "ibss merge, tsf %ju tstamp %ju\n",
       (uintmax_t)VAR_14, (uintmax_t)VAR_13);
   (void) FUNC_2(VAR_4);
  }
 }
}
