
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx5e_priv {int num_tc; } ;
struct mlx5e_channel_param {int rq; int rx_cq; } ;
struct TYPE_6__ {int (* comp ) (TYPE_1__*) ;} ;
struct TYPE_8__ {TYPE_1__ mcq; } ;
struct TYPE_7__ {TYPE_3__ cq; } ;
struct mlx5e_channel {TYPE_2__ rq; int ix; int priv; TYPE_2__* sq; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mlx5e_channel*) ;
 int FUNC_3 (struct mlx5e_channel*) ;
 int FUNC_4 (int ,int *,TYPE_3__*,int *,int ) ;
 int FUNC_5 (struct mlx5e_channel*,int *,TYPE_2__*) ;
 int FUNC_6 (struct mlx5e_channel*,struct mlx5e_channel_param*) ;
 int FUNC_7 (struct mlx5e_channel*,struct mlx5e_channel_param*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(struct mlx5e_priv *VAR_3,
    struct mlx5e_channel_param *VAR_4,
    struct mlx5e_channel *VAR_5)
{
 int VAR_6, VAR_7;


 FUNC_0(&VAR_5->rq, VAR_0);
 for (VAR_6 = 0; VAR_6 != VAR_3->num_tc; VAR_6++)
  FUNC_0(&VAR_5->sq[VAR_6], VAR_2);


 VAR_7 = FUNC_7(VAR_5, VAR_4);
 if (VAR_7)
  goto err_free;


 VAR_7 = FUNC_4(VAR_5->priv, &VAR_4->rx_cq, &VAR_5->rq.cq,
     &VAR_1, VAR_5->ix);
 if (VAR_7)
  goto err_close_tx_cqs;

 VAR_7 = FUNC_6(VAR_5, VAR_4);
 if (VAR_7)
  goto err_close_rx_cq;

 VAR_7 = FUNC_5(VAR_5, &VAR_4->rq, &VAR_5->rq);
 if (VAR_7)
  goto err_close_sqs;


 VAR_5->rq.cq.mcq.comp(&VAR_5->rq.cq.mcq);

 return (0);

err_close_sqs:
 FUNC_2(VAR_5);

err_close_rx_cq:
 FUNC_1(&VAR_5->rq.cq);

err_close_tx_cqs:
 FUNC_3(VAR_5);

err_free:
 return (VAR_7);
}
