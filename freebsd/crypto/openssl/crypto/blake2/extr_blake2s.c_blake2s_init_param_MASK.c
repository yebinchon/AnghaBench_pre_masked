
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * h; } ;
typedef int BLAKE2S_PARAM ;
typedef TYPE_1__ BLAKE2S_CTX ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static void FUNC_3(BLAKE2S_CTX *VAR_0, const BLAKE2S_PARAM *VAR_1)
{
    const uint8_t *VAR_2 = (const uint8_t *)(VAR_1);
    size_t VAR_3;



    FUNC_0(sizeof(BLAKE2S_PARAM) == 32);
    FUNC_1(VAR_0);

    for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
        VAR_0->h[VAR_3] ^= FUNC_2(&VAR_2[VAR_3*4]);
    }
}
