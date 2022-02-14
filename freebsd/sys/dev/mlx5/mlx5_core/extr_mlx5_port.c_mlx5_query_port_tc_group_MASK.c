
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 void* FUNC_0 (int ,int *,int ) ;
 size_t FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct mlx5_core_dev*,int *,int) ;
 int VAR_2 ;
 int * VAR_3 ;

int FUNC_4(struct mlx5_core_dev *VAR_4,
        u8 VAR_5, u8 *VAR_6)
{
 u32 VAR_7[FUNC_2(VAR_2)];
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_7, sizeof(VAR_7));
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_0(VAR_2, VAR_7,
        VAR_3[VAR_5]);

 *VAR_6 = FUNC_1(VAR_0, VAR_8,
        VAR_1);

 return 0;
}
