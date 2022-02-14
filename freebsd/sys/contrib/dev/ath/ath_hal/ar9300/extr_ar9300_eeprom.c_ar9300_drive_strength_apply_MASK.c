
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,unsigned long) ;
 int FUNC_3 (struct ath_hal_9300*,int ) ;

HAL_BOOL FUNC_4(struct ath_hal *VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_4);
    int VAR_6;
    unsigned long VAR_7;

    VAR_6 = FUNC_3(VAR_5, VAR_3);
    if (VAR_6) {
        VAR_7 = FUNC_1(VAR_4, VAR_0);
        VAR_7 &= ~0x00ffffc0;
        VAR_7 |= 0x5 << 21;
        VAR_7 |= 0x5 << 18;
        VAR_7 |= 0x5 << 15;
        VAR_7 |= 0x5 << 12;
        VAR_7 |= 0x5 << 9;
        VAR_7 |= 0x5 << 6;
        FUNC_2(VAR_4, VAR_0, VAR_7);

        VAR_7 = FUNC_1(VAR_4, VAR_1);
        VAR_7 &= ~0xffffffe0;
        VAR_7 |= 0x5 << 29;
        VAR_7 |= 0x5 << 26;
        VAR_7 |= 0x5 << 23;
        VAR_7 |= 0x5 << 20;
        VAR_7 |= 0x5 << 17;
        VAR_7 |= 0x5 << 14;
        VAR_7 |= 0x5 << 11;
        VAR_7 |= 0x5 << 8;
        VAR_7 |= 0x5 << 5;
        FUNC_2(VAR_4, VAR_1, VAR_7);

        VAR_7 = FUNC_1(VAR_4, VAR_2);
        VAR_7 &= ~0xff800000;
        VAR_7 |= 0x5 << 29;
        VAR_7 |= 0x5 << 26;
        VAR_7 |= 0x5 << 23;
        FUNC_2(VAR_4, VAR_2, VAR_7);
    }
    return 0;
}
