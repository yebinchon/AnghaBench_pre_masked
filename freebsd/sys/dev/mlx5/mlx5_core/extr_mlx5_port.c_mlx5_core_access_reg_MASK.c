
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int * FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_7(struct mlx5_core_dev *VAR_9, void *VAR_10,
    int VAR_11, void *VAR_12, int VAR_13,
    u16 VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17 = FUNC_2(VAR_3) + VAR_13;
 int VAR_18 = FUNC_2(VAR_2) + VAR_11;
 int VAR_19 = -VAR_0;
 u32 *VAR_20 = ((void*)0);
 u32 *VAR_21 = ((void*)0);
 void *VAR_22;

 VAR_21 = FUNC_6(VAR_18);
 VAR_20 = FUNC_6(VAR_17);
 if (!VAR_21 || !VAR_20)
  goto out;

 VAR_22 = FUNC_0(VAR_2, VAR_21, VAR_7);
 FUNC_4(VAR_22, VAR_10, VAR_11);

 FUNC_1(VAR_2, VAR_21, VAR_6, VAR_1);
 FUNC_1(VAR_2, VAR_21, VAR_5, !VAR_16);
 FUNC_1(VAR_2, VAR_21, VAR_4, VAR_15);
 FUNC_1(VAR_2, VAR_21, VAR_8, VAR_14);

 VAR_19 = FUNC_5(VAR_9, VAR_21, VAR_18, VAR_20, VAR_17);
 if (VAR_19)
  goto out;
 VAR_22 = FUNC_0(VAR_3, VAR_20, VAR_7);
 FUNC_4(VAR_12, VAR_22, VAR_13);

out:
 FUNC_3(VAR_20);
 FUNC_3(VAR_21);
 return VAR_19;
}
