
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_txdesc {scalar_t__ tx_dmamap; } ;
struct sis_softc {scalar_t__ sis_parent_tag; scalar_t__ sis_tx_list_tag; int sis_tx_list_map; scalar_t__ sis_tx_list; scalar_t__ sis_tx_paddr; scalar_t__ sis_rx_list_tag; int sis_rx_list_map; scalar_t__ sis_rx_list; scalar_t__ sis_rx_paddr; scalar_t__ sis_tx_tag; scalar_t__ sis_rx_tag; struct sis_txdesc* sis_txdesc; scalar_t__ sis_rx_sparemap; struct sis_rxdesc* sis_rxdesc; } ;
struct sis_rxdesc {scalar_t__ rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(struct sis_softc *VAR_2)
{
 struct sis_rxdesc *VAR_3;
 struct sis_txdesc *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = &VAR_2->sis_rxdesc[VAR_5];
  if (VAR_3->rx_dmamap)
   FUNC_1(VAR_2->sis_rx_tag, VAR_3->rx_dmamap);
 }
 if (VAR_2->sis_rx_sparemap)
  FUNC_1(VAR_2->sis_rx_tag, VAR_2->sis_rx_sparemap);


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_2->sis_txdesc[VAR_5];
  if (VAR_4->tx_dmamap)
   FUNC_1(VAR_2->sis_tx_tag, VAR_4->tx_dmamap);
 }

 if (VAR_2->sis_rx_tag)
  FUNC_0(VAR_2->sis_rx_tag);
 if (VAR_2->sis_tx_tag)
  FUNC_0(VAR_2->sis_tx_tag);


 if (VAR_2->sis_rx_paddr)
  FUNC_2(VAR_2->sis_rx_list_tag, VAR_2->sis_rx_list_map);
 if (VAR_2->sis_rx_list)
  FUNC_3(VAR_2->sis_rx_list_tag, VAR_2->sis_rx_list,
      VAR_2->sis_rx_list_map);

 if (VAR_2->sis_rx_list_tag)
  FUNC_0(VAR_2->sis_rx_list_tag);


 if (VAR_2->sis_tx_paddr)
  FUNC_2(VAR_2->sis_tx_list_tag, VAR_2->sis_tx_list_map);

 if (VAR_2->sis_tx_list)
  FUNC_3(VAR_2->sis_tx_list_tag, VAR_2->sis_tx_list,
      VAR_2->sis_tx_list_map);

 if (VAR_2->sis_tx_list_tag)
  FUNC_0(VAR_2->sis_tx_list_tag);


 if (VAR_2->sis_parent_tag)
  FUNC_0(VAR_2->sis_parent_tag);
}
