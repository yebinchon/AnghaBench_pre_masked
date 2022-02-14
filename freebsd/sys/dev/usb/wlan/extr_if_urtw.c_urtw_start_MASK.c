
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urtw_softc {int sc_flags; int sc_txtimer; int sc_watchdog_ch; int sc_tx_inactive; int sc_snd; } ;
struct urtw_data {int dummy; } ;
struct TYPE_3__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {TYPE_2__* ni_vap; } ;
struct TYPE_4__ {int iv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct urtw_data*,int ) ;
 int FUNC_1 (struct urtw_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,struct urtw_softc*) ;
 int VAR_3 ;
 int FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (int ,int ,int) ;
 struct mbuf* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int VAR_4 ;
 struct urtw_data* FUNC_7 (struct urtw_softc*) ;
 scalar_t__ FUNC_8 (struct urtw_softc*,struct ieee80211_node*,struct mbuf*,struct urtw_data*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(struct urtw_softc *VAR_6)
{
 struct urtw_data *VAR_7;
 struct ieee80211_node *VAR_8;
 struct mbuf *VAR_9;

 FUNC_1(VAR_6);

 if ((VAR_6->sc_flags & VAR_2) == 0)
  return;

 while ((VAR_9 = FUNC_5(&VAR_6->sc_snd)) != ((void*)0)) {
  VAR_7 = FUNC_7(VAR_6);
  if (VAR_7 == ((void*)0)) {
   FUNC_6(&VAR_6->sc_snd, VAR_9);
   break;
  }

  VAR_8 = (struct ieee80211_node *)VAR_9->m_pkthdr.rcvif;
  VAR_9->m_pkthdr.rcvif = ((void*)0);

  if (FUNC_8(VAR_6, VAR_8, VAR_9, VAR_7, VAR_1) != 0) {
   FUNC_4(VAR_8->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_0(&VAR_6->sc_tx_inactive, VAR_7, VAR_4);
   FUNC_3(VAR_8);
   break;
  }

  VAR_6->sc_txtimer = 5;
  FUNC_2(&VAR_6->sc_watchdog_ch, VAR_3, VAR_5, VAR_6);
 }
}
