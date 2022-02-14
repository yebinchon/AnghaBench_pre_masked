
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_eq {size_t irqn; int buf; int eqn; } ;
struct TYPE_4__ {TYPE_1__* msix_arr; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_3__ {int vector; } ;


 int FUNC_0 (int ,struct mlx5_eq*) ;
 int FUNC_1 (struct mlx5_core_dev*,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ) ;

int FUNC_4(struct mlx5_core_dev *VAR_0, struct mlx5_eq *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->priv.msix_arr[VAR_1->irqn].vector, VAR_1);
 VAR_2 = FUNC_2(VAR_0, VAR_1->eqn);
 if (VAR_2)
  FUNC_3(VAR_0, "failed to destroy a previously created eq: eqn %d\n",
          VAR_1->eqn);
 FUNC_1(VAR_0, &VAR_1->buf);

 return VAR_2;
}
