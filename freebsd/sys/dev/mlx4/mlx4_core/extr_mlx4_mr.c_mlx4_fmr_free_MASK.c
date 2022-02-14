
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct mlx4_fmr {TYPE_1__ mr; scalar_t__ maps; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,TYPE_1__*) ;

int FUNC_1(struct mlx4_dev *VAR_2, struct mlx4_fmr *VAR_3)
{
 int VAR_4;

 if (VAR_3->maps)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, &VAR_3->mr);
 if (VAR_4)
  return VAR_4;
 VAR_3->mr.enabled = VAR_1;

 return 0;
}
