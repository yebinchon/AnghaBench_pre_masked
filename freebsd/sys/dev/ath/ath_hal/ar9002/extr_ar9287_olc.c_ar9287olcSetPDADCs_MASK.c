
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int txPower ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct ath_hal*,int) ;
 int FUNC_1 (struct ath_hal*,int,int) ;

void
FUNC_2(struct ath_hal *VAR_0, int32_t VAR_1,
    uint16_t VAR_2)
{
        uint32_t VAR_3;
        uint32_t VAR_4;



        VAR_3 = FUNC_0(VAR_0, 0xa270);
        VAR_3 = VAR_3 & 0xFCFFFFFF;
        VAR_3 = VAR_3 | (0x3 << 24);
        FUNC_1(VAR_0, 0xa270, VAR_3);



        VAR_3 = FUNC_0(VAR_0, 0xb270);
        VAR_3 = VAR_3 & 0xFCFFFFFF;
        VAR_3 = VAR_3 | (0x3 << 24);
        FUNC_1(VAR_0, 0xb270, VAR_3);



        if (VAR_2 == 0) {
                VAR_3 = FUNC_0(VAR_0, 0xa398);
                VAR_3 = VAR_3 & 0xff00ffff;
                VAR_4 = (VAR_1)&0xff;
                VAR_3 = VAR_3 | (VAR_4 << 16);
                FUNC_1(VAR_0, 0xa398, VAR_3);
        }



        if (VAR_2 == 1) {
                VAR_3 = FUNC_0(VAR_0, 0xb398);
                VAR_3 = VAR_3 & 0xff00ffff;
                VAR_4 = (VAR_1)&0xff;
                VAR_3 = VAR_3 | (VAR_4 << 16);
                FUNC_1(VAR_0, 0xb398, VAR_3);
        }
}
