
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_core_dev *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 256: return 1;
 case 512: return 2;
 case 1024: return 3;
 case 2048: return 4;
 case 4096: return 5;
 default:
  FUNC_0(VAR_0, "invalid mtu\n");
  return -1;
 }
}
