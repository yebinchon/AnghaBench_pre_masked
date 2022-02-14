
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rx_ring {int dma_tag; } ;
struct mlx4_en_rx_mbuf {int * mbuf; int dma_map; } ;
typedef int bus_dmamap_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mlx4_en_rx_ring *VAR_1, struct mlx4_en_rx_mbuf *VAR_2)
{
 bus_dmamap_t VAR_3 = VAR_2->dma_map;
 FUNC_0(VAR_1->dma_tag, VAR_3, VAR_0);
 FUNC_1(VAR_1->dma_tag, VAR_3);
 FUNC_2(VAR_2->mbuf);
 VAR_2->mbuf = ((void*)0);
}
