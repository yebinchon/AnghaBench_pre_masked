
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_3__* mac_regs_base; int mac_mode; } ;
struct TYPE_4__ {int cmd_cfg; } ;
struct TYPE_5__ {int cmd_cfg; } ;
struct TYPE_6__ {TYPE_1__ mac_10g; TYPE_2__ mac_1g; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct al_hal_eth_adapter*,int ) ;
 int FUNC_4 (struct al_hal_eth_adapter*,int ,int) ;
 int FUNC_5 (int *,int,int ) ;

int FUNC_6(struct al_hal_eth_adapter *VAR_7)
{
 if (FUNC_1(VAR_7->mac_mode))

  FUNC_5(&VAR_7->mac_regs_base->mac_1g.cmd_cfg,
    VAR_3 | VAR_2,
    0);
 else if (FUNC_0(VAR_7->mac_mode) || FUNC_2(VAR_7->mac_mode))

  FUNC_5(&VAR_7->mac_regs_base->mac_10g.cmd_cfg,
    VAR_1 | VAR_0,
    0);
 else {
  uint32_t VAR_8;

  VAR_8 = FUNC_3(VAR_7,
    VAR_4);

  VAR_8 &= ~(VAR_6 |
       VAR_5);

  FUNC_4(VAR_7,
    VAR_4,
    VAR_8);
 }

 return 0;
}
