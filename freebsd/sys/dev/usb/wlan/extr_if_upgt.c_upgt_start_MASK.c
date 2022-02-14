
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct upgt_softc {int sc_flags; int sc_tx_timer; int sc_tx_inactive; int sc_snd; } ;
struct upgt_data {int dummy; } ;
struct TYPE_3__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ieee80211_node {TYPE_2__* ni_vap; } ;
struct TYPE_4__ {int iv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct upgt_data*,int ) ;
 int FUNC_1 (struct upgt_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct upgt_softc*,int ) ;
 int FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (int ,int ,int) ;
 struct mbuf* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct upgt_data* FUNC_7 (struct upgt_softc*) ;
 scalar_t__ FUNC_8 (struct upgt_softc*,struct mbuf*,struct ieee80211_node*,struct upgt_data*) ;

__attribute__((used)) static void
FUNC_9(struct upgt_softc *VAR_4)
{
 struct upgt_data *VAR_5;
 struct ieee80211_node *VAR_6;
 struct mbuf *VAR_7;

 FUNC_1(VAR_4);

 if ((VAR_4->sc_flags & VAR_1) == 0)
  return;

 while ((VAR_7 = FUNC_5(&VAR_4->sc_snd)) != ((void*)0)) {
  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5 == ((void*)0)) {
   FUNC_6(&VAR_4->sc_snd, VAR_7);
   break;
  }

  VAR_6 = (struct ieee80211_node *)VAR_7->m_pkthdr.rcvif;
  VAR_7->m_pkthdr.rcvif = ((void*)0);

  if (FUNC_8(VAR_4, VAR_7, VAR_6, VAR_5) != 0) {
   FUNC_4(VAR_6->ni_vap->iv_ifp,
       VAR_0, 1);
   FUNC_0(&VAR_4->sc_tx_inactive, VAR_5, VAR_2);
   FUNC_2(VAR_4, VAR_3);
   FUNC_3(VAR_6);
   continue;
  }
  VAR_4->sc_tx_timer = 5;
 }
}
