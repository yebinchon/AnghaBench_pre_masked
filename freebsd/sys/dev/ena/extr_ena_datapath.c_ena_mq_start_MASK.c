
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ena_ring {int enqueue_task; int enqueue_tq; int br; } ;
struct ena_adapter {size_t num_queues; struct ena_ring* tx_ring; int ifp; } ;
typedef TYPE_2__* if_t ;
struct TYPE_7__ {struct ena_adapter* if_softc; } ;


 scalar_t__ FUNC_0 (struct ena_ring*) ;
 int FUNC_1 (struct ena_ring*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,struct mbuf*) ;
 int FUNC_5 (struct ena_ring*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

int
FUNC_9(if_t VAR_4, struct mbuf *VAR_5)
{
 struct ena_adapter *VAR_6 = VAR_4->if_softc;
 struct ena_ring *VAR_7;
 int VAR_8, VAR_9;
 uint32_t VAR_10;

 if (FUNC_8((FUNC_6(VAR_6->ifp) & VAR_1) == 0))
  return (VAR_0);







 if (FUNC_2(VAR_5) != VAR_2) {
  VAR_10 = VAR_5->m_pkthdr.flowid % VAR_6->num_queues;
 } else {
  VAR_10 = VAR_3 % VAR_6->num_queues;
 }
 VAR_7 = &VAR_6->tx_ring[VAR_10];


 VAR_9 = FUNC_3(VAR_4, VAR_7->br);
 VAR_8 = FUNC_4(VAR_4, VAR_7->br, VAR_5);
 if (FUNC_8(VAR_8 != 0)) {
  FUNC_7(VAR_7->enqueue_tq, &VAR_7->enqueue_task);
  return (VAR_8);
 }

 if (VAR_9 && (FUNC_0(VAR_7) != 0)) {
  FUNC_5(VAR_7);
  FUNC_1(VAR_7);
 } else {
  FUNC_7(VAR_7->enqueue_tq, &VAR_7->enqueue_task);
 }

 return (0);
}
