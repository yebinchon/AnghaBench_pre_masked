
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct mlx5_fw_page {int dma_addr; int func_id; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 struct mlx5_fw_page* FUNC_2 (struct mlx5_core_dev*,int ,int) ;
 int FUNC_3 (struct mlx5_fw_page*) ;
 int FUNC_4 (struct mlx5_fw_page*) ;
 int FUNC_5 (struct mlx5_core_dev*,struct mlx5_fw_page*) ;

__attribute__((used)) static int
FUNC_6(struct mlx5_core_dev *VAR_2, u64 *VAR_3, u16 VAR_4)
{
 struct mlx5_fw_page *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_1, 1);
 if (VAR_5 == ((void*)0))
  return (-VAR_0);

 VAR_5->func_id = VAR_4;

 FUNC_0(VAR_2);
 VAR_6 = FUNC_5(VAR_2, VAR_5);
 FUNC_1(VAR_2);

 if (VAR_6 != 0) {
  FUNC_3(VAR_5);
 } else {

  FUNC_4(VAR_5);


  *VAR_3 = VAR_5->dma_addr;
 }
 return (VAR_6);
}
