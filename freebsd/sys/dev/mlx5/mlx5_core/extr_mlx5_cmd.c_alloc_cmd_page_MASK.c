
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {TYPE_2__* pdev; } ;
struct mlx5_cmd {int dma_sx; int dma_mtx; int dma_cv; int dma_tag; int * cmd_page; int cmd_buf; int dma; } ;
struct TYPE_3__ {int bsddev; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (struct mlx5_core_dev*,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static int
FUNC_12(struct mlx5_core_dev *VAR_5, struct mlx5_cmd *VAR_6)
{
 int VAR_7;

 FUNC_11(&VAR_6->dma_sx, "MLX5-DMA-SX");
 FUNC_9(&VAR_6->dma_mtx, "MLX5-DMA-MTX", ((void*)0), VAR_4);
 FUNC_4(&VAR_6->dma_cv, "MLX5-DMA-CV");





 VAR_7 = -FUNC_0(
     FUNC_2(VAR_5->pdev->dev.bsddev),
     VAR_3,
     0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_3,
     1,
     VAR_3,
     0,
     ((void*)0), ((void*)0),
     &VAR_6->dma_tag);
 if (VAR_7 != 0)
  goto failure_destroy_sx;

 VAR_6->cmd_page = FUNC_5(VAR_5, VAR_2, 1);
 if (VAR_6->cmd_page == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto failure_alloc_page;
 }
 VAR_6->dma = FUNC_6(VAR_6->cmd_page, 0);
 VAR_6->cmd_buf = FUNC_7(VAR_6->cmd_page, 0);
 return (0);

failure_alloc_page:
 FUNC_1(VAR_6->dma_tag);

failure_destroy_sx:
 FUNC_3(&VAR_6->dma_cv);
 FUNC_8(&VAR_6->dma_mtx);
 FUNC_10(&VAR_6->dma_sx);
 return (VAR_7);
}
