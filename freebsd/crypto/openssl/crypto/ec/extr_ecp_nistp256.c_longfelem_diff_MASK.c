
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* longfelem ;
typedef int limb ;



__attribute__((used)) static void FUNC_0(longfelem VAR_0, const longfelem VAR_1)
{
    static const limb VAR_2 =
        (((limb) 1) << 70) - (((limb) 1) << 8) + (((limb) 1) << 6);
    static const limb VAR_3 = (((limb) 1) << 70) + (((limb) 1) << 40);
    static const limb VAR_4 = (((limb) 1) << 70);
    static const limb VAR_5 =
        (((limb) 1) << 70) - (((limb) 1) << 40) - (((limb) 1) << 38) +
        (((limb) 1) << 6);
    static const limb VAR_6 = (((limb) 1) << 70) - (((limb) 1) << 6);


    VAR_0[0] += VAR_2;
    VAR_0[1] += VAR_3;
    VAR_0[2] += VAR_4;
    VAR_0[3] += VAR_5;
    VAR_0[4] += VAR_6;
    VAR_0[5] += VAR_6;
    VAR_0[6] += VAR_6;
    VAR_0[7] += VAR_6;


    VAR_0[0] -= VAR_1[0];
    VAR_0[1] -= VAR_1[1];
    VAR_0[2] -= VAR_1[2];
    VAR_0[3] -= VAR_1[3];
    VAR_0[4] -= VAR_1[4];
    VAR_0[5] -= VAR_1[5];
    VAR_0[6] -= VAR_1[6];
    VAR_0[7] -= VAR_1[7];
}
