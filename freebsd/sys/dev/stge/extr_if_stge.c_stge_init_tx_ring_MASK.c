
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stge_txdesc {int dummy; } ;
struct TYPE_3__ {int stge_tx_ring_map; int stge_tx_ring_tag; int stge_txfreeq; struct stge_txdesc* stge_txdesc; scalar_t__ stge_tx_cnt; scalar_t__ stge_tx_cons; scalar_t__ stge_tx_prod; int stge_txbusyq; } ;
struct stge_ring_data {TYPE_2__* stge_tx_ring; } ;
struct stge_softc {TYPE_1__ sc_cdata; struct stge_ring_data sc_rdata; } ;
typedef int bus_addr_t ;
struct TYPE_4__ {void* tfd_control; void* tfd_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct stge_txdesc*,int ) ;
 int FUNC_2 (struct stge_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 void* FUNC_5 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(struct stge_softc *VAR_6)
{
 struct stge_ring_data *VAR_7;
 struct stge_txdesc *VAR_8;
 bus_addr_t VAR_9;
 int VAR_10;

 FUNC_0(&VAR_6->sc_cdata.stge_txfreeq);
 FUNC_0(&VAR_6->sc_cdata.stge_txbusyq);

 VAR_6->sc_cdata.stge_tx_prod = 0;
 VAR_6->sc_cdata.stge_tx_cons = 0;
 VAR_6->sc_cdata.stge_tx_cnt = 0;

 VAR_7 = &VAR_6->sc_rdata;
 FUNC_4(VAR_7->stge_tx_ring, VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_10 == (VAR_2 - 1))
   VAR_9 = FUNC_2(VAR_6, 0);
  else
   VAR_9 = FUNC_2(VAR_6, VAR_10 + 1);
  VAR_7->stge_tx_ring[VAR_10].tfd_next = FUNC_5(VAR_9);
  VAR_7->stge_tx_ring[VAR_10].tfd_control = FUNC_5(VAR_4);
  VAR_8 = &VAR_6->sc_cdata.stge_txdesc[VAR_10];
  FUNC_1(&VAR_6->sc_cdata.stge_txfreeq, VAR_8, VAR_5);
 }

 FUNC_3(VAR_6->sc_cdata.stge_tx_ring_tag,
     VAR_6->sc_cdata.stge_tx_ring_map,
     VAR_0 | VAR_1);

}
