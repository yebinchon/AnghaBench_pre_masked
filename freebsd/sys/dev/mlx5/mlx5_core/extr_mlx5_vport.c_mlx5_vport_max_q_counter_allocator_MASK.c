
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;

__attribute__((used)) static u32 FUNC_2(struct mlx5_core_dev *VAR_2,
           int VAR_3)
{
 switch (VAR_3) {
 case 128:
  return (FUNC_0(VAR_2, VAR_1) -
   VAR_0);
 case 129:
  return VAR_0;
 default:
  FUNC_1(VAR_2, "Unknown Client: %d\n", VAR_3);
  return 0;
 }
}
