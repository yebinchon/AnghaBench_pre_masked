
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct mlx4_priv {scalar_t__ clock_mapping; } ;
struct mlx4_dev {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

s64 FUNC_3(struct mlx4_dev *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 s64 VAR_6;
 int VAR_7;
 struct mlx4_priv *VAR_8 = FUNC_0(VAR_2);

 if (!VAR_8->clock_mapping)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  VAR_3 = FUNC_2(FUNC_1(VAR_8->clock_mapping));
  VAR_4 = FUNC_2(FUNC_1(VAR_8->clock_mapping + 4));
  VAR_5 = FUNC_2(FUNC_1(VAR_8->clock_mapping));
  if (VAR_3 == VAR_5)
   break;
 }

 VAR_6 = (u64) VAR_3 << 32 | (u64) VAR_4;

 return VAR_6 & VAR_0;
}
