
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int limb ;
typedef int * largefelem ;
typedef int const* felem ;



__attribute__((used)) static void FUNC_0(largefelem VAR_0, const felem VAR_1)
{
    static const limb VAR_2 = (((limb) 1) << 63) - (((limb) 1) << 6);
    static const limb VAR_3 = (((limb) 1) << 63) - (((limb) 1) << 5);

    VAR_0[0] += VAR_2 - VAR_1[0];
    VAR_0[1] += VAR_3 - VAR_1[1];
    VAR_0[2] += VAR_3 - VAR_1[2];
    VAR_0[3] += VAR_3 - VAR_1[3];
    VAR_0[4] += VAR_3 - VAR_1[4];
    VAR_0[5] += VAR_3 - VAR_1[5];
    VAR_0[6] += VAR_3 - VAR_1[6];
    VAR_0[7] += VAR_3 - VAR_1[7];
    VAR_0[8] += VAR_3 - VAR_1[8];
}
