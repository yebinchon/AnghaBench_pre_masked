
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {unsigned int num_ports; } ;


 int FUNC_0 (struct mlx5_ib_dev*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ports; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
