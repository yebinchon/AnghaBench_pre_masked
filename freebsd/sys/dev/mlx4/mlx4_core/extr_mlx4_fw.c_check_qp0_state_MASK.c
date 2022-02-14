
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* qp0_state; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ qp0_active; scalar_t__ proxy_qp0_active; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->mfunc.master.qp0_state[VAR_2].proxy_qp0_active &&
     VAR_3->mfunc.master.qp0_state[VAR_2].qp0_active)
  return 1;
 return 0;
}
