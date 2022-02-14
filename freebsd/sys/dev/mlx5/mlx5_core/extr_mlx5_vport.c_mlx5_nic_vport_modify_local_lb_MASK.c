
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_local_lb_selection { ____Placeholder_mlx5_local_lb_selection } mlx5_local_lb_selection ;
struct TYPE_4__ {int disable_uc_local_lb; int disable_mc_local_lb; } ;
struct TYPE_3__ {int disable_uc_local_lb; int disable_mc_local_lb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_5 (int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct mlx5_core_dev *VAR_6,
       enum mlx5_local_lb_selection VAR_7,
       u8 VAR_8)
{
 void *VAR_9;
 int VAR_10 = FUNC_1(VAR_3);
 int VAR_11;

 VAR_9 = FUNC_5(VAR_10);
 if (!VAR_9) {
  FUNC_3(VAR_6, "failed to allocate inbox\n");
  return -VAR_0;
 }

 FUNC_0(VAR_3, VAR_9, VAR_5, 0);

 if (VAR_7 == VAR_1) {
  FUNC_0(VAR_3, VAR_9,
    VAR_2.disable_mc_local_lb, 1);
  FUNC_0(VAR_3, VAR_9,
    VAR_4.disable_mc_local_lb,
    VAR_8);
 } else {
  FUNC_0(VAR_3, VAR_9,
    VAR_2.disable_uc_local_lb, 1);
  FUNC_0(VAR_3, VAR_9,
    VAR_4.disable_uc_local_lb,
    VAR_8);
 }

 VAR_11 = FUNC_4(VAR_6, VAR_9, VAR_10);

 FUNC_2(VAR_9);
 return VAR_11;
}
