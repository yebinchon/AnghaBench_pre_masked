
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_gpio_select; scalar_t__ ah_polarity; scalar_t__ ah_gpio_bit; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct ath_hal*,int) ;
 int FUNC_7 (struct ath_hal*,int,int) ;
 int FUNC_8 (struct ath_hal*,int) ;
 scalar_t__ FUNC_9 (struct ath_hal*) ;

void
FUNC_10(struct ath_hal *VAR_8)
{



    struct ath_hal_9300 *VAR_9 = FUNC_0(VAR_8);

    if (FUNC_3(VAR_8) || FUNC_2(VAR_8)) {

     if (FUNC_6(VAR_8, VAR_9->ah_gpio_select) == VAR_9->ah_polarity) {
            FUNC_5(VAR_8, FUNC_1(VAR_8, VAR_5),
                           VAR_6);
            FUNC_5(VAR_8, VAR_4, VAR_7);
        }
        else {
            FUNC_4(VAR_8, FUNC_1(VAR_8, VAR_5),
                           VAR_6);
            FUNC_4(VAR_8, VAR_4, VAR_7);
        }
    }
    else {

        FUNC_5(VAR_8, FUNC_1(VAR_8, VAR_0),
            VAR_1);


        FUNC_4(VAR_8, FUNC_1(VAR_8, VAR_2),
            VAR_3);
        FUNC_5(VAR_8, FUNC_1(VAR_8, VAR_2),
            (VAR_9->ah_gpio_select & 0x0f) << 4);





        FUNC_8(VAR_8, VAR_9->ah_gpio_select);
        FUNC_5(VAR_8, VAR_4, VAR_7);
    }
    if (FUNC_9(VAR_8)) {
        if (VAR_9->ah_gpio_bit == FUNC_6(VAR_8, VAR_9->ah_gpio_select)) {

            FUNC_7(VAR_8, VAR_9->ah_gpio_select, !VAR_9->ah_gpio_bit);
        } else {
            FUNC_7(VAR_8, VAR_9->ah_gpio_select, VAR_9->ah_gpio_bit);
        }
    }
}
