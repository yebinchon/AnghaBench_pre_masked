
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; int * port_type; int * port_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;



__attribute__((used)) static void FUNC_0(struct mlx4_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 <= VAR_0->caps.num_ports; ++VAR_1)
  VAR_0->caps.port_mask[VAR_1] = VAR_0->caps.port_type[VAR_1];
}
