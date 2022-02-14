
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(uint32_t VAR_8, uint32_t VAR_9)
{
    uint32_t VAR_10;
    uint32_t VAR_11;

    VAR_11 = (0x1 << FUNC_2()) - 1;

    VAR_9 &= VAR_11;


    if (VAR_9 == VAR_11 && (FUNC_1(VAR_4) || FUNC_1(VAR_5)))
        return -1;


    if (VAR_8 >= FUNC_3())
        return -1;

    if (FUNC_1(VAR_6) || FUNC_1(VAR_7)) {
        FUNC_5(FUNC_0(VAR_8), VAR_9);
        return 0;
    }





    VAR_10 = (VAR_8 & 0x3) * 8;






    switch (VAR_8 & 0xC) {
    case 0x0:
        FUNC_5(VAR_0,
                   (FUNC_4(VAR_0) & ~(0xFF << VAR_10)) |
                   VAR_9 << VAR_10);
        break;
    case 0x4:
        FUNC_5(VAR_1,
                   (FUNC_4(VAR_1) & ~(0xFF << VAR_10)) |
                   VAR_9 << VAR_10);
        break;
    case 0x8:
        FUNC_5(VAR_2,
                   (FUNC_4(VAR_2) & ~(0xFF << VAR_10)) |
                   VAR_9 << VAR_10);
        break;
    case 0xC:
        FUNC_5(VAR_3,
                   (FUNC_4(VAR_3) & ~(0xFF << VAR_10)) |
                   VAR_9 << VAR_10);
        break;
    }
    return 0;
}
