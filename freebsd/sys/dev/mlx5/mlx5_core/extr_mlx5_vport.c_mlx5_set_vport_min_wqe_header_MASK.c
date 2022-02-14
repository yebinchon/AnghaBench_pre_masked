
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int min_wqe_inline_mode; } ;
struct TYPE_3__ {int min_wqe_inline_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int ) ;
 int * FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_5(struct mlx5_core_dev *VAR_6,
      u8 VAR_7, int VAR_8)
{
 u32 *VAR_9;
 u32 VAR_10 = FUNC_1(VAR_2);
 int VAR_11;

 VAR_9 = FUNC_4(VAR_10);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_9,
   VAR_1.min_wqe_inline_mode, 1);
 FUNC_0(VAR_2, VAR_9,
   VAR_3.min_wqe_inline_mode, VAR_8);
 FUNC_0(VAR_2, VAR_9, VAR_5, VAR_7);
 FUNC_0(VAR_2, VAR_9, VAR_4, 1);

 VAR_11 = FUNC_3(VAR_6, VAR_9, VAR_10);

 FUNC_2(VAR_9);
 return VAR_11;
}
