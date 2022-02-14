
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_channels; } ;
struct mlx5e_priv {TYPE_2__* channel; TYPE_1__ params; } ;
struct mlx5e_channel_param {int dummy; } ;
struct TYPE_6__ {int rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_channel_param*,int ) ;
 struct mlx5e_channel_param* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_channel_param*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct mlx5e_priv*,struct mlx5e_channel_param*,TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct mlx5e_priv *VAR_2)
{
 struct mlx5e_channel_param *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0, VAR_1);

 FUNC_2(VAR_2, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2->params.num_channels; VAR_5++) {
  VAR_4 = FUNC_5(VAR_2, VAR_3, &VAR_2->channel[VAR_5]);
  if (VAR_4)
   goto err_close_channels;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->params.num_channels; VAR_6++) {
  VAR_4 = FUNC_6(&VAR_2->channel[VAR_6].rq);
  if (VAR_4)
   goto err_close_channels;
 }
 FUNC_0(VAR_3, VAR_0);
 return (0);

err_close_channels:
 while (VAR_5--) {
  FUNC_3(&VAR_2->channel[VAR_5]);
  FUNC_4(&VAR_2->channel[VAR_5]);
 }
 FUNC_0(VAR_3, VAR_0);
 return (VAR_4);
}
