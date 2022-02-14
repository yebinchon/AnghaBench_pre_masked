
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; int mac_mode; } ;
struct TYPE_3__ {int en_ext; } ;
struct TYPE_4__ {TYPE_1__ gen; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_2)
{
 uint32_t VAR_3;






 VAR_3 = FUNC_1(&VAR_2->ec_regs_base->gen.en_ext);
 if (FUNC_0(VAR_2->mac_mode))
  VAR_3 &= ~VAR_0;
 else
  VAR_3 |= VAR_0;




 VAR_3 |= VAR_1;
 FUNC_2(&VAR_2->ec_regs_base->gen.en_ext, VAR_3);






 return 0;
}
