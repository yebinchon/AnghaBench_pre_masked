
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct al_hal_eth_adapter {TYPE_3__* mac_regs_base; int mac_mode; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {int pcs_data; int pcs_addr; } ;
struct TYPE_6__ {TYPE_1__ mac_10g; TYPE_2__ kr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct al_hal_eth_adapter *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1->mac_mode) || FUNC_1(VAR_1->mac_mode)) {
  FUNC_3(&VAR_1->mac_regs_base->kr.pcs_addr, VAR_0);
  FUNC_2(&VAR_1->mac_regs_base->kr.pcs_data);

  FUNC_2(&VAR_1->mac_regs_base->mac_10g.status);
 } else {
  VAR_2 = -1;
 }

 return VAR_2;
}
