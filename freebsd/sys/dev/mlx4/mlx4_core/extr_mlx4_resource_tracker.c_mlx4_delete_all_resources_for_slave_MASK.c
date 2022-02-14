
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* slave_list; } ;
struct TYPE_6__ {TYPE_1__ res_tracker; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_8__ {int mutex; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx4_dev*,int) ;
 int FUNC_5 (struct mlx4_dev*,int) ;
 int FUNC_6 (struct mlx4_dev*,int) ;
 int FUNC_7 (struct mlx4_dev*,int) ;
 int FUNC_8 (struct mlx4_dev*,int) ;
 int FUNC_9 (struct mlx4_dev*,int) ;
 int FUNC_10 (struct mlx4_dev*,int) ;
 int FUNC_11 (struct mlx4_dev*,int) ;
 int FUNC_12 (struct mlx4_dev*,int) ;
 int FUNC_13 (struct mlx4_dev*,int) ;
 int FUNC_14 (struct mlx4_dev*,int) ;

void FUNC_15(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(&VAR_2->mfunc.master.res_tracker.slave_list[VAR_1].mutex);
 FUNC_13(VAR_0, VAR_1);
 FUNC_8(VAR_0, VAR_1);
 FUNC_7(VAR_0, VAR_1);
 FUNC_11(VAR_0, VAR_1);
 FUNC_12(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 FUNC_9(VAR_0, VAR_1);
 FUNC_6(VAR_0, VAR_1);
 FUNC_10(VAR_0, VAR_1);
 FUNC_4(VAR_0, VAR_1);
 FUNC_14(VAR_0, VAR_1);
 FUNC_3(&VAR_2->mfunc.master.res_tracker.slave_list[VAR_1].mutex);
}
