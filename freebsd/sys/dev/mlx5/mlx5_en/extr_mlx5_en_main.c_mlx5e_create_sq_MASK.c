
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx5e_sq_param {int wq; void* sqc; } ;
struct TYPE_9__ {int arg; int ctx; } ;
struct TYPE_10__ {int * db; } ;
struct mlx5e_sq {int bf_buf_size; int tc; int dma_tag; int uar; int wq_ctrl; TYPE_4__ stats; struct mlx5e_priv* priv; int ifp; int mkey_be; TYPE_5__ wq; } ;
struct TYPE_8__ {int key; } ;
struct mlx5e_priv {int sysctl_ifnet; int ifp; TYPE_3__ mr; struct mlx5_core_dev* mdev; } ;
struct mlx5e_channel {int ix; struct mlx5e_priv* priv; } ;
struct mlx5_core_dev {TYPE_2__* pdev; } ;
typedef int buffer ;
struct TYPE_6__ {int bsddev; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 size_t VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (struct mlx5_core_dev*,int *) ;
 int FUNC_8 (struct mlx5_core_dev*,int *) ;
 int FUNC_9 (struct mlx5_core_dev*,int *,void*,TYPE_5__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct mlx5e_sq*) ;
 int FUNC_12 (int *,int ,char*,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_13 (struct mlx5e_sq*) ;
 int FUNC_14 (char*,int,char*,int,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_15(struct mlx5e_channel *VAR_9,
    int VAR_10,
    struct mlx5e_sq_param *VAR_11,
    struct mlx5e_sq *VAR_12)
{
 struct mlx5e_priv *VAR_13 = VAR_9->priv;
 struct mlx5_core_dev *VAR_14 = VAR_13->mdev;
 char VAR_15[16];
 void *VAR_16 = VAR_11->sqc;
 void *VAR_17 = FUNC_0(VAR_16, VAR_16, VAR_8);
 int VAR_18;


 if ((VAR_18 = -FUNC_3(
     FUNC_5(VAR_14->pdev->dev.bsddev),
     1,
     0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_3,
     VAR_1,
     VAR_2,
     0,
     ((void*)0), ((void*)0),
     &VAR_12->dma_tag)))
  goto done;

 VAR_18 = FUNC_7(VAR_14, &VAR_12->uar);
 if (VAR_18)
  goto err_free_dma_tag;

 VAR_18 = FUNC_9(VAR_14, &VAR_11->wq, VAR_17, &VAR_12->wq,
     &VAR_12->wq_ctrl);
 if (VAR_18)
  goto err_unmap_free_uar;

 VAR_12->wq.db = &VAR_12->wq.db[VAR_5];
 VAR_12->bf_buf_size = (1 << FUNC_1(VAR_14, VAR_6)) / 2;

 VAR_18 = FUNC_11(VAR_12);
 if (VAR_18)
  goto err_sq_wq_destroy;

 VAR_12->mkey_be = FUNC_6(VAR_13->mr.key);
 VAR_12->ifp = VAR_13->ifp;
 VAR_12->priv = VAR_13;
 VAR_12->tc = VAR_10;

 FUNC_13(VAR_12);

 FUNC_14(VAR_15, sizeof(VAR_15), "txstat%dtc%d", VAR_9->ix, VAR_10);
 FUNC_12(&VAR_12->stats.ctx, FUNC_2(VAR_13->sysctl_ifnet),
     VAR_15, VAR_7, VAR_4,
     VAR_12->stats.arg);

 return (0);

err_sq_wq_destroy:
 FUNC_10(&VAR_12->wq_ctrl);

err_unmap_free_uar:
 FUNC_8(VAR_14, &VAR_12->uar);

err_free_dma_tag:
 FUNC_4(VAR_12->dma_tag);
done:
 return (VAR_18);
}
