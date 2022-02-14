
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; int* qp0_proxy; int * qp0_qkey; } ;
struct mlx4_dev {TYPE_1__ caps; } ;



__attribute__((used)) static int FUNC_0(struct mlx4_dev *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->caps.num_ports; VAR_2++) {
  if (VAR_1 == VAR_0->caps.qp0_proxy[VAR_2])
   return !!VAR_0->caps.qp0_qkey[VAR_2];
 }
 return 0;
}
