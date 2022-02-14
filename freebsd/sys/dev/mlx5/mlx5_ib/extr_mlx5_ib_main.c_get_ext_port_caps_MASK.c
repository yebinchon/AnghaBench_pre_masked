
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 <= FUNC_0(VAR_1->mdev, VAR_0); VAR_2++)
  FUNC_1(VAR_1, VAR_2);
}
