
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmbus_channel {int dummy; } ;
struct hn_softc {int hn_rx_ring_inuse; int hn_rx_ring_cnt; int hn_tx_ring_cnt; TYPE_2__* hn_tx_ring; TYPE_1__* hn_rx_ring; struct vmbus_channel* hn_prichan; } ;
struct TYPE_4__ {int hn_tx_flags; } ;
struct TYPE_3__ {int hn_rx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct hn_softc*,struct vmbus_channel*) ;
 int FUNC_2 (struct vmbus_channel*) ;
 struct vmbus_channel** FUNC_3 (struct vmbus_channel*,int) ;
 int FUNC_4 (struct vmbus_channel**,int) ;

__attribute__((used)) static void
FUNC_5(struct hn_softc *VAR_2)
{
 struct vmbus_channel **VAR_3;
 int VAR_4 = VAR_2->hn_rx_ring_inuse - 1;
 int VAR_5;

 if (VAR_4 == 0)
  goto back;


 VAR_3 = FUNC_3(VAR_2->hn_prichan, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
  FUNC_1(VAR_2, VAR_3[VAR_5]);
 FUNC_4(VAR_3, VAR_4);

back:




 FUNC_1(VAR_2, VAR_2->hn_prichan);


 FUNC_2(VAR_2->hn_prichan);
}
