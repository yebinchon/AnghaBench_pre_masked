
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_rx_ring {struct mlx4_en_rx_mbuf* mbuf; scalar_t__ buf; } ;
struct mlx4_en_rx_mbuf {int * mbuf; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct TYPE_2__ {int rx_alloc_failed; } ;
struct mlx4_en_priv {TYPE_1__ port_stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_en_rx_ring*,struct mlx4_en_rx_desc*,struct mlx4_en_rx_mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_rx_ring *VAR_2, int VAR_3)
{
 struct mlx4_en_rx_desc *VAR_4 =
     ((struct mlx4_en_rx_desc *)VAR_2->buf) + VAR_3;
 struct mlx4_en_rx_mbuf *VAR_5 = VAR_2->mbuf + VAR_3;

 VAR_5->mbuf = ((void*)0);

 if (FUNC_0(VAR_2, VAR_4, VAR_5)) {
  VAR_1->port_stats.rx_alloc_failed++;
  return (-VAR_0);
 }
 return (0);
}
