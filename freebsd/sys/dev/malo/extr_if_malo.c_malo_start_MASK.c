
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct malo_txq {int free; } ;
struct malo_txbuf {int * bf_node; int * bf_m; } ;
struct TYPE_5__ {int mst_tx_qstop; } ;
struct malo_softc {int malo_mh; TYPE_2__ malo_stats; int malo_snd; scalar_t__ malo_invalid; int malo_running; struct malo_txq* malo_txq; } ;
struct ieee80211_node {TYPE_3__* ni_vap; } ;
struct TYPE_6__ {int iv_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_softc*) ;
 int FUNC_1 (struct malo_txq*) ;
 int FUNC_2 (struct malo_txq*) ;
 int FUNC_3 (int *,struct malo_txbuf*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (int ,int ,int) ;
 struct malo_txbuf* FUNC_6 (struct malo_softc*,struct malo_txq*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct malo_softc*,struct ieee80211_node*,struct malo_txbuf*,struct mbuf*) ;
 int VAR_2 ;
 struct mbuf* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct mbuf*) ;

__attribute__((used)) static void
FUNC_11(struct malo_softc *VAR_3)
{
 struct ieee80211_node *VAR_4;
 struct malo_txq *VAR_5 = &VAR_3->malo_txq[0];
 struct malo_txbuf *VAR_6 = ((void*)0);
 struct mbuf *VAR_7;
 int VAR_8 = 0;

 FUNC_0(VAR_3);

 if (!VAR_3->malo_running || VAR_3->malo_invalid)
  return;

 while ((VAR_7 = FUNC_9(&VAR_3->malo_snd)) != ((void*)0)) {
  VAR_4 = (struct ieee80211_node *) VAR_7->m_pkthdr.rcvif;
  VAR_6 = FUNC_6(VAR_3, VAR_5);
  if (VAR_6 == ((void*)0)) {
   FUNC_10(&VAR_3->malo_snd, VAR_7);
   VAR_3->malo_stats.mst_tx_qstop++;
   break;
  }



  if (FUNC_8(VAR_3, VAR_4, VAR_6, VAR_7)) {
   FUNC_5(VAR_4->ni_vap->iv_ifp,
       VAR_0, 1);
   if (VAR_6 != ((void*)0)) {
    VAR_6->bf_m = ((void*)0);
    VAR_6->bf_node = ((void*)0);
    FUNC_1(VAR_5);
    FUNC_3(&VAR_5->free, VAR_6, VAR_1);
    FUNC_2(VAR_5);
   }
   FUNC_4(VAR_4);
   continue;
  }
  VAR_8++;

  if (VAR_8 >= VAR_2) {




   VAR_8 = 0;
   FUNC_7(VAR_3->malo_mh, 0 );
  }
 }

 if (VAR_8) {
  FUNC_7(VAR_3->malo_mh, 0 );
 }
}
