
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int hal_num_gpio_pins; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef size_t HAL_GPIO_MUX_TYPE ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*,int ,int,int) ;
 int FUNC_6 (struct ath_hal*,int,int) ;

HAL_BOOL
FUNC_7(
    struct ath_hal *VAR_11,
    u_int32_t VAR_12,
    HAL_GPIO_MUX_TYPE VAR_13)
{

    u_int32_t VAR_14;
    u_int32_t VAR_15;
    u_int8_t VAR_16 = 0;

    static const u_int32_t VAR_17[] = {

        139,

        138,

        137,

        145,

        144,

        134,

        130,

        140,

        141,

        142,

        143,

        128,

        129,

        146,

        147,
        135,
        136,
        133,
        132,
        131
    };
    FUNC_4(VAR_12 < FUNC_0(VAR_11)->ah_caps.hal_num_gpio_pins);


    if ((int) VAR_13 < FUNC_1(VAR_17))
    {
        VAR_14 = VAR_17[VAR_13];
    } else {
        return VAR_0;
    }
    if (VAR_16 && FUNC_3(VAR_11))
    {
        return VAR_0;
    }


    FUNC_6(VAR_11, VAR_12, VAR_14);


    VAR_15 = 2*VAR_12;

    FUNC_5(VAR_11,
               FUNC_2(VAR_11, VAR_2),
               (VAR_4 << VAR_15),
               (VAR_3 << VAR_15));

    return VAR_1;

}
