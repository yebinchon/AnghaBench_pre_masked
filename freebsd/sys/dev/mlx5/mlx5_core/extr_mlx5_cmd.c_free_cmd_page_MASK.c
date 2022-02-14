
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
struct mlx5_cmd {int dma_sx; int dma_mtx; int dma_cv; int dma_tag; int cmd_page; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct mlx5_core_dev *VAR_0, struct mlx5_cmd *VAR_1)
{

 FUNC_2(VAR_1->cmd_page);
 FUNC_0(VAR_1->dma_tag);
 FUNC_1(&VAR_1->dma_cv);
 FUNC_3(&VAR_1->dma_mtx);
 FUNC_4(&VAR_1->dma_sx);
}
