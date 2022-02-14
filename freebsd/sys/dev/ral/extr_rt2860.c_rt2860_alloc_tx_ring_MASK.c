
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_txd {int dummy; } ;
struct rt2860_tx_ring {int desc_map; int desc_dmat; int paddr; int txd; } ;
struct rt2860_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_6 ;
 int FUNC_6 (struct rt2860_softc*,struct rt2860_tx_ring*) ;

__attribute__((used)) static int
FUNC_7(struct rt2860_softc *VAR_7, struct rt2860_tx_ring *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = VAR_5 * sizeof (struct rt2860_txd);

 VAR_10 = FUNC_0(FUNC_4(VAR_7->sc_dev), 16, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_9, 1, VAR_9, 0, ((void*)0), ((void*)0), &VAR_8->desc_dmat);
 if (VAR_10 != 0) {
  FUNC_5(VAR_7->sc_dev, "could not create desc DMA tag\n");
  goto fail;
 }

 VAR_10 = FUNC_3(VAR_8->desc_dmat, (void **)&VAR_8->txd,
     VAR_1 | VAR_2, &VAR_8->desc_map);
 if (VAR_10 != 0) {
  FUNC_5(VAR_7->sc_dev, "could not allocate DMA memory\n");
  goto fail;
 }

 VAR_10 = FUNC_1(VAR_8->desc_dmat, VAR_8->desc_map, VAR_8->txd,
     VAR_9, VAR_6, &VAR_8->paddr, 0);
 if (VAR_10 != 0) {
  FUNC_5(VAR_7->sc_dev, "could not load desc DMA map\n");
  goto fail;
 }

 FUNC_2(VAR_8->desc_dmat, VAR_8->desc_map, VAR_0);

 return 0;

fail: FUNC_6(VAR_7, VAR_8);
 return VAR_10;
}
