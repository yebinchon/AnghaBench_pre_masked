
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(struct ath_hal *VAR_1, u_int32_t VAR_2,
    u_int32_t *VAR_3, u_int32_t *VAR_4)
{
    u_int32_t VAR_5, VAR_6;





    for (VAR_5 = 31; VAR_5 > 0; VAR_5--) {
        if ((VAR_2 >> VAR_5) & 0x1) {
            break;
        }
    }

    FUNC_0(VAR_5);
    VAR_5 = 14 - (VAR_5 - VAR_0);






    VAR_6 = VAR_2 + (1 << (VAR_0 - VAR_5 - 1));

    *VAR_3 = VAR_6 >> (VAR_0 - VAR_5);
    *VAR_4 = VAR_5 - 16;
}
