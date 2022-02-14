
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct rtwn_tx_ring {int data_dmat; scalar_t__ paddr; scalar_t__ desc; struct rtwn_tx_data* tx_data; int desc_map; int desc_dmat; } ;
struct rtwn_tx_data {int * ni; int * m; int map; } ;
struct rtwn_softc {int txdesc_len; int sc_dev; } ;
struct rtwn_pci_softc {struct rtwn_tx_ring* tx_ring; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int ,scalar_t__*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__*,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_8 ;
 int FUNC_8 (struct rtwn_softc*,int) ;
 int FUNC_9 (struct rtwn_pci_softc*,void*,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct rtwn_softc *VAR_9, int VAR_10)
{
 struct rtwn_pci_softc *VAR_11 = FUNC_0(VAR_9);
 struct rtwn_tx_ring *VAR_12 = &VAR_11->tx_ring[VAR_10];
 bus_size_t VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = VAR_9->txdesc_len * VAR_7;
 VAR_15 = FUNC_1(FUNC_6(VAR_9->sc_dev), VAR_6, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_13, 1, VAR_13, 0, ((void*)0), ((void*)0), &VAR_12->desc_dmat);
 if (VAR_15 != 0) {
  FUNC_7(VAR_9->sc_dev, "could not create tx ring DMA tag\n");
  goto fail;
 }

 VAR_15 = FUNC_5(VAR_12->desc_dmat, &VAR_12->desc,
     VAR_1 | VAR_2, &VAR_12->desc_map);
 if (VAR_15 != 0) {
  FUNC_7(VAR_9->sc_dev, "can't map tx ring DMA memory\n");
  goto fail;
 }
 VAR_15 = FUNC_3(VAR_12->desc_dmat, VAR_12->desc_map,
     VAR_12->desc, VAR_13, VAR_8, &VAR_12->paddr,
     VAR_1);
 if (VAR_15 != 0) {
  FUNC_7(VAR_9->sc_dev, "could not load desc DMA map\n");
  goto fail;
 }
 FUNC_4(VAR_12->desc_dmat, VAR_12->desc_map,
     VAR_0);

 VAR_15 = FUNC_1(FUNC_6(VAR_9->sc_dev), 1, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_5, 1, VAR_5, 0, ((void*)0), ((void*)0), &VAR_12->data_dmat);
 if (VAR_15 != 0) {
  FUNC_7(VAR_9->sc_dev, "could not create tx buf DMA tag\n");
  goto fail;
 }

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  struct rtwn_tx_data *VAR_16 = &VAR_12->tx_data[VAR_14];
  void *VAR_17 = (uint8_t *)VAR_12->desc + VAR_9->txdesc_len * VAR_14;
  uint32_t VAR_18 = VAR_12->paddr +
      VAR_9->txdesc_len * ((VAR_14 + 1) % VAR_7);

  FUNC_9(VAR_11, VAR_17, VAR_18);

  VAR_15 = FUNC_2(VAR_12->data_dmat, 0, &VAR_16->map);
  if (VAR_15 != 0) {
   FUNC_7(VAR_9->sc_dev,
       "could not create tx buf DMA map\n");
   return (VAR_15);
  }
  VAR_16->m = ((void*)0);
  VAR_16->ni = ((void*)0);
 }
 return (0);

fail:
 FUNC_8(VAR_9, VAR_10);
 return (VAR_15);
}
