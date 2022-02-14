
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int counter_id; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct mlx5_core_dev *VAR_3, u16 VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_3, VAR_0) == 0)
  return 0;


 if (VAR_4 == 0)
  return 1;

 VAR_5 = FUNC_1(VAR_3, VAR_2);


 for (VAR_6 = 0; VAR_6 != VAR_5; VAR_6++) {
  if (FUNC_0(VAR_3, VAR_1[VAR_6].counter_id) ==
      VAR_4)
   return 1;
 }
 return 0;
}
