
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_hal_eth_adapter {scalar_t__ rev_id; TYPE_2__* ec_regs_base; } ;
struct TYPE_3__ {int gpd_p8; int gpd_p7; int gpd_p6; int gpd_p5; int gpd_p4; int gpd_p3; int gpd_p2; int gpd_p1; } ;
struct TYPE_4__ {TYPE_1__ rfw_v3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int * VAR_10 ;
 int FUNC_1 (struct al_hal_eth_adapter*,int,int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_11)
{
 int VAR_12;
 FUNC_0((VAR_11->rev_id > VAR_0));
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p1,
   VAR_5);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p2,
   VAR_7);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p3,
   VAR_1);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p4,
   VAR_2);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p5,
   VAR_8);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p6,
   VAR_3);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p7,
   VAR_4);
 FUNC_2(&VAR_11->ec_regs_base->rfw_v3.gpd_p8,
   VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
  FUNC_1(VAR_11, VAR_12,
    &VAR_10[VAR_12]);
 return 0;
}
