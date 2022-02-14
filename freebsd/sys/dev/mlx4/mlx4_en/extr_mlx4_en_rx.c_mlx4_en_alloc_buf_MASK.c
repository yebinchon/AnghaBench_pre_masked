
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* segs; struct mbuf* mbuf; int dma_map; } ;
struct mlx4_en_rx_ring {TYPE_1__ spare; void* rx_mr_key_be; int dma_tag; } ;
struct mlx4_en_rx_mbuf {struct mbuf* mbuf; int dma_map; } ;
struct mlx4_en_rx_desc {TYPE_2__* data; } ;
struct mbuf {int dummy; } ;
typedef int bus_dmamap_t ;
struct TYPE_7__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_6__ {void* addr; void* lkey; void* byte_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (struct mbuf*) ;
 struct mbuf* FUNC_8 (struct mlx4_en_rx_ring*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct mlx4_en_rx_ring *VAR_7, struct mlx4_en_rx_desc *VAR_8,
    struct mlx4_en_rx_mbuf *VAR_9)
{
 bus_dma_segment_t VAR_10[VAR_4];
 bus_dmamap_t VAR_11;
 struct mbuf *VAR_12;
 int VAR_13;
 int VAR_14;

 int VAR_15;



 if (FUNC_9(VAR_7->spare.mbuf == ((void*)0))) {
  VAR_12 = FUNC_8(VAR_7);
  if (FUNC_9(VAR_12 == ((void*)0)))
   return (-VAR_3);


  FUNC_6(VAR_12, VAR_6);


  VAR_14 = -FUNC_0(VAR_7->dma_tag, VAR_7->spare.dma_map,
      VAR_12, VAR_7->spare.segs, &VAR_13, VAR_2);
  if (FUNC_9(VAR_14 != 0)) {
   FUNC_7(VAR_12);
   return (VAR_14);
  }


  VAR_7->spare.mbuf = VAR_12;



  for (VAR_15 = VAR_13; VAR_15 != VAR_4; VAR_15++) {
   VAR_7->spare.segs[VAR_15].ds_addr = 0;
   VAR_7->spare.segs[VAR_15].ds_len = 0;
  }

  FUNC_1(VAR_7->dma_tag, VAR_7->spare.dma_map,
      VAR_1);
 }


 if (FUNC_5(VAR_9->mbuf != ((void*)0))) {
  FUNC_1(VAR_7->dma_tag, VAR_9->dma_map,
      VAR_0);
  FUNC_2(VAR_7->dma_tag, VAR_9->dma_map);
 }

 VAR_12 = FUNC_8(VAR_7);
 if (FUNC_9(VAR_12 == ((void*)0)))
  goto use_spare;


 FUNC_6(VAR_12, VAR_6);

 VAR_14 = -FUNC_0(VAR_7->dma_tag, VAR_9->dma_map,
     VAR_12, VAR_10, &VAR_13, VAR_2);
 if (FUNC_9(VAR_14 != 0)) {
  FUNC_7(VAR_12);
  goto use_spare;
 }




 for (VAR_15 = 0; VAR_15 != VAR_13; VAR_15++) {
  VAR_8->data[VAR_15].byte_count = FUNC_3(VAR_10[VAR_15].ds_len);
  VAR_8->data[VAR_15].lkey = VAR_7->rx_mr_key_be;
  VAR_8->data[VAR_15].addr = FUNC_4(VAR_10[VAR_15].ds_addr);
 }
 for (; VAR_15 != VAR_4; VAR_15++) {
  VAR_8->data[VAR_15].byte_count = 0;
  VAR_8->data[VAR_15].lkey = FUNC_3(VAR_5);
  VAR_8->data[VAR_15].addr = 0;
 }

 VAR_9->mbuf = VAR_12;

 FUNC_1(VAR_7->dma_tag, VAR_9->dma_map, VAR_1);
 return (0);

use_spare:

 VAR_11 = VAR_9->dma_map;
 VAR_9->dma_map = VAR_7->spare.dma_map;
 VAR_7->spare.dma_map = VAR_11;


 VAR_9->mbuf = VAR_7->spare.mbuf;
 VAR_7->spare.mbuf = ((void*)0);





 for (VAR_15 = 0; VAR_15 != VAR_4; VAR_15++) {
  if (VAR_7->spare.segs[VAR_15].ds_len != 0) {
   VAR_8->data[VAR_15].byte_count = FUNC_3(VAR_7->spare.segs[VAR_15].ds_len);
   VAR_8->data[VAR_15].lkey = VAR_7->rx_mr_key_be;
   VAR_8->data[VAR_15].addr = FUNC_4(VAR_7->spare.segs[VAR_15].ds_addr);
  } else {
   VAR_8->data[VAR_15].byte_count = 0;
   VAR_8->data[VAR_15].lkey = FUNC_3(VAR_5);
   VAR_8->data[VAR_15].addr = 0;
  }
 }

 return (0);
}
