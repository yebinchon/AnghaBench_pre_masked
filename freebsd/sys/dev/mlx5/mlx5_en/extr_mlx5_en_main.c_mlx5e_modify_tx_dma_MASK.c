
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int num_channels; } ;
struct mlx5e_priv {int * channel; TYPE_1__ params; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void
FUNC_3(struct mlx5e_priv *VAR_1, uint8_t VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_0, &VAR_1->state) == 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->params.num_channels; VAR_3++) {
  if (VAR_2)
   FUNC_0(&VAR_1->channel[VAR_3]);
  else
   FUNC_1(&VAR_1->channel[VAR_3]);
 }
}
