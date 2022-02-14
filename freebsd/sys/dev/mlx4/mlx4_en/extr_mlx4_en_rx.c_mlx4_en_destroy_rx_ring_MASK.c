
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_4__ {int dma_map; int * mbuf; } ;
struct TYPE_6__ {int buf; } ;
struct mlx4_en_rx_ring {int dma_tag; TYPE_2__* mbuf; TYPE_1__ spare; TYPE_3__ wqres; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct TYPE_5__ {int dma_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx4_en_rx_ring*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;

void FUNC_10(struct mlx4_en_priv *VAR_2,
        struct mlx4_en_rx_ring **VAR_3,
        u32 VAR_4)
{
 struct mlx4_en_dev *VAR_5 = VAR_2->mdev;
 struct mlx4_en_rx_ring *VAR_6 = *VAR_3;
 uint32_t VAR_7;

 FUNC_7(&VAR_6->wqres.buf);
 FUNC_8(VAR_5->dev, &VAR_6->wqres, VAR_4 * sizeof(struct mlx4_en_rx_desc) + VAR_1);
 for (VAR_7 = 0; VAR_7 != VAR_4; VAR_7++)
  FUNC_1(VAR_6->dma_tag, VAR_6->mbuf[VAR_7].dma_map);

 if (VAR_6->spare.mbuf != ((void*)0)) {
  FUNC_2(VAR_6->dma_tag, VAR_6->spare.dma_map,
      VAR_0);
  FUNC_3(VAR_6->dma_tag, VAR_6->spare.dma_map);
  FUNC_5(VAR_6->spare.mbuf);
 }
 FUNC_1(VAR_6->dma_tag, VAR_6->spare.dma_map);
 FUNC_9(VAR_6->mbuf);
 FUNC_0(VAR_6->dma_tag);
 FUNC_4(VAR_6);
 *VAR_3 = ((void*)0);



}
