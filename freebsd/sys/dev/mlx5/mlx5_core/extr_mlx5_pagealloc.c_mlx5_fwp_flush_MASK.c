
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_fw_page {unsigned int numpages; int dma_map; TYPE_2__* dev; } ;
struct TYPE_3__ {int dma_tag; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(struct mlx5_fw_page *VAR_1)
{
 unsigned VAR_2 = VAR_1->numpages;

 while (VAR_2--)
  FUNC_0(VAR_1[VAR_2].dev->cmd.dma_tag, VAR_1[VAR_2].dma_map, VAR_0);
}
