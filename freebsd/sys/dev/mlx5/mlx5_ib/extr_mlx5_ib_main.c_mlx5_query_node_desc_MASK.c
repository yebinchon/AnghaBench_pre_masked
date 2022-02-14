
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_reg_node_desc {int dummy; } ;
struct mlx5_ib_dev {int mdev; } ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_reg_node_desc*,int ,int) ;
 int FUNC_1 (int ,struct mlx5_reg_node_desc*,int,char*,int,int ,int ,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*) ;
 scalar_t__ FUNC_3 (struct mlx5_ib_dev*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_1, char *VAR_2)
{
 struct mlx5_reg_node_desc VAR_3;

 if (FUNC_3(VAR_1))
  return FUNC_2(VAR_1, VAR_2);

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 return FUNC_1(VAR_1->mdev, &VAR_3, sizeof(VAR_3), VAR_2,
        sizeof(struct mlx5_reg_node_desc),
        VAR_0, 0, 0);
}
