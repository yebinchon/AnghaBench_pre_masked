
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_6, u8 VAR_7)
{
 if (VAR_7 == VAR_3) {
  return 0;
 } else if (VAR_7 < VAR_1 || VAR_7 > VAR_2) {
  return -VAR_0;
 } else {
  while (VAR_7 != VAR_1 &&
         !(1 << (VAR_7 + VAR_4) &
    FUNC_0(VAR_6->mdev, VAR_5)))
   --VAR_7;
 }

 return VAR_7 + VAR_4;
}
