
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_23__ {scalar_t__ map; int buf; } ;
struct TYPE_16__ {TYPE_6__ direct; } ;
struct TYPE_15__ {TYPE_11__ buf; } ;
struct TYPE_17__ {TYPE_7__* uar; } ;
struct TYPE_26__ {int event; } ;
struct TYPE_22__ {int m; } ;
struct TYPE_21__ {int m; } ;
struct mlx4_en_tx_ring {int size; int size_mask; int stride; int bf_enabled; int queue_index; int dma_tag; TYPE_8__* tx_info; int buf_size; TYPE_10__ wqres; int qpn; TYPE_13__ bf; TYPE_9__ qp; int buf; TYPE_5__ comp_lock; TYPE_4__ tx_lock; int inline_thold; } ;
struct mlx4_en_tx_info {int dummy; } ;
struct mlx4_en_priv {TYPE_3__* prof; struct mlx4_en_dev* mdev; } ;
struct TYPE_24__ {int map; } ;
struct mlx4_en_dev {int dev; int uar_map; TYPE_7__ priv_uar; TYPE_2__* pdev; } ;
struct TYPE_25__ {int dma_map; } ;
struct TYPE_20__ {int inline_thold; } ;
struct TYPE_18__ {int bsddev; } ;
struct TYPE_19__ {TYPE_1__ dev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_9 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_10 (struct mlx4_en_tx_ring*) ;
 void* FUNC_11 (int,int ) ;
 void* FUNC_12 (int,int ,int) ;
 int FUNC_13 (int ,TYPE_10__*,int ,int) ;
 int FUNC_14 (int ,TYPE_13__*,int) ;
 int FUNC_15 (TYPE_11__*) ;
 int VAR_13 ;
 int FUNC_16 (TYPE_11__*) ;
 int FUNC_17 (int ,TYPE_10__*,int ) ;
 int FUNC_18 (int ,int ,TYPE_9__*,int ) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (int ,int,int,int *,int ) ;
 int FUNC_21 (int *,char*,int *,int ) ;
 int FUNC_22 (TYPE_8__*) ;

int FUNC_23(struct mlx4_en_priv *VAR_14,
      struct mlx4_en_tx_ring **VAR_15, u32 VAR_16,
      u16 VAR_17, int VAR_18, int VAR_19)
{
 struct mlx4_en_dev *VAR_20 = VAR_14->mdev;
 struct mlx4_en_tx_ring *VAR_21;
 uint32_t VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_21 = FUNC_12(sizeof(struct mlx4_en_tx_ring), VAR_3, VAR_18);
 if (!VAR_21) {
  VAR_21 = FUNC_11(sizeof(struct mlx4_en_tx_ring), VAR_3);
  if (!VAR_21) {
   FUNC_9(VAR_14, "Failed allocating TX ring\n");
   return -VAR_2;
  }
 }


 if ((VAR_24 = -FUNC_3(
     FUNC_7(VAR_20->pdev->dev.bsddev),
     1,
     0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_9,
     VAR_7,
     VAR_8,
     0,
     ((void*)0), ((void*)0),
     &VAR_21->dma_tag)))
  goto done;

 VAR_21->size = VAR_16;
 VAR_21->size_mask = VAR_16 - 1;
 VAR_21->stride = VAR_17;
 VAR_21->inline_thold = FUNC_1(VAR_5, FUNC_2(VAR_14->prof->inline_thold, VAR_4));
 FUNC_21(&VAR_21->tx_lock.m, "mlx4 tx", ((void*)0), VAR_11);
 FUNC_21(&VAR_21->comp_lock.m, "mlx4 comp", ((void*)0), VAR_11);

 VAR_23 = VAR_16 * sizeof(struct mlx4_en_tx_info);
 VAR_21->tx_info = FUNC_12(VAR_23, VAR_3, VAR_18);
 if (!VAR_21->tx_info) {
  VAR_21->tx_info = FUNC_11(VAR_23, VAR_3);
  if (!VAR_21->tx_info) {
   VAR_24 = -VAR_2;
   goto err_ring;
  }
 }


 for (VAR_22 = 0; VAR_22 != VAR_16; VAR_22++) {
  VAR_24 = -FUNC_5(VAR_21->dma_tag, 0,
      &VAR_21->tx_info[VAR_22].dma_map);
  if (VAR_24 != 0) {
   while (VAR_22--) {
    FUNC_6(VAR_21->dma_tag,
        VAR_21->tx_info[VAR_22].dma_map);
   }
   goto err_info;
  }
 }

 FUNC_8(VAR_1, VAR_14, "Allocated tx_info ring at addr:%p size:%d\n",
   VAR_21->tx_info, VAR_23);

 VAR_21->buf_size = FUNC_0(VAR_16 * VAR_21->stride, VAR_6);


 VAR_24 = FUNC_13(VAR_20->dev, &VAR_21->wqres, VAR_21->buf_size,
     2 * VAR_12);
 if (VAR_24) {
  FUNC_9(VAR_14, "Failed allocating hwq resources\n");
  goto err_dma_map;
 }

 VAR_24 = FUNC_15(&VAR_21->wqres.buf);
 if (VAR_24) {
  FUNC_9(VAR_14, "Failed to map TX buffer\n");
  goto err_hwq_res;
 }

 VAR_21->buf = VAR_21->wqres.buf.direct.buf;

 FUNC_8(VAR_1, VAR_14, "Allocated TX ring (addr:%p) - buf:%p size:%d "
        "buf_size:%d dma:%llx\n", VAR_21, VAR_21->buf, VAR_21->size,
        VAR_21->buf_size, (unsigned long long) VAR_21->wqres.buf.direct.map);

 VAR_24 = FUNC_20(VAR_20->dev, 1, 1, &VAR_21->qpn,
        VAR_10);
 if (VAR_24) {
  FUNC_9(VAR_14, "failed reserving qp for TX ring\n");
  goto err_map;
 }

 VAR_24 = FUNC_18(VAR_20->dev, VAR_21->qpn, &VAR_21->qp, VAR_3);
 if (VAR_24) {
  FUNC_9(VAR_14, "Failed allocating qp %d\n", VAR_21->qpn);
  goto err_reserve;
 }
 VAR_21->qp.event = VAR_13;

 VAR_24 = FUNC_14(VAR_20->dev, &VAR_21->bf, VAR_18);
 if (VAR_24) {
  FUNC_8(VAR_1, VAR_14, "working without blueflame (%d)", VAR_24);
  VAR_21->bf.uar = &VAR_20->priv_uar;
  VAR_21->bf.uar->map = VAR_20->uar_map;
  VAR_21->bf_enabled = 0;
 } else
  VAR_21->bf_enabled = 1;
 VAR_21->queue_index = VAR_19;

 *VAR_15 = VAR_21;
 return 0;

err_reserve:
 FUNC_19(VAR_20->dev, VAR_21->qpn, 1);
err_map:
 FUNC_16(&VAR_21->wqres.buf);
err_hwq_res:
 FUNC_17(VAR_20->dev, &VAR_21->wqres, VAR_21->buf_size);
err_dma_map:
 for (VAR_22 = 0; VAR_22 != VAR_16; VAR_22++)
  FUNC_6(VAR_21->dma_tag, VAR_21->tx_info[VAR_22].dma_map);
err_info:
 FUNC_22(VAR_21->tx_info);
err_ring:
 FUNC_4(VAR_21->dma_tag);
done:
 FUNC_10(VAR_21);
 return VAR_24;
}
