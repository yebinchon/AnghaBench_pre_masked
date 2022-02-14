
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_2__ {int me; } ;
struct ix_rx_queue {TYPE_1__ rxr; } ;
struct adapter {struct ix_rx_queue* rx_queues; } ;
typedef int if_ctx_t ;


 struct adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_0, uint16_t VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_0);
 struct ix_rx_queue *VAR_3 = &VAR_2->rx_queues[VAR_1];

 FUNC_1(VAR_2, VAR_3->rxr.me);

 return (0);
}
