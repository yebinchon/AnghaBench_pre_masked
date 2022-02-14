
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int last_reset_req; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static bool
FUNC_1(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_core_health *VAR_4 = &VAR_3->priv.health;
 unsigned int VAR_5;
 bool VAR_6;

 if (VAR_4->last_reset_req != 0) {
  VAR_5 = VAR_2 - VAR_4->last_reset_req;
  VAR_5 /= VAR_0;
  VAR_6 = VAR_5 >= VAR_1;
 } else {
  VAR_6 = 1;
 }





 VAR_4->last_reset_req = VAR_2 ? : -1;
 if (!VAR_6)
  FUNC_0(VAR_3,
      "Firmware reset elided due to auto-reset frequency threshold.\n");
 return (VAR_6);
}
