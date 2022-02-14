
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* my_tx_chain; TYPE_1__* my_rx_chain; } ;
struct my_softc {TYPE_4__* my_ldata; TYPE_3__ my_cdata; int my_watchdog; int my_autoneg_timer; struct ifnet* my_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_8__ {int my_tx_list; int my_rx_list; } ;
struct TYPE_6__ {int * my_mbuf; } ;
struct TYPE_5__ {int * my_mbuf; } ;


 int FUNC_0 (struct my_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct my_softc*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct my_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct my_softc * VAR_10)
{
 int VAR_11;
 struct ifnet *VAR_12;

 FUNC_2(VAR_10);
 VAR_12 = VAR_10->my_ifp;

 FUNC_4(&VAR_10->my_autoneg_timer);
 FUNC_4(&VAR_10->my_watchdog);

 FUNC_1(VAR_10, VAR_6, (VAR_3 | VAR_7));
 FUNC_0(VAR_10, VAR_2, 0x00000000);
 FUNC_0(VAR_10, VAR_8, 0x00000000);
 FUNC_0(VAR_10, VAR_4, 0x00000000);




 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (VAR_10->my_cdata.my_rx_chain[VAR_11].my_mbuf != ((void*)0)) {
   FUNC_5(VAR_10->my_cdata.my_rx_chain[VAR_11].my_mbuf);
   VAR_10->my_cdata.my_rx_chain[VAR_11].my_mbuf = ((void*)0);
  }
 }
 FUNC_3((char *)&VAR_10->my_ldata->my_rx_list,
     sizeof(VAR_10->my_ldata->my_rx_list));



 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (VAR_10->my_cdata.my_tx_chain[VAR_11].my_mbuf != ((void*)0)) {
   FUNC_5(VAR_10->my_cdata.my_tx_chain[VAR_11].my_mbuf);
   VAR_10->my_cdata.my_tx_chain[VAR_11].my_mbuf = ((void*)0);
  }
 }
 FUNC_3((char *)&VAR_10->my_ldata->my_tx_list,
     sizeof(VAR_10->my_ldata->my_tx_list));
 VAR_12->if_drv_flags &= ~(VAR_1 | VAR_0);
 return;
}
