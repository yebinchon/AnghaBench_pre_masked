
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_context {int tot_uuars; int low_lat_uuars; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx5_context *VAR_1, int VAR_2)
{
 if (VAR_2 == 0 || VAR_0)
  return 0;

 if (VAR_2 >= (VAR_1->tot_uuars - VAR_1->low_lat_uuars) * 2)
  return 0;

 return 1;
}
