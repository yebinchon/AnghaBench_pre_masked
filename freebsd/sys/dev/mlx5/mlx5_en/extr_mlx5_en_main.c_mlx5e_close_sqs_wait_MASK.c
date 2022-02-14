
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_channel {int * sq; TYPE_1__* priv; } ;
struct TYPE_2__ {int num_tc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_channel *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->priv->num_tc; VAR_1++)
  FUNC_0(&VAR_0->sq[VAR_1]);
}
