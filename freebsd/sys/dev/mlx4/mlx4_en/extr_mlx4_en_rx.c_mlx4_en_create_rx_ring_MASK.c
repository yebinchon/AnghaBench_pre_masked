
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_13__ {int dma_map; } ;
struct TYPE_12__ {int buf; } ;
struct TYPE_16__ {TYPE_3__ direct; } ;
struct TYPE_15__ {TYPE_7__ buf; } ;
struct mlx4_en_rx_ring {int size; int size_mask; int dma_tag; TYPE_5__* mbuf; TYPE_4__ spare; scalar_t__ buf_size; TYPE_6__ wqres; int buf; int log_stride; scalar_t__ cons; scalar_t__ prod; } ;
struct mlx4_en_rx_mbuf {int dummy; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; TYPE_2__* pdev; } ;
struct TYPE_14__ {int dma_map; } ;
struct TYPE_10__ {int bsddev; } ;
struct TYPE_11__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct mlx4_en_priv*,char*,TYPE_5__*,int) ;
 int FUNC_6 (struct mlx4_en_priv*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct mlx4_en_rx_ring*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,TYPE_6__*,scalar_t__,int) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (int ,TYPE_6__*,scalar_t__) ;
 int FUNC_13 (TYPE_5__*) ;

int FUNC_14(struct mlx4_en_priv *VAR_8,
      struct mlx4_en_rx_ring **VAR_9,
      u32 VAR_10, int VAR_11)
{
 struct mlx4_en_dev *VAR_12 = VAR_8->mdev;
 struct mlx4_en_rx_ring *VAR_13;
 int VAR_14;
 int VAR_15;
 uint32_t VAR_16;

        VAR_13 = FUNC_9(sizeof(struct mlx4_en_rx_ring), VAR_3);
        if (!VAR_13) {
                FUNC_6(VAR_8, "Failed to allocate RX ring structure\n");
                return -VAR_2;
        }


 if ((VAR_14 = -FUNC_0(
     FUNC_4(VAR_12->pdev->dev.bsddev),
     1,
     0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_4,
     VAR_5,
     VAR_4,
     0,
     ((void*)0), ((void*)0),
     &VAR_13->dma_tag))) {
  FUNC_6(VAR_8, "Failed to create DMA tag\n");
  goto err_ring;
 }

 VAR_13->prod = 0;
 VAR_13->cons = 0;
 VAR_13->size = VAR_10;
 VAR_13->size_mask = VAR_10 - 1;

 VAR_13->log_stride = FUNC_7(sizeof(struct mlx4_en_rx_desc));
 VAR_13->buf_size = (VAR_13->size * sizeof(struct mlx4_en_rx_desc)) + VAR_7;

 VAR_15 = VAR_10 * sizeof(struct mlx4_en_rx_mbuf);

        VAR_13->mbuf = FUNC_9(VAR_15, VAR_3);
        if (VAR_13->mbuf == ((void*)0)) {
                VAR_14 = -VAR_2;
                goto err_dma_tag;
        }

 VAR_14 = -FUNC_2(VAR_13->dma_tag, 0, &VAR_13->spare.dma_map);
 if (VAR_14 != 0)
  goto err_info;

 for (VAR_16 = 0; VAR_16 != VAR_10; VAR_16++) {
  VAR_14 = -FUNC_2(VAR_13->dma_tag, 0,
      &VAR_13->mbuf[VAR_16].dma_map);
  if (VAR_14 != 0) {
   while (VAR_16--)
    FUNC_3(VAR_13->dma_tag,
        VAR_13->mbuf[VAR_16].dma_map);
   goto err_info;
  }
 }
 FUNC_5(VAR_1, VAR_8, "Allocated MBUF ring at addr:%p size:%d\n",
   VAR_13->mbuf, VAR_15);

 VAR_14 = FUNC_10(VAR_12->dev, &VAR_13->wqres,
     VAR_13->buf_size, 2 * VAR_6);
 if (VAR_14)
  goto err_dma_map;

 VAR_14 = FUNC_11(&VAR_13->wqres.buf);
 if (VAR_14) {
  FUNC_6(VAR_8, "Failed to map RX buffer\n");
  goto err_hwq;
 }
 VAR_13->buf = VAR_13->wqres.buf.direct.buf;
 *VAR_9 = VAR_13;
 return 0;

err_hwq:
 FUNC_12(VAR_12->dev, &VAR_13->wqres, VAR_13->buf_size);
err_dma_map:
 for (VAR_16 = 0; VAR_16 != VAR_10; VAR_16++) {
  FUNC_3(VAR_13->dma_tag,
      VAR_13->mbuf[VAR_16].dma_map);
 }
 FUNC_3(VAR_13->dma_tag, VAR_13->spare.dma_map);
err_info:
 FUNC_13(VAR_13->mbuf);
err_dma_tag:
 FUNC_1(VAR_13->dma_tag);
err_ring:
 FUNC_8(VAR_13);
 return (VAR_14);
}
