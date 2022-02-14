
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_ports; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__* dev_vfs; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_3__ {scalar_t__ n_ports; scalar_t__ min_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 size_t FUNC_4 (struct mlx4_dev*,int) ;

struct mlx4_active_ports FUNC_5(struct mlx4_dev *VAR_1, int VAR_2)
{
 struct mlx4_active_ports VAR_3;
 int VAR_4;

 FUNC_2(VAR_3.ports, VAR_0);

 if (VAR_2 == 0) {
  FUNC_0(VAR_3.ports, VAR_1->caps.num_ports);
  return VAR_3;
 }

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_3;

 FUNC_1(VAR_3.ports, VAR_1->dev_vfs[VAR_4].min_port - 1,
     FUNC_3((int)VAR_1->dev_vfs[FUNC_4(VAR_1, VAR_2)].n_ports,
     VAR_1->caps.num_ports));

 return VAR_3;
}
