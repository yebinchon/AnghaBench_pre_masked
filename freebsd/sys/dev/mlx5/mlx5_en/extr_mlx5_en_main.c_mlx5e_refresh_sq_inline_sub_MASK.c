
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int num_tc; } ;
struct mlx5e_channel {TYPE_1__* sq; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mlx5e_priv *VAR_0, struct mlx5e_channel *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 != VAR_0->num_tc; VAR_2++) {
  FUNC_1(&VAR_1->sq[VAR_2].lock);
  FUNC_0(&VAR_1->sq[VAR_2]);
  FUNC_2(&VAR_1->sq[VAR_2].lock);
 }
}
