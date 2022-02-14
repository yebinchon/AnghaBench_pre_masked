
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vf_admin; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int num_slaves; } ;
struct TYPE_4__ {scalar_t__* enable_smi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3 == FUNC_0(VAR_2))
  return 1;

 if (VAR_3 < 1 || VAR_3 >= VAR_2->num_slaves ||
     VAR_4 < 1 || VAR_4 > VAR_0)
  return 0;

 return VAR_5->mfunc.master.vf_admin[VAR_3].enable_smi[VAR_4] ==
  VAR_1;
}
