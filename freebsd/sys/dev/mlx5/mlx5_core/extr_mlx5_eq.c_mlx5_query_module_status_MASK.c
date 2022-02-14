
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {unsigned int* module_status; } ;


 int VAR_0 ;

unsigned int FUNC_0(struct mlx5_core_dev *VAR_1, int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return 0;
 return VAR_1->module_status[VAR_2];
}
