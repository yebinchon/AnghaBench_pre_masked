
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int* smallfelem ;
typedef int limb ;


 int* VAR_0 ;

__attribute__((used)) static limb FUNC_0(const smallfelem VAR_1)
{
    limb VAR_2;
    u64 VAR_3;

    u64 VAR_4 = VAR_1[0] | VAR_1[1] | VAR_1[2] | VAR_1[3];
    VAR_4--;
    VAR_4 &= VAR_4 << 32;
    VAR_4 &= VAR_4 << 16;
    VAR_4 &= VAR_4 << 8;
    VAR_4 &= VAR_4 << 4;
    VAR_4 &= VAR_4 << 2;
    VAR_4 &= VAR_4 << 1;
    VAR_4 = 0 - (VAR_4 >> 63);

    VAR_3 = (VAR_1[0] ^ VAR_0[0]) |
        (VAR_1[1] ^ VAR_0[1]) |
        (VAR_1[2] ^ VAR_0[2]) | (VAR_1[3] ^ VAR_0[3]);
    VAR_3--;
    VAR_3 &= VAR_3 << 32;
    VAR_3 &= VAR_3 << 16;
    VAR_3 &= VAR_3 << 8;
    VAR_3 &= VAR_3 << 4;
    VAR_3 &= VAR_3 << 2;
    VAR_3 &= VAR_3 << 1;
    VAR_3 = 0 - (VAR_3 >> 63);

    VAR_4 |= VAR_3;

    VAR_2 = VAR_4;
    VAR_2 |= ((limb) VAR_4) << 64;
    return VAR_2;
}
