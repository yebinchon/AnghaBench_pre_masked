
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsec_softc {int tsec_rx_vaddr; int tsec_rx_dmap; int tsec_rx_dtag; int tsec_tx_vaddr; int tsec_tx_dmap; int tsec_tx_dtag; int tsec_rx_mtag; TYPE_2__* rx_data; int tsec_tx_mtag; TYPE_1__* tx_bufmap; } ;
struct TYPE_4__ {int * map; scalar_t__ mbuf; } ;
struct TYPE_3__ {int * map; scalar_t__ map_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct tsec_softc *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_3->tx_bufmap[VAR_4].map_initialized)
   FUNC_1(VAR_3->tsec_tx_mtag,
       VAR_3->tx_bufmap[VAR_4].map);

 FUNC_0(VAR_3->tsec_tx_mtag);


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->rx_data[VAR_4].mbuf) {

   FUNC_2(VAR_3->tsec_rx_mtag, VAR_3->rx_data[VAR_4].map,
       VAR_0);
   FUNC_3(VAR_3->tsec_rx_mtag,
       VAR_3->rx_data[VAR_4].map);


   FUNC_4(VAR_3->rx_data[VAR_4].mbuf);
  }

  if (VAR_3->rx_data[VAR_4].map != ((void*)0))
   FUNC_1(VAR_3->tsec_rx_mtag,
       VAR_3->rx_data[VAR_4].map);
 }

 FUNC_0(VAR_3->tsec_rx_mtag);


 FUNC_5(VAR_3->tsec_tx_dtag, VAR_3->tsec_tx_dmap,
     VAR_3->tsec_tx_vaddr);
 FUNC_5(VAR_3->tsec_rx_dtag, VAR_3->tsec_rx_dmap,
     VAR_3->tsec_rx_vaddr);
}
