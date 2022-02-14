
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int permanent_address; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,int *,int) ;
 int * FUNC_5 (int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

int FUNC_6(struct mlx5_core_dev *VAR_3,
         u16 VAR_4, u8 *VAR_5)
{
 u32 *VAR_6;
 int VAR_7 = FUNC_1(VAR_2);
 u8 *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_7);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_2, VAR_6,
    VAR_1.permanent_address);

 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_6, VAR_7);
 if (VAR_9)
  goto out;

 FUNC_2(VAR_5, &VAR_8[2]);

out:
 FUNC_3(VAR_6);
 return VAR_9;
}
