
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(uint64_t VAR_0)
{

    static const uint32_t VAR_1[7] = {
        0x08962595,
        0x112a4aaa,
        0x024c934f,
        0x04711c73,
        0x0781e07c,
        0x1801ff80,
        0x1ffe0000};
    uint64_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_2 = VAR_1[0];
    VAR_3 = VAR_1[1];
    VAR_4 = VAR_1[2];
    VAR_2 &= VAR_0;
    VAR_5 = VAR_1[3];
    FUNC_0(VAR_2, VAR_2);
    VAR_6 = VAR_1[4];
    VAR_3 &= VAR_0;
    FUNC_0(VAR_3, VAR_3);
    VAR_4 &= VAR_0;
    VAR_7 = VAR_1[5];
    FUNC_0(VAR_4, VAR_4);
    VAR_8 = VAR_1[6];
    VAR_5 &= VAR_0;
    FUNC_0(VAR_5, VAR_5);
    VAR_6 &= VAR_0;
    FUNC_0(VAR_6, VAR_6);
    VAR_7 &= VAR_0;
    FUNC_0(VAR_7, VAR_7);
    VAR_8 &= VAR_0;
    FUNC_0(VAR_8, VAR_8);

    return((VAR_8&1)<<6) | ((VAR_7&1)<<5) | ((VAR_6&1)<<4) | ((VAR_5&1)<<3) | ((VAR_4&1)<<2) | ((VAR_3&1)<<1) | (VAR_2&1);
}
