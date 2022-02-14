
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint128_t ;
typedef int u64 ;
typedef int* smallfelem ;
typedef int felem ;


 int FUNC_0 (int*,int const) ;
 int* VAR_0 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(smallfelem VAR_1, const felem VAR_2)
{
    unsigned VAR_3;
    u64 VAR_4 = 0, VAR_5 = 0, VAR_6;

    FUNC_0(VAR_1, VAR_2);


    VAR_4--;






    for (VAR_3 = 3; VAR_3 < 4; VAR_3--) {
        u64 VAR_7;
        uint128_t VAR_8 = ((uint128_t) VAR_0[VAR_3]) - VAR_1[VAR_3];




        VAR_5 |= VAR_4 & ((u64)(VAR_8 >> 64));





        VAR_7 = VAR_0[VAR_3] ^ VAR_1[VAR_3];
        VAR_7--;
        VAR_7 &= VAR_7 << 32;
        VAR_7 &= VAR_7 << 16;
        VAR_7 &= VAR_7 << 8;
        VAR_7 &= VAR_7 << 4;
        VAR_7 &= VAR_7 << 2;
        VAR_7 &= VAR_7 << 1;
        VAR_7 = 0 - (VAR_7 >> 63);

        VAR_4 &= VAR_7;
    }





    VAR_5 |= VAR_4;


    FUNC_1(&VAR_1[0], &VAR_6, VAR_5 & VAR_0[0]);
    FUNC_1(&VAR_1[1], &VAR_6, VAR_6);
    FUNC_1(&VAR_1[2], &VAR_6, VAR_6);
    FUNC_1(&VAR_1[3], &VAR_6, VAR_6);

    FUNC_1(&VAR_1[1], &VAR_6, VAR_5 & VAR_0[1]);
    FUNC_1(&VAR_1[2], &VAR_6, VAR_6);
    FUNC_1(&VAR_1[3], &VAR_6, VAR_6);

    FUNC_1(&VAR_1[2], &VAR_6, VAR_5 & VAR_0[2]);
    FUNC_1(&VAR_1[3], &VAR_6, VAR_6);

    FUNC_1(&VAR_1[3], &VAR_6, VAR_5 & VAR_0[3]);
}
