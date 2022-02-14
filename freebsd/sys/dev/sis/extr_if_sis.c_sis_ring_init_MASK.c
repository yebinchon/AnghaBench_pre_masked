
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sis_txdesc {int * tx_m; } ;
struct sis_softc {int sis_rx_list_map; int sis_rx_list_tag; TYPE_1__* sis_rx_list; struct sis_rxdesc* sis_rxdesc; scalar_t__ sis_rx_cons; int sis_tx_list_map; int sis_tx_list_tag; scalar_t__ sis_tx_cnt; scalar_t__ sis_tx_cons; scalar_t__ sis_tx_prod; TYPE_1__* sis_tx_list; struct sis_txdesc* sis_txdesc; } ;
struct sis_rxdesc {TYPE_1__* rx_desc; } ;
typedef int bus_addr_t ;
struct TYPE_2__ {void* sis_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sis_softc*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sis_softc*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct sis_softc*,struct sis_rxdesc*) ;

__attribute__((used)) static int
FUNC_7(struct sis_softc *VAR_6)
{
 struct sis_rxdesc *VAR_7;
 struct sis_txdesc *VAR_8;
 bus_addr_t VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(&VAR_6->sis_tx_list[0], VAR_5);
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_8 = &VAR_6->sis_txdesc[VAR_11];
  VAR_8->tx_m = ((void*)0);
  if (VAR_11 == VAR_4 - 1)
   VAR_9 = FUNC_2(VAR_6, 0);
  else
   VAR_9 = FUNC_2(VAR_6, VAR_11 + 1);
  VAR_6->sis_tx_list[VAR_11].sis_next = FUNC_5(FUNC_0(VAR_9));
 }
 VAR_6->sis_tx_prod = VAR_6->sis_tx_cons = VAR_6->sis_tx_cnt = 0;
 FUNC_3(VAR_6->sis_tx_list_tag, VAR_6->sis_tx_list_map,
     VAR_0 | VAR_1);

 VAR_6->sis_rx_cons = 0;
 FUNC_4(&VAR_6->sis_rx_list[0], VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_7 = &VAR_6->sis_rxdesc[VAR_11];
  VAR_7->rx_desc = &VAR_6->sis_rx_list[VAR_11];
  if (VAR_11 == VAR_2 - 1)
   VAR_9 = FUNC_1(VAR_6, 0);
  else
   VAR_9 = FUNC_1(VAR_6, VAR_11 + 1);
  VAR_7->rx_desc->sis_next = FUNC_5(FUNC_0(VAR_9));
  VAR_10 = FUNC_6(VAR_6, VAR_7);
  if (VAR_10)
   return (VAR_10);
 }
 FUNC_3(VAR_6->sis_rx_list_tag, VAR_6->sis_rx_list_map,
     VAR_0 | VAR_1);

 return (0);
}
