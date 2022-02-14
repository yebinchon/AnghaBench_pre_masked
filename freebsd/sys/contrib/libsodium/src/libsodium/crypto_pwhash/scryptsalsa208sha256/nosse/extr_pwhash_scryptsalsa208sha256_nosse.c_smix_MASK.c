
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int escrypt_block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int *,size_t) ;
 int FUNC_5 (int *,size_t) ;

__attribute__((used)) static void
FUNC_6(uint8_t *VAR_0, size_t VAR_1, uint64_t VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
    uint32_t *VAR_5 = VAR_4;
    uint32_t *VAR_6 = &VAR_4[32 * VAR_1];
    uint32_t *VAR_7 = &VAR_4[64 * VAR_1];
    uint64_t VAR_8;
    uint64_t VAR_9;
    size_t VAR_10;


    for (VAR_10 = 0; VAR_10 < 32 * VAR_1; VAR_10++) {
        VAR_5[VAR_10] = FUNC_0(&VAR_0[4 * VAR_10]);
    }

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8 += 2) {

        FUNC_2((escrypt_block_t *) &VAR_3[VAR_8 * (32 * VAR_1)], (escrypt_block_t *) VAR_5,
               128 * VAR_1);


        FUNC_4(VAR_5, VAR_6, VAR_7, VAR_1);


        FUNC_2((escrypt_block_t *) &VAR_3[(VAR_8 + 1) * (32 * VAR_1)],
               (escrypt_block_t *) VAR_6, 128 * VAR_1);


        FUNC_4(VAR_6, VAR_5, VAR_7, VAR_1);
    }


    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8 += 2) {

        VAR_9 = FUNC_5(VAR_5, VAR_1) & (VAR_2 - 1);


        FUNC_3((escrypt_block_t *) VAR_5, (escrypt_block_t *) &VAR_3[VAR_9 * (32 * VAR_1)],
               128 * VAR_1);
        FUNC_4(VAR_5, VAR_6, VAR_7, VAR_1);


        VAR_9 = FUNC_5(VAR_6, VAR_1) & (VAR_2 - 1);


        FUNC_3((escrypt_block_t *) VAR_6, (escrypt_block_t *) &VAR_3[VAR_9 * (32 * VAR_1)],
               128 * VAR_1);
        FUNC_4(VAR_6, VAR_5, VAR_7, VAR_1);
    }

    for (VAR_10 = 0; VAR_10 < 32 * VAR_1; VAR_10++) {
        FUNC_1(&VAR_0[4 * VAR_10], VAR_5[VAR_10]);
    }
}
