
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
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,scalar_t__,int ) ;
 int FUNC_1 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;

void FUNC_3(struct mlx4_dev *VAR_5, u8 VAR_6, u16 VAR_7)
{
 u64 VAR_8 = 0;

 if (FUNC_2(VAR_5)) {
  (void) FUNC_1(VAR_5, VAR_7, &VAR_8,
        ((u32) VAR_6) << 8 | (u32) VAR_4,
        VAR_3,
        VAR_0, VAR_1,
        VAR_2);
  return;
 }
 FUNC_0(VAR_5, VAR_6, VAR_7);
}
