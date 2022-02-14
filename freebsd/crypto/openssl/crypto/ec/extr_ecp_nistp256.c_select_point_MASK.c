
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int* smallfelem ;


 int VAR_0 ;
 int FUNC_0 (unsigned int**,int ,int) ;

__attribute__((used)) static void FUNC_1(const u64 VAR_1, unsigned int VAR_2,
                         const smallfelem VAR_3[16][3], smallfelem VAR_4[3])
{
    unsigned VAR_5, VAR_6;
    u64 *VAR_7 = &VAR_4[0][0];

    FUNC_0(VAR_4, 0, sizeof(*VAR_4) * 3);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        const u64 *VAR_8 = (u64 *)&VAR_3[VAR_5][0][0];
        u64 VAR_9 = VAR_5 ^ VAR_1;
        VAR_9 |= VAR_9 >> 4;
        VAR_9 |= VAR_9 >> 2;
        VAR_9 |= VAR_9 >> 1;
        VAR_9 &= 1;
        VAR_9--;
        for (VAR_6 = 0; VAR_6 < VAR_0 * 3; VAR_6++)
            VAR_7[VAR_6] |= VAR_8[VAR_6] & VAR_9;
    }
}
