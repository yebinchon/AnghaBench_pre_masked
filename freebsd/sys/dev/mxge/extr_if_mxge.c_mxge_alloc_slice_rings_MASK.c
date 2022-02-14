
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int mask; int max_desc; TYPE_1__* info; int dmat; int * seg_list; void* req_bytes; int * req_list; } ;
struct TYPE_14__ {int mask; int extra_map; int dmat; TYPE_5__* info; void* shadow; } ;
struct TYPE_12__ {int mask; int extra_map; int dmat; TYPE_3__* info; void* shadow; } ;
struct TYPE_10__ {int mask; } ;
struct mxge_slice_state {TYPE_7__ tx; TYPE_8__* sc; TYPE_6__ rx_big; TYPE_4__ rx_small; TYPE_2__ rx_done; } ;
struct TYPE_16__ {int tx_boundary; int dev; int parent_dmat; struct mxge_slice_state* ss; } ;
typedef TYPE_8__ mxge_softc_t ;
typedef int mcp_kreq_ether_send_t ;
typedef int bus_dma_segment_t ;
struct TYPE_13__ {int map; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_9__ {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int,int ,int ,int *,int *,int,int,int,int,int,int *,int *,...) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,char*,int) ;
 void* FUNC_4 (size_t,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct mxge_slice_state *VAR_8, int VAR_9,
         int VAR_10)
{
 mxge_softc_t *VAR_11 = VAR_8->sc;
 size_t VAR_12;
 int VAR_13, VAR_14;



 VAR_8->rx_small.mask = VAR_8->rx_big.mask = VAR_9 - 1;
 VAR_8->rx_done.mask = (2 * VAR_9) - 1;


 VAR_12 = VAR_9 * sizeof (*VAR_8->rx_small.shadow);
 VAR_8->rx_small.shadow = FUNC_4(VAR_12, VAR_5, VAR_7|VAR_6);

 VAR_12 = VAR_9 * sizeof (*VAR_8->rx_big.shadow);
 VAR_8->rx_big.shadow = FUNC_4(VAR_12, VAR_5, VAR_7|VAR_6);


 VAR_12 = VAR_9 * sizeof (*VAR_8->rx_small.info);
 VAR_8->rx_small.info = FUNC_4(VAR_12, VAR_5, VAR_7|VAR_6);

 VAR_12 = VAR_9 * sizeof (*VAR_8->rx_big.info);
 VAR_8->rx_big.info = FUNC_4(VAR_12, VAR_5, VAR_7|VAR_6);


 VAR_13 = FUNC_1(VAR_11->parent_dmat,
     1,
     4096,
     VAR_1,
     VAR_1,
     ((void*)0), ((void*)0),
     VAR_2,
     1,
     VAR_2,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_8->rx_small.dmat);
 if (VAR_13 != 0) {
  FUNC_3(VAR_11->dev, "Err %d allocating rx_small dmat\n",
         VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_11->parent_dmat,
     1,



     0,

     VAR_1,
     VAR_1,
     ((void*)0), ((void*)0),
     3*4096,




     1,
     VAR_3,

     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_8->rx_big.dmat);
 if (VAR_13 != 0) {
  FUNC_3(VAR_11->dev, "Err %d allocating rx_big dmat\n",
         VAR_13);
  return VAR_13;
 }
 for (VAR_14 = 0; VAR_14 <= VAR_8->rx_small.mask; VAR_14++) {
  VAR_13 = FUNC_2(VAR_8->rx_small.dmat, 0,
     &VAR_8->rx_small.info[VAR_14].map);
  if (VAR_13 != 0) {
   FUNC_3(VAR_11->dev, "Err %d  rx_small dmamap\n",
          VAR_13);
   return VAR_13;
  }
 }
 VAR_13 = FUNC_2(VAR_8->rx_small.dmat, 0,
    &VAR_8->rx_small.extra_map);
 if (VAR_13 != 0) {
  FUNC_3(VAR_11->dev, "Err %d extra rx_small dmamap\n",
         VAR_13);
  return VAR_13;
 }

 for (VAR_14 = 0; VAR_14 <= VAR_8->rx_big.mask; VAR_14++) {
  VAR_13 = FUNC_2(VAR_8->rx_big.dmat, 0,
     &VAR_8->rx_big.info[VAR_14].map);
  if (VAR_13 != 0) {
   FUNC_3(VAR_11->dev, "Err %d  rx_big dmamap\n",
          VAR_13);
   return VAR_13;
  }
 }
 VAR_13 = FUNC_2(VAR_8->rx_big.dmat, 0,
    &VAR_8->rx_big.extra_map);
 if (VAR_13 != 0) {
  FUNC_3(VAR_11->dev, "Err %d extra rx_big dmamap\n",
         VAR_13);
  return VAR_13;
 }





 if (VAR_8 != VAR_8->sc->ss)
  return 0;


 VAR_8->tx.mask = VAR_10 - 1;
 VAR_8->tx.max_desc = FUNC_0(VAR_4, VAR_10 / 4);



 VAR_12 = 8 +
  sizeof (*VAR_8->tx.req_list) * (VAR_8->tx.max_desc + 4);
 VAR_8->tx.req_bytes = FUNC_4(VAR_12, VAR_5, VAR_6);

 VAR_8->tx.req_list = (mcp_kreq_ether_send_t *)
  ((unsigned long)(VAR_8->tx.req_bytes + 7) & ~7UL);


 VAR_12 = sizeof (*VAR_8->tx.seg_list) * VAR_8->tx.max_desc;
 VAR_8->tx.seg_list = (bus_dma_segment_t *)
  FUNC_4(VAR_12, VAR_5, VAR_6);


 VAR_12 = VAR_10 * sizeof (*VAR_8->tx.info);
 VAR_8->tx.info = FUNC_4(VAR_12, VAR_5, VAR_7|VAR_6);


 VAR_13 = FUNC_1(VAR_11->parent_dmat,
     1,
     VAR_11->tx_boundary,
     VAR_1,
     VAR_1,
     ((void*)0), ((void*)0),
     65536 + 256,
     VAR_8->tx.max_desc - 2,
     VAR_11->tx_boundary,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_8->tx.dmat);

 if (VAR_13 != 0) {
  FUNC_3(VAR_11->dev, "Err %d allocating tx dmat\n",
         VAR_13);
  return VAR_13;
 }



 for (VAR_14 = 0; VAR_14 <= VAR_8->tx.mask; VAR_14++) {
  VAR_13 = FUNC_2(VAR_8->tx.dmat, 0,
     &VAR_8->tx.info[VAR_14].map);
  if (VAR_13 != 0) {
   FUNC_3(VAR_11->dev, "Err %d  tx dmamap\n",
          VAR_13);
   return VAR_13;
  }
 }
 return 0;

}
