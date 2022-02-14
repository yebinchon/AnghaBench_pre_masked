
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; struct al_eth_adapter* if_softc; } ;
struct al_eth_ring {scalar_t__ enqueue_is_running; int enqueue_task; int enqueue_tq; int br; } ;
struct al_eth_adapter {int num_tx_queues; int dev; struct al_eth_ring* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ifnet*,int ,struct mbuf*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_6, struct mbuf *VAR_7)
{
 struct al_eth_adapter *VAR_8 = VAR_6->if_softc;
 struct al_eth_ring *VAR_9;
 int VAR_10;
 int VAR_11;


 if (FUNC_0(VAR_7) != VAR_3)
  VAR_10 = VAR_7->m_pkthdr.flowid % VAR_8->num_tx_queues;
 else
  VAR_10 = VAR_4 % VAR_8->num_tx_queues;

 if ((VAR_6->if_drv_flags & (VAR_2|VAR_1)) !=
     VAR_2) {
  return (VAR_0);
 }

 VAR_9 = &VAR_8->tx_ring[VAR_10];

 FUNC_1(VAR_8->dev, "dgb start() - assuming link is active, "
     "sending packet to queue %d\n", VAR_10);

 VAR_11 = FUNC_2(VAR_6, VAR_9->br, VAR_7);





 if ((VAR_5 == 0) || ((VAR_5 != 0) && (VAR_9->enqueue_is_running == 0)))
  FUNC_3(VAR_9->enqueue_tq, &VAR_9->enqueue_task);

 return (VAR_11);
}
