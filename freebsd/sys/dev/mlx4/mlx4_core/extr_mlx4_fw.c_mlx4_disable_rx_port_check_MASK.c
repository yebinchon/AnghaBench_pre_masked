
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
struct mlx4_config_dev {void* roce_flags; void* update_flags; } ;
typedef int config_dev ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_config_dev*,int ,int) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_config_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_2, bool VAR_3)
{
 struct mlx4_config_dev VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.update_flags = FUNC_0(VAR_1);
 if (VAR_3)
  VAR_4.roce_flags =
   FUNC_0(VAR_0);

 return FUNC_2(VAR_2, &VAR_4);
}
