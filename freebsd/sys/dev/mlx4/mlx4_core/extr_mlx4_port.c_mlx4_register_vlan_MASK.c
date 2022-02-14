
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mlx4_dev*,scalar_t__,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int,int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;

int FUNC_4(struct mlx4_dev *VAR_6, u8 VAR_7, u16 VAR_8, int *VAR_9)
{
 u64 VAR_10 = 0;
 int VAR_11;

 if (VAR_8 > 4095)
  return -VAR_0;

 if (FUNC_3(VAR_6)) {
  VAR_11 = FUNC_2(VAR_6, VAR_8, &VAR_10,
       ((u32) VAR_7) << 8 | (u32) VAR_5,
       VAR_4, VAR_1,
       VAR_2, VAR_3);
  if (!VAR_11)
   *VAR_9 = FUNC_1(&VAR_10);

  return VAR_11;
 }
 return FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
}
