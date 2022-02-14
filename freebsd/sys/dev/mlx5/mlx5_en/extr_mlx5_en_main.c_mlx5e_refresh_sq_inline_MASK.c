
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_channels; } ;
struct mlx5e_priv {int * channel; TYPE_1__ params; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void
FUNC_2(struct mlx5e_priv *VAR_1)
{
 int VAR_2;


 if (FUNC_1(VAR_0, &VAR_1->state) == 0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->params.num_channels; VAR_2++)
  FUNC_0(VAR_1, &VAR_1->channel[VAR_2]);
}
