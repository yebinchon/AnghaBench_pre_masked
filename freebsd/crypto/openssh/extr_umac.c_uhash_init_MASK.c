
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
typedef int uhash_ctx ;
typedef int buf ;
typedef int aes_int_key ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_4__ {int* poly_key_8; int* poly_accum; int* ip_keys; int* ip_trans; int hash; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int ,int,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(uhash_ctx_t VAR_2, aes_int_key VAR_3)
{
    int VAR_4;
    UINT8 VAR_5[(8*VAR_0+4)*sizeof(UINT64)];


    FUNC_4(VAR_2, 0, sizeof(uhash_ctx));


    FUNC_5(&VAR_2->hash, VAR_3);


    FUNC_2(VAR_5, VAR_3, 2, sizeof(VAR_5));
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {




        FUNC_3(VAR_2->poly_key_8+VAR_4, VAR_5+24*VAR_4, 8);
        FUNC_0(VAR_2->poly_key_8+VAR_4, 8, 8);

        VAR_2->poly_key_8[VAR_4] &= ((UINT64)0x01ffffffu << 32) + 0x01ffffffu;
        VAR_2->poly_accum[VAR_4] = 1;
    }


    FUNC_2(VAR_5, VAR_3, 3, sizeof(VAR_5));
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
          FUNC_3(VAR_2->ip_keys+4*VAR_4, VAR_5+(8*VAR_4+4)*sizeof(UINT64),
                                                 4*sizeof(UINT64));
    FUNC_0(VAR_2->ip_keys, sizeof(UINT64),
                                                  sizeof(VAR_2->ip_keys));
    for (VAR_4 = 0; VAR_4 < VAR_0*4; VAR_4++)
        VAR_2->ip_keys[VAR_4] %= VAR_1;



    FUNC_2(VAR_2->ip_trans, VAR_3, 4, VAR_0 * sizeof(UINT32));
    FUNC_0(VAR_2->ip_trans, sizeof(UINT32),
                         VAR_0 * sizeof(UINT32));
    FUNC_1(VAR_5, sizeof(VAR_5));
}
