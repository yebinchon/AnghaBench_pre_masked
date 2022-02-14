
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dc_rx_map; int * dc_tx_map; int dc_sbuf; } ;
struct TYPE_3__ {int dc_tx_list_paddr; int dc_tx_list; int dc_rx_list_paddr; int dc_rx_list; } ;
struct dc_softc {int dc_dev; int dc_sparemap; int dc_rx_mtag; TYPE_2__ dc_cdata; int dc_tx_mtag; int dc_ptag; int dc_saddr; int dc_smap; int dc_stag; TYPE_1__ dc_ldata; int dc_tx_lmap; int dc_tx_ltag; int dc_rx_lmap; int dc_rx_ltag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int,int ,int *,int) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_16 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct dc_softc *VAR_17)
{
 int VAR_18, VAR_19;

 VAR_18 = FUNC_0(FUNC_4(VAR_17->dc_dev), 1, 0,
     VAR_4, VAR_3, ((void*)0), ((void*)0),
     VAR_5, 0, VAR_5, 0,
     ((void*)0), ((void*)0), &VAR_17->dc_ptag);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to allocate parent DMA tag\n");
  goto fail;
 }


 VAR_18 = FUNC_0(VAR_17->dc_ptag, VAR_6, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0), VAR_11, 1,
     VAR_11, 0, ((void*)0), ((void*)0), &VAR_17->dc_rx_ltag);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev, "failed to create RX list DMA tag\n");
  goto fail;
 }

 VAR_18 = FUNC_0(VAR_17->dc_ptag, VAR_6, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0), VAR_14, 1,
     VAR_14, 0, ((void*)0), ((void*)0), &VAR_17->dc_tx_ltag);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev, "failed to create TX list DMA tag\n");
  goto fail;
 }


 VAR_18 = FUNC_3(VAR_17->dc_rx_ltag,
     (void **)&VAR_17->dc_ldata.dc_rx_list, VAR_1 |
     VAR_2 | VAR_0, &VAR_17->dc_rx_lmap);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to allocate DMA'able memory for RX list\n");
  goto fail;
 }
 VAR_18 = FUNC_2(VAR_17->dc_rx_ltag, VAR_17->dc_rx_lmap,
     VAR_17->dc_ldata.dc_rx_list, VAR_11, VAR_16,
     &VAR_17->dc_ldata.dc_rx_list_paddr, VAR_1);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to load DMA'able memory for RX list\n");
  goto fail;
 }

 VAR_18 = FUNC_3(VAR_17->dc_tx_ltag,
     (void **)&VAR_17->dc_ldata.dc_tx_list, VAR_1 |
     VAR_2 | VAR_0, &VAR_17->dc_tx_lmap);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to allocate DMA'able memory for TX list\n");
  goto fail;
 }
 VAR_18 = FUNC_2(VAR_17->dc_tx_ltag, VAR_17->dc_tx_lmap,
     VAR_17->dc_ldata.dc_tx_list, VAR_14, VAR_16,
     &VAR_17->dc_ldata.dc_tx_list_paddr, VAR_1);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "cannot load DMA'able memory for TX list\n");
  goto fail;
 }





 VAR_18 = FUNC_0(VAR_17->dc_ptag, VAR_6, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0),
     VAR_12 + VAR_8, 1, VAR_12 + VAR_8,
     0, ((void*)0), ((void*)0), &VAR_17->dc_stag);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to create DMA tag for setup frame\n");
  goto fail;
 }
 VAR_18 = FUNC_3(VAR_17->dc_stag, (void **)&VAR_17->dc_cdata.dc_sbuf,
     VAR_1, &VAR_17->dc_smap);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to allocate DMA'able memory for setup frame\n");
  goto fail;
 }
 VAR_18 = FUNC_2(VAR_17->dc_stag, VAR_17->dc_smap, VAR_17->dc_cdata.dc_sbuf,
     VAR_12, VAR_16, &VAR_17->dc_saddr, VAR_1);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "cannot load DMA'able memory for setup frame\n");
  goto fail;
 }


 VAR_18 = FUNC_0(VAR_17->dc_ptag, VAR_9, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0),
     VAR_15, 1, VAR_15, 0, ((void*)0), ((void*)0), &VAR_17->dc_rx_mtag);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev, "failed to create RX mbuf tag\n");
  goto fail;
 }


 VAR_18 = FUNC_0(VAR_17->dc_ptag, 1, 0,
     VAR_3, VAR_3, ((void*)0), ((void*)0),
     VAR_15 * VAR_7, VAR_7, VAR_15,
     0, ((void*)0), ((void*)0), &VAR_17->dc_tx_mtag);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev, "failed to create TX mbuf tag\n");
  goto fail;
 }


 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
  VAR_18 = FUNC_1(VAR_17->dc_tx_mtag, 0,
      &VAR_17->dc_cdata.dc_tx_map[VAR_19]);
  if (VAR_18) {
   FUNC_5(VAR_17->dc_dev,
       "failed to create TX mbuf dmamap\n");
   goto fail;
  }
 }
 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_18 = FUNC_1(VAR_17->dc_rx_mtag, 0,
      &VAR_17->dc_cdata.dc_rx_map[VAR_19]);
  if (VAR_18) {
   FUNC_5(VAR_17->dc_dev,
       "failed to create RX mbuf dmamap\n");
   goto fail;
  }
 }
 VAR_18 = FUNC_1(VAR_17->dc_rx_mtag, 0, &VAR_17->dc_sparemap);
 if (VAR_18) {
  FUNC_5(VAR_17->dc_dev,
      "failed to create spare RX mbuf dmamap\n");
  goto fail;
 }

fail:
 return (VAR_18);
}
