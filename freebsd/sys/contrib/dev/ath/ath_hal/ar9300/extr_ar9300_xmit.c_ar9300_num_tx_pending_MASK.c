
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_8__ {TYPE_1__* ah_txq; } ;
struct TYPE_6__ {int halTotalQueues; } ;
struct TYPE_7__ {TYPE_2__ ah_caps; } ;
struct TYPE_5__ {scalar_t__ tqi_type; } ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_hal*,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;

u_int32_t
FUNC_7(struct ath_hal *VAR_6, u_int VAR_7)
{
    u_int32_t VAR_8;

    FUNC_3(VAR_7 < FUNC_1(VAR_6)->ah_caps.halTotalQueues);

    VAR_8 = FUNC_5(VAR_6, FUNC_2(VAR_7)) & VAR_1;
    if (VAR_8 == 0) {





        if (FUNC_5(VAR_6, VAR_2) & (1 << VAR_7)) {
            VAR_8 = 1;
        }
    }
    FUNC_3((VAR_8 == 0) ||
        (FUNC_0(VAR_6)->ah_txq[VAR_7].tqi_type != VAR_5));

    return VAR_8;
}
