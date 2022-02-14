
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_caps {int arr_sz; int * caps; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static bool FUNC_1(struct mlx5_core_dev *VAR_0, struct node_caps *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->arr_sz; VAR_2++) {
  if (!FUNC_0(VAR_0, VAR_1->caps[VAR_2]))
   return 0;
 }
 return 1;
}
