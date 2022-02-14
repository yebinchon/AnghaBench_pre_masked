
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int ah_wa_reg_val; } ;
struct TYPE_4__ {scalar_t__ halMciSupport; } ;
struct TYPE_5__ {TYPE_1__ ah_caps; } ;
typedef int HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int) ;
 int FUNC_6 (struct ath_hal*) ;

HAL_BOOL
FUNC_7(struct ath_hal *VAR_6, u_int32_t VAR_7)
{
    HAL_BOOL VAR_8 = VAR_0;




    FUNC_4(VAR_6, FUNC_2(VAR_6, VAR_5), FUNC_0(VAR_6)->ah_wa_reg_val);
    FUNC_3(10);
    FUNC_4(VAR_6, VAR_1,
        VAR_2 | VAR_3);

    switch (VAR_7) {
    case 129:
        VAR_8 = FUNC_6(VAR_6);
        break;
    case 128:
    case 130:
        VAR_8 = FUNC_5(VAR_6, VAR_7);
        break;
    default:
        break;
    }







    return VAR_8;
}
