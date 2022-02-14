
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,void*) ;
 int VAR_1 ;
 int FUNC_1 (void*,void*,int,int) ;
 int FUNC_2 (void*) ;
 void* VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int ) ;
 void* FUNC_5 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6(struct mlx5_core_dev *VAR_7, u32 VAR_8, u16 VAR_9)
{
 void *VAR_10;
 void *VAR_11;
 void *VAR_12;
 void *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_5(FUNC_2(VAR_3));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_2);
 VAR_13 = FUNC_0(VAR_3, VAR_10, VAR_13);
 VAR_12 = FUNC_0(VAR_11, VAR_11, VAR_12);

 FUNC_1(VAR_3, VAR_10, VAR_5, VAR_1);
 FUNC_1(VAR_3, VAR_10, VAR_8, VAR_8);
 FUNC_1(VAR_12, VAR_12, VAR_9, VAR_9);
 FUNC_1(VAR_4, VAR_13, VAR_9, 1);
 FUNC_1(VAR_11, VAR_11, VAR_6, VAR_1);

 VAR_14 = FUNC_4(VAR_7, VAR_10, FUNC_2(VAR_3));

 FUNC_3(VAR_10);

 return VAR_14;
}
