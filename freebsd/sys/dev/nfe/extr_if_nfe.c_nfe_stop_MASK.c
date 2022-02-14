
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_tx_ring {int tx_data_tag; struct nfe_tx_data* data; } ;
struct nfe_tx_data {int * m; int tx_data_map; } ;
struct nfe_jrx_ring {int jrx_data_tag; struct nfe_rx_data* jdata; } ;
struct nfe_rx_ring {int rx_data_tag; struct nfe_rx_data* data; } ;
struct nfe_softc {int nfe_flags; struct nfe_tx_ring txq; struct nfe_jrx_ring jrxq; struct nfe_rx_ring rxq; scalar_t__ nfe_link; int nfe_stat_ch; scalar_t__ nfe_watchdog_timer; } ;
struct nfe_rx_data {int * m; int rx_data_map; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nfe_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct nfe_softc*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 struct nfe_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfe_softc*) ;
 int FUNC_9 (struct nfe_softc*) ;

__attribute__((used)) static void
FUNC_10(if_t VAR_9)
{
 struct nfe_softc *VAR_10 = FUNC_5(VAR_9);
 struct nfe_rx_ring *VAR_11;
 struct nfe_jrx_ring *VAR_12;
 struct nfe_tx_ring *VAR_13;
 struct nfe_rx_data *VAR_14;
 struct nfe_tx_data *VAR_15;
 int VAR_16;

 FUNC_0(VAR_10);

 VAR_10->nfe_watchdog_timer = 0;
 FUNC_6(VAR_9, 0, (VAR_3 | VAR_2));

 FUNC_4(&VAR_10->nfe_stat_ch);


 FUNC_1(VAR_10, VAR_8, 0);


 FUNC_1(VAR_10, VAR_6, 0);


 FUNC_8(VAR_10);

 VAR_10->nfe_link = 0;


 VAR_11 = &VAR_10->rxq;
 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_14 = &VAR_11->data[VAR_16];
  if (VAR_14->m != ((void*)0)) {
   FUNC_2(VAR_11->rx_data_tag,
       VAR_14->rx_data_map, VAR_0);
   FUNC_3(VAR_11->rx_data_tag,
       VAR_14->rx_data_map);
   FUNC_7(VAR_14->m);
   VAR_14->m = ((void*)0);
  }
 }

 if ((VAR_10->nfe_flags & VAR_5) != 0) {
  VAR_12 = &VAR_10->jrxq;
  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
   VAR_14 = &VAR_12->jdata[VAR_16];
   if (VAR_14->m != ((void*)0)) {
    FUNC_2(VAR_12->jrx_data_tag,
        VAR_14->rx_data_map, VAR_0);
    FUNC_3(VAR_12->jrx_data_tag,
        VAR_14->rx_data_map);
    FUNC_7(VAR_14->m);
    VAR_14->m = ((void*)0);
   }
  }
 }

 VAR_13 = &VAR_10->txq;
 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_15 = &VAR_13->data[VAR_16];
  if (VAR_15->m != ((void*)0)) {
   FUNC_2(VAR_13->tx_data_tag,
       VAR_15->tx_data_map, VAR_1);
   FUNC_3(VAR_13->tx_data_tag,
       VAR_15->tx_data_map);
   FUNC_7(VAR_15->m);
   VAR_15->m = ((void*)0);
  }
 }

 FUNC_9(VAR_10);
}
