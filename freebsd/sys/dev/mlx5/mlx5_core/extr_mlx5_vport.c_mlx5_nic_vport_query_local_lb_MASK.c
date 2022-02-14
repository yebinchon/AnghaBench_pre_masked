
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_local_lb_selection { ____Placeholder_mlx5_local_lb_selection } mlx5_local_lb_selection ;
struct TYPE_2__ {int disable_uc_local_lb; int disable_mc_local_lb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,void*,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

int FUNC_5(struct mlx5_core_dev *VAR_5,
      enum mlx5_local_lb_selection VAR_6,
      u8 *VAR_7)
{
 void *VAR_8;
 int VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 VAR_8 = FUNC_3(VAR_9, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_5, 0, VAR_8, VAR_9);
 if (VAR_10)
  goto done;

 if (VAR_6 == VAR_2)
  *VAR_7 = FUNC_0(VAR_4, VAR_8,
      VAR_3.disable_mc_local_lb);
 else
  *VAR_7 = FUNC_0(VAR_4, VAR_8,
      VAR_3.disable_uc_local_lb);

done:
 FUNC_2(VAR_8);
 return VAR_10;
}
