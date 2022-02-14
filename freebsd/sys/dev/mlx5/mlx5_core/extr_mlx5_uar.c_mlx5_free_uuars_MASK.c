
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_uuar_info {int num_uars; TYPE_1__* uars; TYPE_1__* bfs; TYPE_1__* bitmap; TYPE_1__* count; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int index; int map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;

int FUNC_3(struct mlx5_core_dev *VAR_0, struct mlx5_uuar_info *VAR_1)
{
 int VAR_2 = VAR_1->num_uars;

 for (VAR_2--; VAR_2 >= 0; VAR_2--) {
  FUNC_0(VAR_1->uars[VAR_2].map);
  FUNC_2(VAR_0, VAR_1->uars[VAR_2].index);
 }

 FUNC_1(VAR_1->count);
 FUNC_1(VAR_1->bitmap);
 FUNC_1(VAR_1->bfs);
 FUNC_1(VAR_1->uars);

 return 0;
}
