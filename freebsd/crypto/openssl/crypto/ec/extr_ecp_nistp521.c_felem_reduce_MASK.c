
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int limb ;
typedef int* largefelem ;
typedef int* felem ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(felem VAR_2, const largefelem VAR_3)
{
    u64 VAR_4, VAR_5;

    VAR_2[0] = ((limb) VAR_3[0]) & VAR_1;
    VAR_2[1] = ((limb) VAR_3[1]) & VAR_1;
    VAR_2[2] = ((limb) VAR_3[2]) & VAR_1;
    VAR_2[3] = ((limb) VAR_3[3]) & VAR_1;
    VAR_2[4] = ((limb) VAR_3[4]) & VAR_1;
    VAR_2[5] = ((limb) VAR_3[5]) & VAR_1;
    VAR_2[6] = ((limb) VAR_3[6]) & VAR_1;
    VAR_2[7] = ((limb) VAR_3[7]) & VAR_1;
    VAR_2[8] = ((limb) VAR_3[8]) & VAR_1;



    VAR_2[1] += ((limb) VAR_3[0]) >> 58;
    VAR_2[1] += (((limb) (VAR_3[0] >> 64)) & VAR_0) << 6;




    VAR_2[2] += ((limb) (VAR_3[0] >> 64)) >> 52;

    VAR_2[2] += ((limb) VAR_3[1]) >> 58;
    VAR_2[2] += (((limb) (VAR_3[1] >> 64)) & VAR_0) << 6;
    VAR_2[3] += ((limb) (VAR_3[1] >> 64)) >> 52;

    VAR_2[3] += ((limb) VAR_3[2]) >> 58;
    VAR_2[3] += (((limb) (VAR_3[2] >> 64)) & VAR_0) << 6;
    VAR_2[4] += ((limb) (VAR_3[2] >> 64)) >> 52;

    VAR_2[4] += ((limb) VAR_3[3]) >> 58;
    VAR_2[4] += (((limb) (VAR_3[3] >> 64)) & VAR_0) << 6;
    VAR_2[5] += ((limb) (VAR_3[3] >> 64)) >> 52;

    VAR_2[5] += ((limb) VAR_3[4]) >> 58;
    VAR_2[5] += (((limb) (VAR_3[4] >> 64)) & VAR_0) << 6;
    VAR_2[6] += ((limb) (VAR_3[4] >> 64)) >> 52;

    VAR_2[6] += ((limb) VAR_3[5]) >> 58;
    VAR_2[6] += (((limb) (VAR_3[5] >> 64)) & VAR_0) << 6;
    VAR_2[7] += ((limb) (VAR_3[5] >> 64)) >> 52;

    VAR_2[7] += ((limb) VAR_3[6]) >> 58;
    VAR_2[7] += (((limb) (VAR_3[6] >> 64)) & VAR_0) << 6;
    VAR_2[8] += ((limb) (VAR_3[6] >> 64)) >> 52;

    VAR_2[8] += ((limb) VAR_3[7]) >> 58;
    VAR_2[8] += (((limb) (VAR_3[7] >> 64)) & VAR_0) << 6;




    VAR_4 = ((limb) (VAR_3[7] >> 64)) >> 52;

    VAR_4 += ((limb) VAR_3[8]) >> 58;
    VAR_4 += (((limb) (VAR_3[8] >> 64)) & VAR_0) << 6;
    VAR_5 = ((limb) (VAR_3[8] >> 64)) >> 52;

    VAR_4 <<= 1;
    VAR_5 <<= 1;

    VAR_2[0] += VAR_4;
    VAR_2[1] += VAR_5;

    VAR_2[1] += VAR_2[0] >> 58;
    VAR_2[0] &= VAR_1;





}
