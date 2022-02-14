
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (struct ath_hal*,scalar_t__) ;
 int FUNC_2 (struct ath_hal*) ;

__attribute__((used)) static u_int8_t FUNC_3(struct ath_hal *VAR_2,
                                               int VAR_3, u_int8_t *VAR_4)
{
    unsigned long VAR_5;
    u_int8_t VAR_6;
    VAR_6 = FUNC_2(VAR_2);
    if (VAR_3 <= 0 || VAR_3 > VAR_6) {
        *VAR_4 = 0;
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_2, FUNC_0(1) + VAR_3 * 4);
    *VAR_4 = ((VAR_5 >> 24) & 0xff);
    return VAR_1;
}
