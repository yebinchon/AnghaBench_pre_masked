
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
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(struct ath_hal *VAR_5, u_int32_t VAR_6)
{
    u_int32_t VAR_7;

    if (FUNC_0(VAR_5) || FUNC_2(VAR_5) || FUNC_1(VAR_5)) {
        VAR_7 = FUNC_3(VAR_5, VAR_2);
        if (VAR_6) {
            VAR_7 &= ~VAR_4;
            VAR_7 |= FUNC_5(VAR_1, VAR_4);
        } else {
            VAR_7 &= ~VAR_4;
            VAR_7 |= FUNC_5(VAR_0, VAR_4);
        }
        FUNC_4(VAR_5, VAR_2, VAR_7 | VAR_3);

    }
}
