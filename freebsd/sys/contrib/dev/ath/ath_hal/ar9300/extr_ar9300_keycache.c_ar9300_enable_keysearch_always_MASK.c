
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_2, int VAR_3)
{
    u_int32_t VAR_4;

    if (!VAR_2) {
        return;
    }
    VAR_4 = FUNC_0(VAR_2, VAR_1);
    if (VAR_3) {
        VAR_4 |= VAR_0;
    } else {
        VAR_4 &= ~VAR_0;
    }
    FUNC_1(VAR_2, VAR_1, VAR_4);
}
