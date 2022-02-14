
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ qpn; } ;
struct mlx4_ib_qp {TYPE_1__ mqp; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct TYPE_5__ {scalar_t__ base_tunnel_sqpn; } ;
struct TYPE_6__ {TYPE_2__ phys_caps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_ib_dev *VAR_1, struct mlx4_ib_qp *VAR_2)
{
 if (!FUNC_0(VAR_1->dev))
  return 0;

 return VAR_2->mqp.qpn >= VAR_1->dev->phys_caps.base_tunnel_sqpn &&
        VAR_2->mqp.qpn < VAR_1->dev->phys_caps.base_tunnel_sqpn +
  8 * VAR_0;
}
