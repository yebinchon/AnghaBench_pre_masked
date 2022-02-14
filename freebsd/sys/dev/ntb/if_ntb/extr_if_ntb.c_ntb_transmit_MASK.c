
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_net_queue {int tx_task; int tx_tq; int tx_lock; int br; } ;
struct ntb_net_ctx {int num_queues; struct ntb_net_queue* queues; } ;
struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef int if_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,struct mbuf*) ;
 struct ntb_net_ctx* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ntb_net_queue*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(if_t VAR_3, struct mbuf *VAR_4)
{
 struct ntb_net_ctx *VAR_5 = FUNC_3(VAR_3);
 struct ntb_net_queue *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_0, "TX: ntb_transmit");
 if (FUNC_1(VAR_4) != VAR_1)
  VAR_8 = VAR_4->m_pkthdr.flowid % VAR_5->num_queues;
 else
  VAR_8 = VAR_2 % VAR_5->num_queues;
 VAR_6 = &VAR_5->queues[VAR_8];

 VAR_7 = FUNC_2(VAR_3, VAR_6->br, VAR_4);
 if (VAR_7)
  return (VAR_7);

 if (FUNC_4(&VAR_6->tx_lock)) {
  FUNC_6(VAR_6);
  FUNC_5(&VAR_6->tx_lock);
 } else
  FUNC_7(VAR_6->tx_tq, &VAR_6->tx_task);
 return (0);
}
