
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ath_hal_enable_ani; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef int HAL_OPS_CONFIG ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;

void
FUNC_1(struct ath_hal *VAR_1, HAL_OPS_CONFIG *VAR_2)
{


 FUNC_0(&VAR_1->ah_config, VAR_2, sizeof(HAL_OPS_CONFIG));
 VAR_1->ah_config.ath_hal_enable_ani = VAR_0;
}
