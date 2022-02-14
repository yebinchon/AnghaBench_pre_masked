
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_active_ports {int ports; } ;


 int FUNC_0 (int ,int ) ;
 struct mlx4_active_ports FUNC_1 (struct mlx4_dev*,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

int FUNC_3(struct mlx4_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct mlx4_active_ports VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_2(VAR_2 - 1, VAR_3.ports))
  return VAR_2 -
   FUNC_0(VAR_3.ports, VAR_0->caps.num_ports);

 return -1;
}
