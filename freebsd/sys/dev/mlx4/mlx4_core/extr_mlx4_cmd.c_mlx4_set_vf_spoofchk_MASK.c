
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_vport_state {int spoofchk; } ;
struct TYPE_6__ {TYPE_1__* vf_admin; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct TYPE_8__ {int flags2; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct TYPE_5__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;

int FUNC_4(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_2(VAR_3);
 struct mlx4_vport_state *VAR_8;
 int VAR_9;

 if ((!FUNC_1(VAR_3)) ||
     !(VAR_3->caps.flags2 & VAR_2))
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3, VAR_9, VAR_4);
 VAR_8 = &VAR_7->mfunc.master.vf_admin[VAR_9].vport[VAR_4];
 VAR_8->spoofchk = VAR_6;

 return 0;
}
