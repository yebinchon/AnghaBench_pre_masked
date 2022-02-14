
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_fpga_dma_buf {int dma_dir; TYPE_4__* sg; } ;
struct mlx5_fpga_conn {TYPE_3__* fdev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int size; int dma_addr; scalar_t__ data; } ;
struct TYPE_7__ {TYPE_2__* mdev; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx5_fpga_conn *VAR_0,
         struct mlx5_fpga_dma_buf *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = &VAR_0->fdev->mdev->pdev->dev;
 if (VAR_1->sg[1].data)
  FUNC_0(VAR_2, VAR_1->sg[1].dma_addr,
     VAR_1->sg[1].size, VAR_1->dma_dir);

 if (FUNC_1(VAR_1->sg[0].data))
  FUNC_0(VAR_2, VAR_1->sg[0].dma_addr,
     VAR_1->sg[0].size, VAR_1->dma_dir);
}
