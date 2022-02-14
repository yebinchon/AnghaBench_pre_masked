
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_en_priv {int tx_ring_num; int rx_ring_num; int stat_ctx; int * stat_sysctl; scalar_t__* rx_cq; TYPE_2__* prof; scalar_t__* rx_ring; scalar_t__* tx_cq; scalar_t__* tx_ring; TYPE_1__* dev; } ;
struct TYPE_4__ {int rx_ring_size; } ;
struct TYPE_3__ {int * rx_cpu_rmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_en_priv*,scalar_t__*) ;
 int FUNC_2 (struct mlx4_en_priv*,scalar_t__*,int ) ;
 int FUNC_3 (struct mlx4_en_priv*,scalar_t__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx4_en_priv *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->tx_ring_num; VAR_1++) {
  if (VAR_0->tx_ring && VAR_0->tx_ring[VAR_1])
   FUNC_3(VAR_0, &VAR_0->tx_ring[VAR_1]);
  if (VAR_0->tx_cq && VAR_0->tx_cq[VAR_1])
   FUNC_1(VAR_0, &VAR_0->tx_cq[VAR_1]);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_ring_num; VAR_1++) {
  if (VAR_0->rx_ring[VAR_1])
   FUNC_2(VAR_0, &VAR_0->rx_ring[VAR_1],
    VAR_0->prof->rx_ring_size);
  if (VAR_0->rx_cq[VAR_1])
   FUNC_1(VAR_0, &VAR_0->rx_cq[VAR_1]);
 }

 if (VAR_0->stat_sysctl != ((void*)0))
  FUNC_4(&VAR_0->stat_ctx);
}
