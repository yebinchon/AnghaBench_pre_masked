
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_channel_param {int sq; } ;
struct mlx5e_channel {int * sq; TYPE_1__* priv; } ;
struct TYPE_2__ {int num_tc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_channel*,int,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mlx5e_channel *VAR_0,
    struct mlx5e_channel_param *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->priv->num_tc; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, VAR_3, &VAR_1->sq, &VAR_0->sq[VAR_3]);
  if (VAR_2)
   goto err_close_sqs;
 }

 return (0);

err_close_sqs:
 for (VAR_3--; VAR_3 >= 0; VAR_3--)
  FUNC_0(&VAR_0->sq[VAR_3]);

 return (VAR_2);
}
