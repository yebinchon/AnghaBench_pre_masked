
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_channel {TYPE_2__* sq; TYPE_1__* priv; } ;
struct TYPE_4__ {int cq; } ;
struct TYPE_3__ {int num_tc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_channel *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->priv->num_tc; VAR_1++)
  FUNC_0(&VAR_0->sq[VAR_1].cq);
}
