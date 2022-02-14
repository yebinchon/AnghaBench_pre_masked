
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halKeyCacheSize; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_9 (struct ath_hal*,int ) ;
 int FUNC_10 (struct ath_hal*,char*,...) ;

HAL_BOOL
FUNC_11(struct ath_hal *VAR_2)
{

    const HAL_CAPABILITIES *VAR_3 = &FUNC_0(VAR_2)->ah_caps;
    u_int32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    u_int32_t VAR_9, VAR_10;
    u_int16_t VAR_11 = 0;
    u_int32_t VAR_12 = 0;
    u_int32_t VAR_13;

    FUNC_10(VAR_2, "Slot   Key\t\t\t          Valid  Type  Mac  \n");

    for (VAR_11 = 0 ; VAR_11 < VAR_3->halKeyCacheSize; VAR_11++) {
        VAR_4 = FUNC_9(VAR_2, FUNC_1(VAR_11));
        VAR_5 = FUNC_9(VAR_2, FUNC_2(VAR_11));
        VAR_6 = FUNC_9(VAR_2, FUNC_3(VAR_11));
        VAR_7 = FUNC_9(VAR_2, FUNC_4(VAR_11));
        VAR_8 = FUNC_9(VAR_2, FUNC_5(VAR_11));

        VAR_13 = FUNC_9(VAR_2, FUNC_8(VAR_11));

        VAR_10 = FUNC_9(VAR_2, FUNC_6(VAR_11));
        VAR_9 = FUNC_9(VAR_2, FUNC_7(VAR_11));

        if (VAR_9 & VAR_1) {
            VAR_12 = 1;
        } else {
            VAR_12 = 0;
        }

        if ((VAR_9 != 0) && (VAR_10 != 0)) {
            VAR_9 &= ~0x8000;
            VAR_9 <<= 1;
            VAR_9 |= ((VAR_10 & (1 << 31) )) >> 31;
            VAR_10 <<= 1;
        }

        FUNC_10(VAR_2,
            "%03d    "
            "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
            "   %02d     %02d    "
            "%02x:%02x:%02x:%02x:%02x:%02x \n",
            VAR_11,
            (VAR_4 << 24) >> 24, (VAR_4 << 16) >> 24,
            (VAR_4 << 8) >> 24, VAR_4 >> 24,
            (VAR_5 << 24) >> 24, (VAR_5 << 16) >> 24,

            (VAR_6 << 24) >> 24, (VAR_6 << 16) >> 24,
            (VAR_6 << 8) >> 24, VAR_6 >> 24,
            (VAR_7 << 24) >> 24, (VAR_7 << 16) >> 24,

            (VAR_8 << 24) >> 24, (VAR_8 << 16) >> 24,
            (VAR_8 << 8) >> 24, VAR_8 >> 24,
            VAR_12, VAR_13,
            (VAR_10 << 24) >> 24, (VAR_10 << 16) >> 24, (VAR_10 << 8) >> 24,
            (VAR_10) >> 24, (VAR_9 << 24) >> 24, (VAR_9 << 16) >> 24 );
    }

    return VAR_0;
}
