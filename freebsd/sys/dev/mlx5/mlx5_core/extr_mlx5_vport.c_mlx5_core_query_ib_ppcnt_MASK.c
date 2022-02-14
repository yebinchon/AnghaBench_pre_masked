
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct mlx5_core_dev*,int *,size_t,void*,size_t,int ,int ,int ) ;
 int * FUNC_3 (size_t) ;
 int VAR_5 ;

int FUNC_4(struct mlx5_core_dev *VAR_6,
        u8 VAR_7, void *VAR_8, size_t VAR_9)
{
 u32 *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  return VAR_11;
 }

 FUNC_0(VAR_5, VAR_10, VAR_4, VAR_7);

 FUNC_0(VAR_5, VAR_10, VAR_3, VAR_1);
 VAR_11 = FUNC_2(VAR_6, VAR_10, VAR_9, VAR_8,
       VAR_9, VAR_2, 0, 0);

 FUNC_1(VAR_10);
 return VAR_11;
}
