
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halNumGpioPins; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef size_t HAL_GPIO_MUX_TYPE ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ath_hal*,int ,int,int) ;
 int FUNC_7 (struct ath_hal*,int ,int ) ;
 int FUNC_8 (struct ath_hal*,int,int) ;
 int FUNC_9 (struct ath_hal*,int,int) ;

HAL_BOOL
FUNC_10(
    struct ath_hal *VAR_18,
    u_int32_t VAR_19,
    HAL_GPIO_MUX_TYPE VAR_20)
{
    u_int32_t VAR_21;
    u_int32_t VAR_22;
    u_int8_t VAR_23 = 0;
    static const u_int32_t VAR_24[] = {

        140,

        139,

        138,

        146,

        145,

        135,

        130,

        141,

        142,

        143,

        144,

        128,

        129,

        147,

        148,

        136,

        137,

        134,

        133,

        132,

        131,
    };

    FUNC_5(VAR_19 < FUNC_0(VAR_18)->ah_caps.halNumGpioPins);
    if ((VAR_19 == VAR_3) ||
        (VAR_19 == VAR_2))
    {
        return VAR_0;
    }


    if ((int) VAR_20 < FUNC_1(VAR_24))
    {
        VAR_21 = VAR_24[VAR_20];
    } else {
        return VAR_0;
    }

    if (VAR_19 <= VAR_4) {
        FUNC_7(VAR_18,
            FUNC_2(VAR_18, VAR_5), VAR_6);
    }
    if (VAR_23 && (FUNC_4(VAR_18) || FUNC_3(VAR_18)))
    {



        return VAR_1;
    } else
    {

        FUNC_8(VAR_18, VAR_19, VAR_21);
    }


    VAR_22 = 2 * VAR_19;

    FUNC_6(VAR_18,
               FUNC_2(VAR_18, VAR_7),
               (VAR_9 << VAR_22),
               (VAR_8 << VAR_22));
    return VAR_1;
}
