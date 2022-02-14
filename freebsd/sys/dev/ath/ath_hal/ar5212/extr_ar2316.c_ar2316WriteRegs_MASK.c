
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal_5212 {scalar_t__ ah_cwCalRequire; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ath_hal*,int ,int,int) ;
 int FUNC_2 (struct ath_hal*,int) ;
 int FUNC_3 (struct ath_hal*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct ath_hal *VAR_4, u_int VAR_5, u_int VAR_6,
 int VAR_7)
{
 struct ath_hal_5212 *VAR_8 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, VAR_3, VAR_5, VAR_7);
 FUNC_1(VAR_4, VAR_2, 1, VAR_7);
 FUNC_1(VAR_4, VAR_1, VAR_6, VAR_7);


        if (!VAR_8->ah_cwCalRequire) {
  FUNC_3(VAR_4, 0xa358, (FUNC_2(VAR_4, 0xa358) & ~0x2));
        } else {
  VAR_8->ah_cwCalRequire = VAR_0;
        }
}
