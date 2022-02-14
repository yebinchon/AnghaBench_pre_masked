
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_roce_gid_table {TYPE_1__* roce_gids; int mutex; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {int raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx4_dev *VAR_2,
         struct mlx4_roce_gid_table *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->mutex);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_3->roce_gids[VAR_4].raw, 0, VAR_0);
}
