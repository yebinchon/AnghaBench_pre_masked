
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_channels; } ;
struct mlx5e_priv {int * channel; TYPE_1__ params; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int
FUNC_2(struct mlx5e_priv *VAR_2)
{
 int VAR_3;


 if (FUNC_1(VAR_1, &VAR_2->state) == 0)
  return (VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->params.num_channels; VAR_3++) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_2, &VAR_2->channel[VAR_3]);
  if (VAR_4)
   return (VAR_4);
 }
 return (0);
}
