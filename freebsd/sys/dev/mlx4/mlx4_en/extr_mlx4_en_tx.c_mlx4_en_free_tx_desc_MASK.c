
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mlx4_en_tx_ring {int dma_tag; struct mlx4_en_tx_info* tx_info; } ;
struct mlx4_en_tx_info {size_t nr_txbb; int dma_map; struct mbuf* mb; } ;
struct mlx4_en_priv {int dummy; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static u32
FUNC_3(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_tx_ring *VAR_2, u32 VAR_3)
{
 struct mlx4_en_tx_info *VAR_4;
 struct mbuf *VAR_5;

 VAR_4 = &VAR_2->tx_info[VAR_3];
 VAR_5 = VAR_4->mb;

 if (VAR_5 == ((void*)0))
  goto done;

 FUNC_0(VAR_2->dma_tag, VAR_4->dma_map,
     VAR_0);
 FUNC_1(VAR_2->dma_tag, VAR_4->dma_map);

        FUNC_2(VAR_5);
done:
 return (VAR_4->nr_txbb);
}
