
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {scalar_t__ ah_hw_green_tx_enable; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ,int ,unsigned int) ;

void
FUNC_3(struct ath_hal *VAR_6)
{
    unsigned int VAR_7 = 0x2d;
    unsigned int VAR_8 = 0x25;
    unsigned int VAR_9 = 0x1d;
    unsigned int VAR_10 = 0x15;
    unsigned int VAR_11 = 0xd;
    struct ath_hal_9300 *VAR_12 = FUNC_0(VAR_6);

    if (FUNC_1(VAR_6) && VAR_12->ah_hw_green_tx_enable) {
        FUNC_2(VAR_6, VAR_5,
                             VAR_0, VAR_7);
        FUNC_2(VAR_6, VAR_5,
                             VAR_1, VAR_8);
        FUNC_2(VAR_6, VAR_5,
                             VAR_2, VAR_9);
        FUNC_2(VAR_6, VAR_5,
                             VAR_3, VAR_10);
        FUNC_2(VAR_6, VAR_5,
                             VAR_4, VAR_11);
    }
}
