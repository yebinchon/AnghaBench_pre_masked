
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union al_udma_desc {int dummy; } al_udma_desc ;
struct device {int dummy; } ;
struct al_udma_q_params {int size; int cdesc_size; int * cdesc_base; int * desc_base; int desc_phy_base; int desc_phy_base_map; int desc_phy_base_tag; } ;
struct al_eth_tx_buffer {int dummy; } ;
struct al_eth_ring {int sw_count; int descs_size; int hw_count; scalar_t__ next_to_clean; scalar_t__ next_to_use; TYPE_1__* tx_buffer_info; int dma_buf_tag; void* cmpl_tq; int cmpl_task; void* enqueue_tq; int enqueue_task; int * br; int br_mtx; struct al_udma_q_params q_params; struct device* dev; } ;
struct al_eth_adapter {int dev; scalar_t__ up; struct al_eth_ring* tx_ring; } ;
typedef int bus_dmamap_t ;
typedef int bus_addr_t ;
struct TYPE_2__ {int dma_map; } ;


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
 int FUNC_0 (int *,int ,int ,struct al_eth_ring*) ;
 int FUNC_1 (struct device*,int *,int *,int *,void**,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,int) ;
 TYPE_1__* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 void* FUNC_11 (char*,int ,int ,void**) ;
 int FUNC_12 (void**,int,int ,char*,int ) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_13(struct al_eth_adapter *VAR_17, int VAR_18)
{
 struct al_eth_ring *VAR_19 = &VAR_17->tx_ring[VAR_18];
 struct device *VAR_20 = VAR_19->dev;
 struct al_udma_q_params *VAR_21 = &VAR_19->q_params;
 int VAR_22;
 int VAR_23;

 if (VAR_17->up)
  return (0);

 VAR_22 = sizeof(struct al_eth_tx_buffer) * VAR_19->sw_count;

 VAR_19->tx_buffer_info = FUNC_9(VAR_22, VAR_7, VAR_10 | VAR_9);
 if (VAR_19->tx_buffer_info == ((void*)0))
  return (VAR_4);

 VAR_19->descs_size = VAR_19->hw_count * sizeof(union al_udma_desc);
 VAR_21->size = VAR_19->hw_count;

 VAR_23 = FUNC_1(VAR_20, &VAR_21->desc_phy_base_tag,
     (bus_dmamap_t *)&VAR_21->desc_phy_base_map,
     (bus_addr_t *)&VAR_21->desc_phy_base,
     (void**)&VAR_21->desc_base, VAR_19->descs_size);
 if (VAR_23 != 0) {
  FUNC_7(VAR_20, "failed to al_dma_alloc_coherent,"
      " ret = %d\n", VAR_23);
  return (VAR_4);
 }

 if (VAR_21->desc_base == ((void*)0))
  return (VAR_4);

 FUNC_8(VAR_20, "Initializing ring queues %d\n", VAR_18);


 FUNC_10(&VAR_19->br_mtx, "AlRingMtx", ((void*)0), VAR_5);
 VAR_19->br = FUNC_2(VAR_0, VAR_6, VAR_9,
     &VAR_19->br_mtx);
 if (VAR_19->br == ((void*)0)) {
  FUNC_7(VAR_20, "Critical Failure setting up buf ring\n");
  return (VAR_4);
 }


 FUNC_0(&VAR_19->enqueue_task, 0, VAR_14, VAR_19);
 VAR_19->enqueue_tq = FUNC_11("al_tx_enque", VAR_8,
     VAR_16, &VAR_19->enqueue_tq);
 FUNC_12(&VAR_19->enqueue_tq, 1, VAR_12, "%s txeq",
     FUNC_6(VAR_17->dev));
 FUNC_0(&VAR_19->cmpl_task, 0, VAR_15, VAR_19);
 VAR_19->cmpl_tq = FUNC_11("al_tx_cmpl", VAR_8,
     VAR_16, &VAR_19->cmpl_tq);
 FUNC_12(&VAR_19->cmpl_tq, 1, VAR_13, "%s txcq",
     FUNC_6(VAR_17->dev));


 VAR_23 = FUNC_3(FUNC_5(VAR_20),
     1, 0,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_2,
     VAR_1,
     VAR_11,
     0,
     ((void*)0),
     ((void*)0),
     &VAR_19->dma_buf_tag);

 if (VAR_23 != 0) {
  FUNC_7(VAR_20,"Unable to allocate dma_buf_tag, ret = %d\n",
      VAR_23);
  return (VAR_23);
 }

 for (VAR_22 = 0; VAR_22 < VAR_19->sw_count; VAR_22++) {
  VAR_23 = FUNC_4(VAR_19->dma_buf_tag, 0,
      &VAR_19->tx_buffer_info[VAR_22].dma_map);
  if (VAR_23 != 0) {
   FUNC_7(VAR_20, "Unable to map DMA TX "
       "buffer memory [iter=%d]\n", VAR_22);
   return (VAR_23);
  }
 }


 VAR_21->cdesc_base = ((void*)0);

 VAR_21->cdesc_size = 8;
 VAR_19->next_to_use = 0;
 VAR_19->next_to_clean = 0;

 return (0);
}
