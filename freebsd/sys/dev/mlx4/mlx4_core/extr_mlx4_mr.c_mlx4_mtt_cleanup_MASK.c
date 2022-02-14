
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_mtt {scalar_t__ order; int offset; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int ,scalar_t__) ;

void FUNC_1(struct mlx4_dev *VAR_0, struct mlx4_mtt *VAR_1)
{
 if (VAR_1->order < 0)
  return;

 FUNC_0(VAR_0, VAR_1->offset, VAR_1->order);
}
