
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ currGain; scalar_t__ loTrig; scalar_t__ hiTrig; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ GAIN_VALUES ;



__attribute__((used)) static HAL_BOOL
FUNC_0(struct ath_hal *VAR_0, const GAIN_VALUES *VAR_1)
{
 return (VAR_1->currGain <= VAR_1->loTrig || VAR_1->currGain >= VAR_1->hiTrig);
}
