
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int start; scalar_t__ count; int ida; } ;
struct TYPE_4__ {TYPE_1__ reserved_gids; } ;
struct mlx5_core_dev {TYPE_2__ roce; } ;


 unsigned int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct mlx5_core_dev *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1, VAR_0);

 FUNC_1(&VAR_1->roce.reserved_gids.ida);
 VAR_1->roce.reserved_gids.start = VAR_2;
 VAR_1->roce.reserved_gids.count = 0;
}
