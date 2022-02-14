
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
 int FUNC_0 (struct ath_hal*,int ) ;

u_int32_t
FUNC_1(struct ath_hal *VAR_7)
{
    u_int32_t VAR_8 = FUNC_0(VAR_7, VAR_4);
    u_int32_t VAR_9 = FUNC_0(VAR_7, VAR_0);
    if (VAR_9 & VAR_3) {
        VAR_8 |= VAR_6;
    }
    if (VAR_9 & (VAR_2 | VAR_1)) {
        VAR_8 |= VAR_5;
    }
    return VAR_8;
}
