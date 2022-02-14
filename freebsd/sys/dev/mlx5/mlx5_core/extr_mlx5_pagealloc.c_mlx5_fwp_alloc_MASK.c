
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fw_page {unsigned int numpages; scalar_t__ load_done; int dma_map; int virt_addr; struct mlx5_core_dev* dev; } ;
struct TYPE_2__ {int dma_sx; int dma_tag; } ;
struct mlx5_core_dev {TYPE_1__ cmd; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ,int *,struct mlx5_fw_page*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct mlx5_fw_page*) ;
 struct mlx5_fw_page* FUNC_8 (int,int) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct mlx5_fw_page *
FUNC_11(struct mlx5_core_dev *VAR_7, gfp_t VAR_8, unsigned VAR_9)
{
 struct mlx5_fw_page *VAR_10;
 unsigned VAR_11;
 int VAR_12;


 if (VAR_9 == 0) {
  VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_8);
  if (VAR_10 != ((void*)0))
   VAR_10->dev = VAR_7;
  return (VAR_10);
 }


 if (VAR_8 & VAR_5)
  return (((void*)0));

 VAR_10 = FUNC_8(sizeof(*VAR_10) * VAR_9, VAR_8);


 FUNC_9(&VAR_7->cmd.dma_sx);

 for (VAR_11 = 0; VAR_11 != VAR_9; VAR_11++) {

  VAR_10[VAR_11].dev = VAR_7;

  VAR_10[VAR_11].numpages = VAR_9 - VAR_11;


  VAR_12 = FUNC_5(VAR_7->cmd.dma_tag, &VAR_10[VAR_11].virt_addr,
      VAR_1 | VAR_0, &VAR_10[VAR_11].dma_map);
  if (VAR_12 != 0)
   goto failure;


  FUNC_0(VAR_7);
  (void) FUNC_3(
      VAR_7->cmd.dma_tag, VAR_10[VAR_11].dma_map, VAR_10[VAR_11].virt_addr,
      VAR_2, &VAR_6,
      VAR_10 + VAR_11, VAR_1 | VAR_0);

  while (VAR_10[VAR_11].load_done == VAR_3)
   FUNC_2(VAR_7);
  FUNC_1(VAR_7);


  if (VAR_10[VAR_11].load_done != VAR_4) {
   FUNC_6(VAR_7->cmd.dma_tag, VAR_10[VAR_11].virt_addr,
       VAR_10[VAR_11].dma_map);
   goto failure;
  }
 }
 FUNC_10(&VAR_7->cmd.dma_sx);
 return (VAR_10);

failure:
 while (VAR_11--) {
  FUNC_4(VAR_7->cmd.dma_tag, VAR_10[VAR_11].dma_map);
  FUNC_6(VAR_7->cmd.dma_tag, VAR_10[VAR_11].virt_addr, VAR_10[VAR_11].dma_map);
 }
 FUNC_10(&VAR_7->cmd.dma_sx);
 FUNC_7(VAR_10);
 return (((void*)0));
}
