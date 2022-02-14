
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int qkey_violation_counter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int *,int) ;
 int * FUNC_4 (int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

int FUNC_5(struct mlx5_core_dev *VAR_3,
     u16 *VAR_4)
{
 u32 *VAR_5;
 int VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 VAR_5 = FUNC_4(VAR_6);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, 0, VAR_5, VAR_6);
 if (VAR_7)
  goto out;

 *VAR_4 = FUNC_0(VAR_2, VAR_5,
    VAR_1.qkey_violation_counter);

out:
 FUNC_2(VAR_5);
 return VAR_7;
}
