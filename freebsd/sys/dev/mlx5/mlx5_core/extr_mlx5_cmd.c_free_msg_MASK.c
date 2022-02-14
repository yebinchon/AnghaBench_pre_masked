
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct mlx5_cmd_msg {TYPE_1__* cache; int list; } ;
struct TYPE_2__ {int lock; int head; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_cmd_msg*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_0, struct mlx5_cmd_msg *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->cache) {
  FUNC_2(&VAR_1->cache->lock, VAR_2);
  FUNC_0(&VAR_1->list, &VAR_1->cache->head);
  FUNC_3(&VAR_1->cache->lock, VAR_2);
 } else {
  FUNC_1(VAR_0, VAR_1);
 }
}
