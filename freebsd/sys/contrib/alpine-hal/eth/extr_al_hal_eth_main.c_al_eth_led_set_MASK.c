
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* mac_regs_base; } ;
typedef scalar_t__ al_bool ;
struct TYPE_3__ {int led_cfg; } ;
struct TYPE_4__ {TYPE_1__ gen; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_10, al_bool VAR_11)
{
 uint32_t VAR_12 = 0;
 uint32_t VAR_13 = VAR_6;

 if (VAR_11)
  VAR_13 = VAR_7;

 FUNC_0(VAR_12, VAR_8,
    VAR_9, VAR_13);

 FUNC_0(VAR_12, VAR_3,
    VAR_4,
    VAR_5);

 FUNC_0(VAR_12, VAR_0,
    VAR_1,
    VAR_2);

 FUNC_1(&VAR_10->mac_regs_base->gen.led_cfg, VAR_12);

 return 0;
}
