
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct ath_hal *VAR_3, u_int32_t VAR_4, u_int32_t VAR_5)
{
    int VAR_6;
    u_int32_t VAR_7;


    if (VAR_4 > 11) {
        VAR_6 = FUNC_0(VAR_3, VAR_2);
    } else if (VAR_4 > 5) {
        VAR_6 = FUNC_0(VAR_3, VAR_1);
    } else {
        VAR_6 = FUNC_0(VAR_3, VAR_0);
    }






    VAR_7 = (VAR_4 % 6) * 5;

    FUNC_1(VAR_3, VAR_6, (VAR_5 << VAR_7), (0x1f << VAR_7));
}
