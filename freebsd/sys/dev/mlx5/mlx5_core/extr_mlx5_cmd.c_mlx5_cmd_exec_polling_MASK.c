
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,void*,int,void*,int,int *,int *,int) ;
 int FUNC_1 (struct mlx5_core_dev*,void*,void*) ;

int FUNC_2(struct mlx5_core_dev *VAR_0, void *VAR_1, int VAR_2,
     void *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), ((void*)0), 1);
 return VAR_5 ? : FUNC_1(VAR_0, VAR_1, VAR_3);
}
