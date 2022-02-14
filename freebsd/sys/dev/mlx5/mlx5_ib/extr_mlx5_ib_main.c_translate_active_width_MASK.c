
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mlx5_ib_dev*,char*,int) ;
 struct mlx5_ib_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_11, u8 VAR_12,
      u8 *VAR_13)
{
 struct mlx5_ib_dev *VAR_14 = FUNC_1(VAR_11);
 int VAR_15 = 0;

 if (VAR_12 & VAR_7) {
  *VAR_13 = VAR_2;
 } else if (VAR_12 & VAR_8) {
  *VAR_13 = VAR_3;
 } else if (VAR_12 & VAR_9) {
  *VAR_13 = VAR_4;
 } else if (VAR_12 & VAR_10) {
  *VAR_13 = VAR_5;
 } else if (VAR_12 & VAR_6) {
  *VAR_13 = VAR_1;
 } else {
  FUNC_0(VAR_14, "Invalid active_width %d\n",
       (int)VAR_12);
  VAR_15 = -VAR_0;
 }

 return VAR_15;
}
