
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int m; } ;
struct TYPE_5__ {int m; } ;
struct TYPE_8__ {int buf; } ;
struct mlx4_en_tx_ring {size_t size; int dma_tag; TYPE_2__ comp_lock; TYPE_1__ tx_lock; TYPE_3__* tx_info; int buf_size; TYPE_4__ wqres; int qpn; int qp; int bf; scalar_t__ bf_enabled; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct TYPE_7__ {int dma_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct mlx4_en_priv*,char*,int ) ;
 int FUNC_3 (struct mlx4_en_tx_ring*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_4__*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;

void FUNC_12(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_tx_ring **VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1->mdev;
 struct mlx4_en_tx_ring *VAR_4 = *VAR_2;
 uint32_t VAR_5;
 FUNC_2(VAR_0, VAR_1, "Destroying tx ring, qpn: %d\n", VAR_4->qpn);

 if (VAR_4->bf_enabled)
  FUNC_4(VAR_3->dev, &VAR_4->bf);
 FUNC_9(VAR_3->dev, &VAR_4->qp);
 FUNC_7(VAR_3->dev, &VAR_4->qp);
 FUNC_8(VAR_1->mdev->dev, VAR_4->qpn, 1);
 FUNC_5(&VAR_4->wqres.buf);
 FUNC_6(VAR_3->dev, &VAR_4->wqres, VAR_4->buf_size);
 for (VAR_5 = 0; VAR_5 != VAR_4->size; VAR_5++)
  FUNC_1(VAR_4->dma_tag, VAR_4->tx_info[VAR_5].dma_map);
 FUNC_11(VAR_4->tx_info);
 FUNC_10(&VAR_4->tx_lock.m);
 FUNC_10(&VAR_4->comp_lock.m);
 FUNC_0(VAR_4->dma_tag);
 FUNC_3(VAR_4);
 *VAR_2 = ((void*)0);
}
