
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_wa_reg_val; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ath_hal*,int ,int ) ;
 int FUNC_8 (struct ath_hal*,int ) ;
 int FUNC_9 (struct ath_hal*,int ,int ) ;
 int FUNC_10 (struct ath_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct ath_hal *VAR_13, int VAR_14)
{
    struct ath_hal_9300 *VAR_15 = FUNC_0(VAR_13);

    FUNC_9(VAR_13, VAR_7, VAR_8);
    if (VAR_14 ) {
        if (FUNC_3(VAR_13) || FUNC_2(VAR_13)) {
            FUNC_10(VAR_13, VAR_9,
                    FUNC_8(VAR_13, VAR_9) & 0xFFFFFF00);
            FUNC_10(VAR_13, VAR_0,
                    FUNC_8(VAR_13, VAR_0) & 0xFFFFFF00);
            FUNC_10(VAR_13, VAR_6,
                    FUNC_8(VAR_13, VAR_6) & 0xFFF00000);
            FUNC_10(VAR_13, VAR_1, 0);
            FUNC_6(100);
        }

        FUNC_7(VAR_13, VAR_2, VAR_3);

        if (FUNC_3(VAR_13) || FUNC_2(VAR_13)) {





            FUNC_6(100);
        }

        if (!FUNC_4(VAR_13)) {

            FUNC_7(VAR_13, VAR_4, VAR_5);

            FUNC_6(2);
        }
    }




    {

        FUNC_10(VAR_13, FUNC_1(VAR_13, VAR_10),
               VAR_15->ah_wa_reg_val & ~VAR_11);
    }
}
