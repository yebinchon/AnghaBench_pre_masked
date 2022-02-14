
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef size_t u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ah_txq; } ;
struct TYPE_5__ {size_t halTotalQueues; } ;
struct TYPE_7__ {TYPE_1__ ah_caps; } ;
struct TYPE_6__ {scalar_t__ tqi_type; } ;
typedef int HAL_BOOL ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct ath_hal*,int ,scalar_t__) ;

HAL_BOOL
FUNC_5(struct ath_hal *VAR_2, u_int VAR_3, u_int32_t VAR_4)
{
    FUNC_3(VAR_3 < FUNC_1(VAR_2)->ah_caps.halTotalQueues);
    FUNC_3(FUNC_0(VAR_2)->ah_txq[VAR_3].tqi_type != VAR_1);
    FUNC_3(VAR_4 != 0);

    FUNC_4(VAR_2, FUNC_2(VAR_3), VAR_4);

    return VAR_0;
}
