
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
typedef scalar_t__ al_bool ;
struct TYPE_3__ {int hdr_split; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_4, al_bool VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_1(&VAR_4->ec_regs_base->rfw.hdr_split);
 if (VAR_5 == VAR_0)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;

 FUNC_0(VAR_7, VAR_1, VAR_2, VAR_6);
 FUNC_2(&VAR_4->ec_regs_base->rfw.hdr_split, VAR_7);
 return 0;
}
