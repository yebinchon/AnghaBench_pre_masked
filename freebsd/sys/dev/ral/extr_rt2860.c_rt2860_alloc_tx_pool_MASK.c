
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_txwi {int dummy; } ;
struct rt2860_tx_data {int paddr; struct rt2860_txwi* txwi; int map; } ;
struct rt2860_softc {int data_pool; int sc_dev; int txwi_dmat; struct rt2860_tx_data* data; scalar_t__ txwi_vaddr; int txwi_map; } ;
typedef scalar_t__ caddr_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rt2860_tx_data*,int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,void**,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct rt2860_softc*) ;

int
FUNC_10(struct rt2860_softc *VAR_9)
{
 caddr_t VAR_10;
 bus_addr_t VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_13 = VAR_6 * VAR_5;


 FUNC_0(&VAR_9->data_pool);

 VAR_14 = FUNC_2(FUNC_7(VAR_9->sc_dev), 1, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_13, 1, VAR_13, 0, ((void*)0), ((void*)0), &VAR_9->txwi_dmat);
 if (VAR_14 != 0) {
  FUNC_8(VAR_9->sc_dev, "could not create txwi DMA tag\n");
  goto fail;
 }

 VAR_14 = FUNC_6(VAR_9->txwi_dmat, (void **)&VAR_9->txwi_vaddr,
     VAR_1 | VAR_2, &VAR_9->txwi_map);
 if (VAR_14 != 0) {
  FUNC_8(VAR_9->sc_dev, "could not allocate DMA memory\n");
  goto fail;
 }

 VAR_14 = FUNC_4(VAR_9->txwi_dmat, VAR_9->txwi_map,
     VAR_9->txwi_vaddr, VAR_13, VAR_8, &VAR_11, 0);
 if (VAR_14 != 0) {
  FUNC_8(VAR_9->sc_dev, "could not load txwi DMA map\n");
  goto fail;
 }

 FUNC_5(VAR_9->txwi_dmat, VAR_9->txwi_map, VAR_0);

 VAR_10 = VAR_9->txwi_vaddr;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  struct rt2860_tx_data *VAR_15 = &VAR_9->data[VAR_12];

  VAR_14 = FUNC_3(VAR_9->txwi_dmat, 0, &VAR_15->map);
  if (VAR_14 != 0) {
   FUNC_8(VAR_9->sc_dev, "could not create DMA map\n");
   goto fail;
  }
  VAR_15->txwi = (struct rt2860_txwi *)VAR_10;
  VAR_15->paddr = VAR_11;
  VAR_10 += VAR_5;
  VAR_11 += VAR_5;

  FUNC_1(&VAR_9->data_pool, VAR_15, VAR_7);
 }

 return 0;

fail: FUNC_9(VAR_9);
 return VAR_14;
}
