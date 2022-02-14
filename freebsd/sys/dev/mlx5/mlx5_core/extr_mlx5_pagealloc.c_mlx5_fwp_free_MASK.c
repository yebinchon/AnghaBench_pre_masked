
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fw_page {unsigned int numpages; int dma_map; int virt_addr; struct mlx5_core_dev* dev; } ;
struct TYPE_2__ {int dma_tag; } ;
struct mlx5_core_dev {TYPE_1__ cmd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlx5_fw_page*) ;

void
FUNC_3(struct mlx5_fw_page *VAR_0)
{
 struct mlx5_core_dev *VAR_1;
 unsigned VAR_2;


 if (VAR_0 == ((void*)0))
  return;


 if (VAR_0->numpages == 0) {
  FUNC_2(VAR_0);
  return;
 }

 VAR_2 = VAR_0->numpages;
 VAR_1 = VAR_0->dev;

 while (VAR_2--) {
  FUNC_0(VAR_1->cmd.dma_tag, VAR_0[VAR_2].dma_map);
  FUNC_1(VAR_1->cmd.dma_tag, VAR_0[VAR_2].virt_addr, VAR_0[VAR_2].dma_map);
 }

 FUNC_2(VAR_0);
}
