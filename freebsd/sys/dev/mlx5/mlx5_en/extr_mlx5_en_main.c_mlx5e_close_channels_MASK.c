
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_channels; } ;
struct mlx5e_priv {int * channel; TYPE_1__ params; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mlx5e_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->params.num_channels; VAR_1++)
  FUNC_0(&VAR_0->channel[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->params.num_channels; VAR_1++)
  FUNC_1(&VAR_0->channel[VAR_1]);
}
