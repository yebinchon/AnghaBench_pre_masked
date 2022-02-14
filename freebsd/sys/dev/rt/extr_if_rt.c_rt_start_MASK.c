
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt_softc {int tx_watchdog_ch; int tx_timer; TYPE_2__* tx_ring; int * tx_data_queue_full; } ;
struct TYPE_4__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; struct rt_softc* if_softc; } ;
struct TYPE_5__ {scalar_t__ data_queued; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int VAR_3 ;
 int FUNC_1 (struct rt_softc*,int ,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,struct rt_softc*) ;
 int VAR_6 ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct rt_softc*,struct mbuf*,int) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_8)
{
 struct rt_softc *VAR_9;
 struct mbuf *VAR_10;
 int VAR_11 = 0 ;

 VAR_9 = VAR_8->if_softc;

 if (!(VAR_8->if_drv_flags & VAR_2))
  return;

 for (;;) {
  FUNC_0(&VAR_8->if_snd, VAR_10);
  if (VAR_10 == ((void*)0))
   break;

  VAR_10->m_pkthdr.rcvif = ((void*)0);

  FUNC_2(&VAR_9->tx_ring[VAR_11]);

  if (VAR_9->tx_ring[VAR_11].data_queued >=
      VAR_4) {
   FUNC_3(&VAR_9->tx_ring[VAR_11]);

   FUNC_1(VAR_9, VAR_3,
       "if_start: Tx ring with qid=%d is full\n", VAR_11);

   FUNC_6(VAR_10);

   VAR_8->if_drv_flags |= VAR_1;
   FUNC_5(VAR_8, VAR_0, 1);

   VAR_9->tx_data_queue_full[VAR_11]++;

   break;
  }

  if (FUNC_7(VAR_9, VAR_10, VAR_11) != 0) {
   FUNC_3(&VAR_9->tx_ring[VAR_11]);

   FUNC_5(VAR_8, VAR_0, 1);

   break;
  }

  FUNC_3(&VAR_9->tx_ring[VAR_11]);
  VAR_9->tx_timer = VAR_5;
  FUNC_4(&VAR_9->tx_watchdog_ch, VAR_6, VAR_7, VAR_9);
 }
}
