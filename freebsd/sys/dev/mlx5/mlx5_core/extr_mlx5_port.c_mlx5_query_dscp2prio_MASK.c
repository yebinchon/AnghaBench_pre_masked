
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,void*,int ,int) ;
 int FUNC_3 (int ) ;
 int * VAR_4 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int,void*,int,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_7(struct mlx5_core_dev *VAR_9, u8 *VAR_10)
{
 int VAR_11 = FUNC_3(VAR_8);
 void *VAR_12;
 void *VAR_13;
 void *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_14 = FUNC_5(VAR_11, VAR_1);
 VAR_13 = FUNC_5(VAR_11, VAR_1);
 if (!VAR_14 || !VAR_13) {
  VAR_15 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_8, VAR_14, VAR_5, 1);
 VAR_15 = FUNC_6(VAR_9, VAR_14, VAR_11, VAR_13, VAR_11, VAR_3, 0, 0);
 if (VAR_15)
  goto out;

 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  VAR_12 = FUNC_0(VAR_8, VAR_13, VAR_4[VAR_16]);
  VAR_10[VAR_16] = FUNC_1(VAR_7, VAR_12, VAR_6);
 }
out:
 FUNC_4(VAR_14);
 FUNC_4(VAR_13);
 return VAR_15;
}
