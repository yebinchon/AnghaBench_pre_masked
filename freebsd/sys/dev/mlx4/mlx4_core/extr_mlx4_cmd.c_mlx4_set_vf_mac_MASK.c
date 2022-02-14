
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlx4_vport_state {scalar_t__ mac; } ;
struct TYPE_5__ {TYPE_1__* vf_admin; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*,char*,int,int,unsigned long long) ;
 int FUNC_2 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;

int FUNC_5(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4, u64 VAR_5)
{
 struct mlx4_priv *VAR_6 = FUNC_3(VAR_2);
 struct mlx4_vport_state *VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_2, VAR_4);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_2, VAR_8, VAR_3);
 VAR_7 = &VAR_6->mfunc.master.vf_admin[VAR_8].vport[VAR_3];
 VAR_7->mac = VAR_5;
 FUNC_1(VAR_2, "default mac on vf %d port %d to %llX will take effect only after vf restart\n",
    VAR_4, VAR_3, (unsigned long long)VAR_7->mac);
 return 0;
}
