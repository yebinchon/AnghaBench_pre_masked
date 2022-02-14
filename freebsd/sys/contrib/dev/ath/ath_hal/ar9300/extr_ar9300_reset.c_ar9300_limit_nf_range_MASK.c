
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef scalar_t__ int16_t ;
struct TYPE_4__ {TYPE_1__* nfp; } ;
struct TYPE_3__ {scalar_t__ min; scalar_t__ nominal; scalar_t__ max; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;

__attribute__((used)) static int16_t FUNC_1(struct ath_hal *VAR_0, int16_t VAR_1)
{
    if (VAR_1 < FUNC_0(VAR_0)->nfp->min) {
        return FUNC_0(VAR_0)->nfp->nominal;
    } else if (VAR_1 > FUNC_0(VAR_0)->nfp->max) {
        return FUNC_0(VAR_0)->nfp->max;
    }
    return VAR_1;
}
