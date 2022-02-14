
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;

void
FUNC_6(struct ath_hal *VAR_13, u_int32_t VAR_14)
{
    u_int32_t VAR_15;

    if (FUNC_3(VAR_13) || FUNC_1(VAR_13)) {

        VAR_14 |= VAR_6;
    }
    if (FUNC_2(VAR_13) || FUNC_0(VAR_13)) {

        VAR_14 |= VAR_8;
    }
    FUNC_5(VAR_13, VAR_9,
        VAR_14 | VAR_10 | VAR_7);
    VAR_15 = 0;
    if (VAR_14 & VAR_12) {
        VAR_15 |= VAR_3;
    }
    if (VAR_14 & VAR_11) {
        VAR_15 |= VAR_2 | VAR_1;
    }
    FUNC_5(VAR_13, VAR_0, VAR_15);
    if (VAR_15) {
        FUNC_5(VAR_13, VAR_4,
            FUNC_4(VAR_13, VAR_4) | VAR_5);
    } else {
        FUNC_5(VAR_13, VAR_4,
            FUNC_4(VAR_13, VAR_4) &~ VAR_5);
    }
}
