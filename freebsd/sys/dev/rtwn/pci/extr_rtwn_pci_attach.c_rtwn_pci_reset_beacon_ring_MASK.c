
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_tx_ring {int data_dmat; int desc_map; int desc_dmat; scalar_t__ desc; struct rtwn_tx_data* tx_data; } ;
struct rtwn_tx_desc_common {int flags0; } ;
struct rtwn_tx_data {int map; } ;
struct rtwn_softc {int txdesc_len; } ;
struct rtwn_pci_softc {struct rtwn_tx_ring* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_5, int VAR_6)
{
 struct rtwn_pci_softc *VAR_7 = FUNC_0(VAR_5);
 struct rtwn_tx_ring *VAR_8 = &VAR_7->tx_ring[VAR_4];
 struct rtwn_tx_data *VAR_9 = &VAR_8->tx_data[VAR_6];
 struct rtwn_tx_desc_common *VAR_10 = (struct rtwn_tx_desc_common *)
     ((uint8_t *)VAR_8->desc + VAR_6 * VAR_5->txdesc_len);

 FUNC_1(VAR_8->desc_dmat, VAR_8->desc_map, VAR_0);
 if (VAR_10->flags0 & VAR_3) {

  VAR_10->flags0 &= ~VAR_3;
  FUNC_1(VAR_8->desc_dmat, VAR_8->desc_map,
      VAR_2);


  FUNC_1(VAR_8->data_dmat, VAR_9->map,
      VAR_1);
  FUNC_2(VAR_8->data_dmat, VAR_9->map);
 }
}
