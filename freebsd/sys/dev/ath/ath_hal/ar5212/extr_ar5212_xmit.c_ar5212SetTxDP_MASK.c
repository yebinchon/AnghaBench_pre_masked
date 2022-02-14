
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
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
 int VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;

HAL_BOOL
FUNC_6(struct ath_hal *VAR_3, u_int VAR_4, uint32_t VAR_5)
{
 FUNC_3(VAR_4 < FUNC_1(VAR_3)->ah_caps.halTotalQueues);
 FUNC_3(FUNC_0(VAR_3)->ah_txq[VAR_4].tqi_type != VAR_2);





 FUNC_3((FUNC_4(VAR_3, VAR_1) & (1 << VAR_4)) == 0);

 FUNC_5(VAR_3, FUNC_2(VAR_4), VAR_5);

 return VAR_0;
}
