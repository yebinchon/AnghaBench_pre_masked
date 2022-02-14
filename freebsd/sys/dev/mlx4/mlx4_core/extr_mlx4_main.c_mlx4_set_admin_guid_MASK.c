
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* vf_admin; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_4__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
typedef int __be64 ;
struct TYPE_6__ {TYPE_1__* vport; } ;
struct TYPE_5__ {int guid; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;

void FUNC_1(struct mlx4_dev *VAR_0, __be64 VAR_1, int VAR_2, int VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_0(VAR_0);

 VAR_4->mfunc.master.vf_admin[VAR_2].vport[VAR_3].guid = VAR_1;
}
