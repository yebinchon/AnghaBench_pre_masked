
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union al_udma_desc {int dummy; } al_udma_desc ;
struct device {int dummy; } ;
struct al_udma_q_params {int size; int cdesc_size; int * cdesc_base; int cdesc_phy_base; int cdesc_phy_base_map; int cdesc_phy_base_tag; int * desc_base; int desc_phy_base; int desc_phy_base_map; int desc_phy_base_tag; } ;
struct al_eth_rx_buffer {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ifp; } ;
struct al_eth_ring {int sw_count; int descs_size; int hw_count; int cdescs_size; scalar_t__ next_to_use; scalar_t__ next_to_clean; TYPE_2__ lro; int lro_enabled; TYPE_3__* rx_buffer_info; int dma_buf_tag; int enqueue_tq; int enqueue_task; struct al_udma_q_params q_params; struct device* dev; } ;
struct al_eth_adapter {TYPE_1__* netdev; int dev; struct al_eth_ring* rx_ring; } ;
typedef int bus_addr_t ;
struct TYPE_6__ {int dma_map; } ;
struct TYPE_4__ {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ,struct al_eth_ring*) ;
 int VAR_9 ;
 int FUNC_1 (struct device*,int *,int *,int *,void**,int) ;
 int VAR_10 ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,unsigned int) ;
 TYPE_3__* FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (char*,int ,int ,int *) ;
 int FUNC_11 (int *,int,int ,char*,int ) ;
 int VAR_11 ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_13(struct al_eth_adapter *VAR_12, unsigned int VAR_13)
{
 struct al_eth_ring *VAR_14 = &VAR_12->rx_ring[VAR_13];
 struct device *VAR_15 = VAR_14->dev;
 struct al_udma_q_params *VAR_16 = &VAR_14->q_params;
 int VAR_17;
 int VAR_18;

 VAR_17 = sizeof(struct al_eth_rx_buffer) * VAR_14->sw_count;


 VAR_17 += 1;

 VAR_14->rx_buffer_info = FUNC_8(VAR_17, VAR_4, VAR_7 | VAR_6);
 if (VAR_14->rx_buffer_info == ((void*)0))
  return (VAR_2);

 VAR_14->descs_size = VAR_14->hw_count * sizeof(union al_udma_desc);
 VAR_16->size = VAR_14->hw_count;

 VAR_18 = FUNC_1(VAR_15, &VAR_16->desc_phy_base_tag,
     &VAR_16->desc_phy_base_map,
     (bus_addr_t *)&VAR_16->desc_phy_base,
     (void**)&VAR_16->desc_base, VAR_14->descs_size);

 if ((VAR_16->desc_base == ((void*)0)) || (VAR_18 != 0))
  return (VAR_2);


 VAR_16->cdesc_size = 16;
 VAR_14->cdescs_size = VAR_14->hw_count * VAR_16->cdesc_size;
 VAR_18 = FUNC_1(VAR_15, &VAR_16->cdesc_phy_base_tag,
     &VAR_16->cdesc_phy_base_map,
     (bus_addr_t *)&VAR_16->cdesc_phy_base,
     (void**)&VAR_16->cdesc_base, VAR_14->cdescs_size);

 if ((VAR_16->cdesc_base == ((void*)0)) || (VAR_18 != 0))
  return (VAR_2);


 FUNC_0(&VAR_14->enqueue_task, 0, VAR_10, VAR_14);
 VAR_14->enqueue_tq = FUNC_10("al_rx_enque", VAR_5,
     VAR_11, &VAR_14->enqueue_tq);
 FUNC_11(&VAR_14->enqueue_tq, 1, VAR_8, "%s rxeq",
     FUNC_5(VAR_12->dev));


 VAR_18 = FUNC_2(FUNC_4(VAR_15),
     1, 0,
     VAR_1,
     VAR_1,
     ((void*)0), ((void*)0),
     VAR_0,
     1,
     VAR_0,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_14->dma_buf_tag);

 if (VAR_18 != 0) {
  FUNC_6(VAR_15,"Unable to allocate RX dma_buf_tag\n");
  return (VAR_18);
 }

 for (VAR_17 = 0; VAR_17 < VAR_14->sw_count; VAR_17++) {
  VAR_18 = FUNC_3(VAR_14->dma_buf_tag, 0,
      &VAR_14->rx_buffer_info[VAR_17].dma_map);
  if (VAR_18 != 0) {
   FUNC_6(VAR_15,"Unable to map DMA RX buffer memory\n");
   return (VAR_18);
  }
 }


 FUNC_9(VAR_16->cdesc_base, 0, VAR_14->cdescs_size);


 if ((VAR_12->netdev->if_capenable & VAR_3) != 0) {
  int VAR_19 = FUNC_12(&VAR_14->lro);
  if (VAR_19 != 0) {
   FUNC_6(VAR_12->dev,
       "LRO[%d] Initialization failed!\n", VAR_13);
  } else {
   FUNC_7(VAR_12->dev,
       "RX Soft LRO[%d] Initialized\n", VAR_13);
   VAR_14->lro_enabled = VAR_9;
   VAR_14->lro.ifp = VAR_12->netdev;
  }
 }

 VAR_14->next_to_clean = 0;
 VAR_14->next_to_use = 0;

 return (0);
}
