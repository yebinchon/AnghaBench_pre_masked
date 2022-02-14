
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int fe51 ;
typedef int e ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int ,int const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int*,int ) ;
 int FUNC_13 (int*,int const*,int) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int*,int const*,int const*) ;

__attribute__((used)) static void FUNC_16(uint8_t VAR_0[32], const uint8_t VAR_1[32],
                               const uint8_t VAR_2[32])
{
    fe51 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    uint8_t VAR_10[32];
    unsigned VAR_11 = 0;
    int VAR_12;
    FUNC_13(VAR_10, VAR_1, 32);
    VAR_10[0] &= 0xf8;
    VAR_10[31] &= 0x7f;
    VAR_10[31] |= 0x40;
    FUNC_6(VAR_3, VAR_2);
    FUNC_2(VAR_4);
    FUNC_1(VAR_5);
    FUNC_4(VAR_6, VAR_3);
    FUNC_2(VAR_7);

    for (VAR_12 = 254; VAR_12 >= 0; --VAR_12) {
        unsigned int VAR_13 = 1 & (VAR_10[VAR_12 / 8] >> (VAR_12 & 7));

        VAR_11 ^= VAR_13;
        FUNC_5(VAR_4, VAR_6, VAR_11);
        FUNC_5(VAR_5, VAR_7, VAR_11);
        VAR_11 = VAR_13;
        FUNC_11(VAR_8, VAR_6, VAR_7);
        FUNC_11(VAR_9, VAR_4, VAR_5);
        FUNC_3(VAR_4, VAR_4, VAR_5);
        FUNC_3(VAR_5, VAR_6, VAR_7);
        FUNC_8(VAR_7, VAR_8, VAR_4);
        FUNC_8(VAR_5, VAR_5, VAR_9);
        FUNC_10(VAR_8, VAR_9);
        FUNC_10(VAR_9, VAR_4);
        FUNC_3(VAR_6, VAR_7, VAR_5);
        FUNC_11(VAR_5, VAR_7, VAR_5);
        FUNC_8(VAR_4, VAR_9, VAR_8);
        FUNC_11(VAR_9, VAR_9, VAR_8);
        FUNC_10(VAR_5, VAR_5);
        FUNC_9(VAR_7, VAR_9);
        FUNC_10(VAR_6, VAR_6);
        FUNC_3(VAR_8, VAR_8, VAR_7);
        FUNC_8(VAR_7, VAR_3, VAR_5);
        FUNC_8(VAR_5, VAR_9, VAR_8);
    }

    FUNC_7(VAR_5, VAR_5);
    FUNC_8(VAR_4, VAR_4, VAR_5);
    FUNC_12(VAR_0, VAR_4);

    FUNC_0(VAR_10, sizeof(VAR_10));
}
