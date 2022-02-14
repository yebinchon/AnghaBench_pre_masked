
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int buf; } ;
struct mlx5_buf {int page_list; int dma_tag; int dma_map; TYPE_1__ direct; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct mlx5_core_dev *VAR_0, struct mlx5_buf *VAR_1)
{

 FUNC_1(VAR_1->dma_tag, VAR_1->dma_map);
 FUNC_2(VAR_1->dma_tag, VAR_1->direct.buf, VAR_1->dma_map);
 FUNC_0(VAR_1->dma_tag);
 FUNC_3(VAR_1->page_list);
}
