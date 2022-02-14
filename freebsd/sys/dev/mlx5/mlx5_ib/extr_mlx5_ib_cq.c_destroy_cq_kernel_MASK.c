
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_cq {int db; int buf; } ;


 int FUNC_0 (struct mlx5_ib_dev*,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_cq *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->buf);
 FUNC_1(VAR_0->mdev, &VAR_1->db);
}
